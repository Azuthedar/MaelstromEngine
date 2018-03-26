#pragma once

#include <main.h>

class GameEngine
{
	public:
		GameEngine();
		~GameEngine();

		void Update();

	private:
		void CalculateDeltaTime();
		void Input();

		std::string _input;
		bool _shouldQuit;

		float _currTime, _prevTime;
};