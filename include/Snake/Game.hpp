#pragma once

#include <SFML/Graphics.hpp>
#include <Snake/GameState.hpp>

namespace Snake
{
	class Game
	{
	public:
		Game();
		~Game();
		
		void run();

	private:
		void handleEvents();
		void renderWindowContent();

		GameState state;
		
		sf::RenderWindow window;
	};
}
