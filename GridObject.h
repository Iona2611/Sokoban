#pragma once

// Project Includes
#include "Framework/SpriteObject.h"

// Forward Declartion 
// (only works with pointer refrences)
class Level;

class GridObject : public SpriteObject
{

public:

	GridObject();

	void SetGridPosition(sf::Vector2i _newPosition);
	void SetGridPosition(int _x, int _y);

	void SetLevel(Level*_newLevel);

private:

	sf::Vector2i m_gridPosition;
	Level* m_level;

};
