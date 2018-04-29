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

		static void ProcessInput();

		static Mouse mouse;

		static Keyboard kb;
	private:
};

