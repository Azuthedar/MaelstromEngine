#include <main.h>
#include <GameEngine\GameEngine.h>
#include <Renderer\Renderer.h>

int main()
{
	GameEngine *engine;
	Renderer *render;

	engine = new GameEngine();
	render = new Renderer();

	int i = 0;
	while (!glfwWindowShouldClose(render->getWindow()->getGLFWWindow()))
	{
		render->pollEvents();
	}
	return (0);
}