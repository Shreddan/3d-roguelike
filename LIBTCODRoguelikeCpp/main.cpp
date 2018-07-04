// Main.cpp : Defines the entry point for the console application.
//

#include "engine.hpp"

TileManager tileManager = TileManager();

Engine engine = Engine();

int main()
{
	TCODSystem::setFps(60);

	engine.init();

	while (!TCODConsole::isWindowClosed()) {
		engine.render();
		engine.update();
		TCODConsole::flush();
	}
    return 0;
}

