#pragma once

#include <main.h>
#include <Renderer\Window.h>

class Renderer
{
	public:
		Renderer();
		~Renderer();

	private:
		void Init();

		Window *_window;
		int _width, _height;
};