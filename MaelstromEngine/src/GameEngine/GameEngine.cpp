#include "../../includes/GameEngine/GameEngine.h"

float GameEngine::_currTime = 0;
float GameEngine::_prevTime = 0;

#pragma region PUBLIC

#pragma region CONSTRUCTORS DECONSTRUCTORS
GameEngine::GameEngine()
{
	return ;
}

GameEngine::~GameEngine()
{
	return ;
}
#pragma endregion
void GameEngine::Update()
{
	if (Input::GetKeyDown(Input::kb.Zero))
		std::cout << "0 being held down" << std::endl;
	if (Input::GetKeyPressed(Input::kb.One))
		std::cout << "1 pressed" << std::endl;
	if (Input::GetKeyPressed(Input::kb.Escape))
		glfwSetWindowShouldClose(Window::getGLFWWindow(), true);
	//if (Input::GetKeyReleased(Input::kb.Two))
		//std::cout << "2 was released" << std::endl;
	CalculateDeltaTime();

	return;
}
#pragma region STATICS
float GameEngine::CalculateDeltaTime()
{
	float deltaTime = 0;
	_prevTime = _currTime;
	_currTime = static_cast<float>(clock());
	deltaTime = (_currTime - _prevTime) / CLOCKS_PER_SEC;
	//std::cout << deltaTime << std::endl;

	return (deltaTime);
}
void GameEngine::pollEvents(GLFWwindow *window)
{
	glfwSwapBuffers(window);
	glfwPollEvents();
}
#pragma endregion
#pragma endregion

#pragma region OPERATOR OVERLOADING
#pragma endregion

#pragma region PRIVATE

#pragma region STATICS

#pragma endregion
#pragma endregion

#pragma region SETTERS

#pragma endregion

#pragma region GETTERS
#pragma endregion