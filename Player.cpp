// Project Includes
#include "Player.h"
#include "Framework/AssetManager.h"
#include "Level.h"

Player::Player()
	:GridObject()
{
	m_sprite.setTexture(AssetManager::GetTexture("graphics/player/playerStandDown.png"));

}

void Player::Input(sf::Event _gameEvent)
{
	// Read the input from the keyboard and conver it
	// to a direction to move in (and then move)

	// was the event a key press?
	if (_gameEvent.type == sf::Event::KeyPressed)
	{
		// Yes it was a key press!

		// What key was pressed?
		if (_gameEvent.key.code == sf::Keyboard::W)
		{
			// It was W!
			// Move up
			AttemptMove(sf::Vector2i(0, -1));
		
		}
		else if (_gameEvent.key.code == sf::Keyboard::A)
		{
			// It was A!
			// Move left
			AttemptMove(sf::Vector2i(-1, 0));

		}
		else if (_gameEvent.key.code == sf::Keyboard::S)
		{
			// It was S!
			// Move Down
			AttemptMove(sf::Vector2i(0, 1));

		}
		else if (_gameEvent.key.code == sf::Keyboard::D)
		{
			// It was D!
			// Move Right
			AttemptMove(sf::Vector2i(1, 0));

		}
	}
}

bool Player::AttemptMove(sf::Vector2i _direction)
{
	// Attempt to move in the given direction

	// Get current postion
	// Calculate if the space is empty 
	sf::Vector2i targetPos = m_gridPosition + _direction;

	// TODO: Check if the space is empty 

	// If empty move there
	return m_level->MoveObjectTo(this, targetPos);

}