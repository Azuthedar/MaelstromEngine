#pragma once

#include <main.h>
#include <Renderer\Window.h>
#include <GameEngine\Input\Keyboard.h>
#include <GameEngine\Input\Mouse.h>

#define MAX_KEYS 1024
#define MAX_MBUTTONS 32

class Input
{
	public:
		Input();
		~Input();

		static bool GetKeyDown(int keyCode);
		static bool GetKeyPressed(int keyCode);
		static bool GetKeyReleased(int keyCode);

		static Mouse mouse;
		static Keyboard kb;

	private:
		static void KeyCallback(GLFWwindow* window, int key, int scancode, int action, int mods);

		static bool m_keys[MAX_KEYS];
		static bool m_MButtons[MAX_MBUTTONS];
};