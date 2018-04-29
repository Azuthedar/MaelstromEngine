#include <main.h>
#include <GameEngine\GameEngine.h>
#include <Renderer\Renderer.h>
#include <GameEngine\Input\Input.h>

int main()
{
	Renderer *render;

	render = new Renderer();

	GLFWwindow *window = Window::getGLFWWindow();

	while (!glfwWindowShouldClose(window))
	{
		window = Window::getGLFWWindow();

		//TEMP
		glClearColor(0.2f, 0.3f, 0.3f, 1.0f);
		glClear(GL_COLOR_BUFFER_BIT);

		Input::ProcessInput();
		GameEngine::Update();
		GameEngine::pollEvents(window);
	}

	delete render;
	return (0);
}