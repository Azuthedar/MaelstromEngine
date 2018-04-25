#include <Renderer/Renderer.h>

Renderer::Renderer()
{
	//Defaults
	this->_width = 1920;
	this->_height = 1080;

	this->Init();
	return;
}

Renderer::~Renderer()
{
	delete this->_window;
	return ;
}

/*PUBLIC*/
void Renderer::pollEvents()
{
	glfwSwapBuffers(this->_window->getGLFWWindow());
	glfwPollEvents();
}

/*SETTERS*/

/*GETTERS*/
Window *Renderer::getWindow() { return (this->_window); }

/*PRIVATE*/
void Renderer::GLFWInit()
{
	glfwInit();
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 4);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 4);
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
}

void Renderer::Init()
{
	this->GLFWInit();
	this->_window = new Window(this->_width, this->_width);
}