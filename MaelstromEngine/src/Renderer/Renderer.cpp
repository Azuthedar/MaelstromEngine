#include <Renderer/Renderer.h>

Renderer::Renderer()
{
	//Defaults
	this->_width = 600;
	this->_height = 800;

	this->Init();
	return;
}

Renderer::~Renderer()
{
	delete this->_window;
	return ;
}

/*PUBLIC*/

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