#include <GameEngine\Input\Input.h>

Mouse Input::mouse;
Keyboard Input::kb;

Input::Input()
{
}

Input::~Input()
{
}

bool Input::GetKeyPressed(int keyCode)
{
	//TODO:: Make sure input is only received once if the button has not been released yet
	if (glfwGetKey(Window::getGLFWWindow(), keyCode) == GLFW_PRESS)
		return (true);
	return (false);
}

bool Input::GetKeyDown(int keyCode)
{
	if (glfwGetKey(Window::getGLFWWindow(), keyCode) == GLFW_PRESS)
		return (true);
	return (false);
}

bool Input::GetKeyReleased(int keyCode)
{
	//Gets called every frame if the key is not pressed
	if (glfwGetKey(Window::getGLFWWindow(), keyCode) == GLFW_RELEASE)
		return (true);
	return (false);
}

