#pragma once

class GameService
{
private:
	void initialize();//Handles game initialisation
	void destroy();//Handles cleanup tasks

public:
	GameService();//Constructor
	~GameService();//Destructor

	void ignite();//initiates game
	void update();//updates game state
	void render();//renders each frame
	bool isRunning();//checks if the game is running
};