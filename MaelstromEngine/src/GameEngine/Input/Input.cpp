#include <GameEngine\Input\Input.h>

Mouse Input::mouse;
Keyboard Input::kb;

bool Input::m_keys[MAX_KEYS];
bool Input::m_MButtons[MAX_MBUTTONS];

Input::Input()
{
}

Input::~Input()
{
}

bool Input::GetKeyPressed(unsigned int keyCode)
{
	if (keyCode >= MAX_KEYS)
		return (false);
	return (m_keys[keyCode]);
}

bool Input::GetKeyDown(unsigned int keyCode)
{
	if (keyCode >= MAX_KEYS)
		return (false);
	return (m_keys[keyCode]);
}

bool Input::GetKeyReleased(unsigned int keyCode)
{
	if (keyCode >= MAX_KEYS)
		return (false);
	if (!m_keys[keyCode])
		return (true);
	return (false);
}

