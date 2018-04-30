#include <GameEngine\Input\Input.h>

Mouse Input::mouse;
Keyboard Input::kb;

bool Input::m_keys[MAX_KEYS];
bool Input::m_MButtons[MAX_MBUTTONS];

Input::Input()
{
	glfwSetKeyCallback(Window::getGLFWWindow(), KeyCallback);
}

Input::~Input()
{
}

bool Input::GetKeyPressed(int keyCode)
{
	if (keyCode >= MAX_KEYS)
		return (false);
	return (m_keys[keyCode]);
}

bool Input::GetKeyDown(int keyCode)
{
	if (keyCode >= MAX_KEYS)
		return (false);
	return (m_keys[keyCode]);
}

bool Input::GetKeyReleased(int keyCode)
{
	if (keyCode >= MAX_KEYS)
		return (false);
	if (!m_keys[keyCode])
		return (true);
	return (false);
}

void Input::KeyCallback(GLFWwindow* window, int key, int scancode, int action, int mods)
{
	m_keys[key] = (action != GLFW_RELEASE);
}

