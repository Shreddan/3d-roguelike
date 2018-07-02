// Main.cpp : Defines the entry point for the console application.
//

#include "engine.hpp"

TileManager tileManager = TileManager();

Engine engine = Engine();

int main()
{
	TCODSystem::setFps(30);

	engine.init();

	while (!TCODConsole::isWindowClosed()) {
		engine.update();
		engine.render();
		TCODConsole::flush();
	}
    return 0;
}

