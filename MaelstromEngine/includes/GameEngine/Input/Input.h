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

		static bool GetKeyDown(unsigned int keyCode);
		static bool GetKeyPressed(unsigned int keyCode);
		static bool GetKeyReleased(unsigned int keyCode);

		static Mouse mouse;
		static Keyboard kb;

		static bool m_keys[MAX_KEYS];
		static bool m_MButtons[MAX_MBUTTONS];

	private:
};