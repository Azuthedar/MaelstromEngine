#include <main.h>
#include <GameEngine\GameEngine.h>
#include <Renderer\Renderer.h>
#include <GameEngine\Input.h>

int main()
{
	Renderer *render;

	render = new Renderer();

	GLFWwindow *window = render->getWindow()->getGLFWWindow();

	while (!glfwWindowShouldClose(render->getWindow()->getGLFWWindow()))
	{
		window = render->getWindow()->getGLFWWindow();

		//TEMP
		glClearColor(0.2f, 0.3f, 0.3f, 1.0f);
		glClear(GL_COLOR_BUFFER_BIT);

		Input::ProcessInput(window);
		GameEngine::Update();
		GameEngine::pollEvents(window);
	}

	delete render;
	return (0);
}