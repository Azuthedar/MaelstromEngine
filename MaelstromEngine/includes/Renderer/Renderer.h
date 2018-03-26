#pragma once

#include <main.h>
#include <GLFW/glfw3.h>
#include <Renderer\Window.h>

class Renderer
{
	public:
		Renderer();
		~Renderer();

		void Init();
	private:
		Window *_window;
};