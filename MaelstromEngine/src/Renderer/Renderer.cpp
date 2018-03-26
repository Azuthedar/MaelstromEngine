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

void Renderer::Init()
{
	this->_window = new Window(this->_width, this->_width);
}