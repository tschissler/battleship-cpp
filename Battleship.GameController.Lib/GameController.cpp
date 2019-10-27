#include "stdafx.h"
#include "GameController.h"

#include <stdlib.h>
#include <time.h>

#include <algorithm>
#include <stdexcept>

#include <iostream>
#include "..\Windows.Helpers\Console.h"
#include "..\Windows.Helpers\ConsoleColor.h"

namespace Battleship
{
  namespace GameController
  {
	using namespace std;
	using namespace Windows::Helpers;

	GameController::GameController()
	{
	}

	GameController::~GameController()
	{
	}

	bool GameController::CheckIsHit(std::list<Ship> & ships, Position shot)
	{
	  if (&ships == nullptr)
		throw std::invalid_argument(std::string("argument 'ships' is invalid"));

	  auto shipFound = find_if(ships.begin(), ships.end(), [&shot](Ship &s)
	  {
		auto posFound = find_if(s.Positions.begin(), s.Positions.end(), [&shot](Position &p)
		{
			if (p == shot)
			{
				return true;
			}

			return false;
		});
		return posFound != s.Positions.end();
	  });

	  return shipFound != ships.end();
	}

	list<Ship> GameController::InitializeShips()
	{
	  list<Ship> ships;
	  ships.insert(ships.end(), Ship("Aircraft Carrier", 5, ConsoleColor(ForegroundGreen)));
	  ships.insert(ships.end(), Ship("Battleship", 4, ConsoleColor(ForegroundRed)));
	  ships.insert(ships.end(), Ship("Submarine", 3, ConsoleColor(ForegroundMagenta)));
	  ships.insert(ships.end(), Ship("Destroyer", 3, ConsoleColor(ForegroundYellow)));
	  ships.insert(ships.end(), Ship("Patrol Boat", 2, ConsoleColor(ForegroundGold)));

	  return ships;
	}

	bool GameController::IsShipsValid(Ship ship)
	{
	  return ship.Positions.size() == ship.Size;
	}

	Position GameController::GetRandomPosition(int size)
	{
	  srand((unsigned int) time(NULL));
	  Letters lColumn = (Letters)(rand() % size);
	  int nRow = (rand() % size);

	  Position position(lColumn, nRow);
	  return position;
	}
  }
}




