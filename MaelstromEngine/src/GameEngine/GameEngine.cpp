#include "../../includes/GameEngine/GameEngine.h"

float DeltaTime = 0;

/*---------------------------------------------------------------------------- PUBLICS ------------------------------------------*/
GameEngine::GameEngine()
{
	this->_input = "";
	this->_shouldQuit = false;
	return ;
}

GameEngine::~GameEngine()
{
	return ;
}

void GameEngine::Update()
{
	this->CalculateDeltaTime();
	return;
}
/*---------------------------------------------------------------- OPERATOR OVERLOADING -----------------------------------------*/
/*---------------------------------------------------------------------------- PRIVATES -----------------------------------------*/
void GameEngine::CalculateDeltaTime()
{
	this->_prevTime = this->_currTime;
	this->_currTime = static_cast<float>(clock());
	DeltaTime = (this->_currTime - this->_prevTime) / CLOCKS_PER_SEC;
}

void GameEngine::Input()
{
	return ;
}
/*--------------------------------------------------------------------------- PROTECTED -----------------------------------------*/