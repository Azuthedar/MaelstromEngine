#pragma once

#include <GLFW\glfw3.h>
#include <iostream>

class Window
{
	public:
		Window();
		Window(int width, int height);
		~Window();

		Window	&operator=(const Window &rhs);

		void	InitWindow();

		int				width, height;

	private:
		void	CreateWindow();

		GLFWwindow		*_window;
};