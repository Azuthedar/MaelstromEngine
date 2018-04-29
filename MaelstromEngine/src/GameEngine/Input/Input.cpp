#include <GameEngine\Input\Input.h>

Mouse Input::mouse;
Keyboard Input::kb;

Input::Input()
{
}

Input::~Input()
{
}

void Input::ProcessInput()
{
	GLFWwindow *window = Window::getGLFWWindow();
	if (glfwGetKey(window , kb.KPZero) == GLFW_PRESS)
	{
		glfwSetWindowShouldClose(window, true);
	}
}
