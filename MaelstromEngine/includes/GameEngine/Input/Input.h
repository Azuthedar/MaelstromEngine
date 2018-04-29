#pragma once

#include <main.h>
#include <Renderer\Window.h>
#include <GameEngine\Input\Keyboard.h>
#include <GameEngine\Input\Mouse.h>

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
};