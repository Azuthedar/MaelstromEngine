#include <Renderer/Window.h>

Window::Window()
{
	this->width = 800;
	this->height = 600;
	this->windowType = WINDOW_FULLSCREEN;
	this->InitWindow();
	return ;
}

Window::Window(int width, int height)
{
	this->width = width;
	this->height = height;
	this->windowType = WINDOW_FULLSCREEN;
	this->InitWindow();
}

Window::Window(int width, int height, EWindowType type)
{
	this->width = width;
	this->height = height;
	this->windowType = type;
	this->InitWindow();
}

Window::~Window()
{
	glfwTerminate();
	std::cout << "Destroyed window" << std::endl;
	return ;
}

Window &Window::operator=(const Window &rhs)
{
	this->width = rhs.width;
	this->height = rhs.height;

	return (*this);
}
void Window::InitWindow()
{
	try
	{
		this->_window = glfwCreateWindow(this->width, this->height, "Maelstrom", NULL, NULL);
	}
	catch (...)
	{

	}

	if (this->_window == nullptr)
	{
		//TODO: Throw exception
		glfwTerminate();
		std::cout << "Failed to create window" << std::endl;
	}

	glfwMakeContextCurrent(this->_window);

	if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress))
	{
		std::cout << "Failed to initialize GLAD" << std::endl;
	}
	//Set viewport equal to glfw window size
	glViewport(0, 0, this->width, this->height);
}

void Window::ChangeWindow(EWindowType type)
{
	glfwDestroyWindow(this->_window);

	switch (type)
	{
		case WINDOW_FULLSCREEN:
		{

		}

		case WINDOW_WINDOWED_FULLSCREEN:
		{

		}

		case WINDOW_WINDOWED:
		{

		}
	}
}


/*SETTERS*/

/*GETTERS*/
GLFWwindow *Window::getGLFWWindow() { return (this->_window); }