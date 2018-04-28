#pragma once

#include <main.h>
#include <GameEngine\Input.h>

class GameEngine
{
	public:
		GameEngine();
		~GameEngine();

		static void Update();
		static void pollEvents(GLFWwindow *window);

		void setShouldQuit(bool shouldQuit);
		
		bool getShouldQuit();

	private:
		static float CalculateDeltaTime();

		Input input;
		bool _shouldQuit;

		static float _currTime, _prevTime;
};