#pragma once

#include <main.h>
#include <GameEngine\Input.h>

class GameEngine
{
	public:
		GameEngine();
		~GameEngine();

		void Update();

		void setShouldQuit(bool shouldQuit);
		
		bool getShouldQuit();

	private:
		void CalculateDeltaTime();

		Input input;
		bool _shouldQuit;

		float _currTime, _prevTime;
};