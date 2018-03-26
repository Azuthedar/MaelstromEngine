#include <Renderer/Window.h>

Window::Window()
{
	this->width = 800;
	this->height = 600;
	this->InitWindow();
	return ;
}

Window::Window(int width, int height)
{
	this->width = width;
	this->height = height;
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
	glfwInit();
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 4);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 4);
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

	this->CreateWindow();
}

void Window::CreateWindow()
{
	this->_window = glfwCreateWindow(this->width, this->height, "Maelstrom Engine", NULL, NULL);

	if (this->_window == nullptr)
	{
		//TODO: Throw exception
		glfwTerminate();
		std::cout << "Failed to create window" << std::endl;
	}
	glfwMakeContextCurrent(this->_window);

}