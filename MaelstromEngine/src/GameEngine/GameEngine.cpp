#include "../../includes/GameEngine/GameEngine.h"

float GameEngine::_currTime = 0;
float GameEngine::_prevTime = 0;

#pragma region PUBLIC

#pragma region CONSTRUCTORS DECONSTRUCTORS
GameEngine::GameEngine()
{
	this->_shouldQuit = false;
	return ;
}

GameEngine::~GameEngine()
{
	return ;
}
#pragma endregion
void GameEngine::Update()
{
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
	std::cout << deltaTime << std::endl;

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

void GameEngine::setShouldQuit(bool shouldQuit) { this->_shouldQuit = shouldQuit; }

#pragma endregion

#pragma region GETTERS
bool GameEngine::getShouldQuit() { return (_shouldQuit); }
#pragma endregion