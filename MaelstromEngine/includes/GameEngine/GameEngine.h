#pragma once

#include <main.h>
#include <GameEngine\Input\Input.h>

class GameEngine
{
	public:
		GameEngine();
		~GameEngine();

		static void Update();
		static void pollEvents(GLFWwindow *window);

	private:

		static float CalculateDeltaTime();
		static float _currTime, _prevTime;
};