#pragma once

#include <main.h>

class Window
{
	public:
		Window();
		Window(int width, int height);
		~Window();

		Window	&operator=(const Window &rhs);

		void	InitWindow();
		void	framebuffer_size_callback(GLFWwindow *window, int width, int height);

		int				width, height;

	private:
		GLFWwindow		*_window;
};