// Project Includes
#include "Player.h"
#include "Framework/AssetManager.h"

Player::Player()
	:GridObject()
{
	m_sprite.setTexture(AssetManager::GetTexture("graphics/playerStandDown.png"));

}