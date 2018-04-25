#pragma once

#include <main.h>
#include <Renderer\Window.h>

class Renderer
{
	public:
		Renderer();
		~Renderer();

		void pollEvents();

		Window *getWindow();

	private:
		void GLFWInit();
		void Init();

		Window *_window;
		int _width, _height;
};