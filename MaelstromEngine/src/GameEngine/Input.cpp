#include <GameEngine\Input.h>

Input::Input()
{
}

Input::~Input()
{
}

void Input::ProcessInput(GLFWwindow *window)
{
	if (glfwGetKey(window, GLFW_KEY_ESCAPE) == GLFW_PRESS)
	{
		glfwSetWindowShouldClose(window, true);
	}
}
