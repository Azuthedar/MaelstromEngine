#include <Renderer/Renderer.h>

Renderer::Renderer()
{
	this->_window = new Window(1920, 1080);
	return;
}

Renderer::~Renderer()
{
	delete this->_window;
	return ;
}

void Renderer::Init()
{

}