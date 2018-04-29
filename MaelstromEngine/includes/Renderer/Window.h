#pragma once

#include <main.h>

enum EWindowType
{
	WINDOW_FULLSCREEN = 0,
	WINDOW_WINDOWED_FULLSCREEN,
	WINDOW_WINDOWED
};


class Window
{
	public:
		Window();
		Window(int width, int height);
		Window(int width, int height, EWindowType type);
		~Window();

		Window	&operator=(const Window &rhs);

		void	InitWindow();
		void	ChangeWindow(EWindowType type);

		static GLFWwindow *getGLFWWindow();

		int				width, height;
		EWindowType		windowType;

	private:
		static GLFWwindow		*_window;
};