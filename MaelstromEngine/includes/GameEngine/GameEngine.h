#pragma once

#include <main.h>
#include <GameEngine\Input\Input.h>

class GameEngine
{
	public:
		GameEngine();
		~GameEngine();

		void Init();
		void Update();
		void pollEvents(GLFWwindow *window);

	private:
		static void KeyCallback(GLFWwindow* window, int key, int scancode, int action, int mods);

		float CalculateDeltaTime();
		float _currTime, _prevTime;
};