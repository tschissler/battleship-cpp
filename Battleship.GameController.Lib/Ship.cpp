#include "stdafx.h"
#include "Ship.h"
#include <iostream>
#include "..\Windows.Helpers\Console.h"
#include "..\Windows.Helpers\ConsoleColor.h"
using namespace std;
using namespace Windows::Helpers;

namespace Battleship
{
  namespace GameController
  {
	namespace Contracts
	{
	  Ship::Ship()
	  {
	  }

	  Ship::Ship(std::string Name, int Size, ConsoleColor Color) : Name(Name), Size(Size), Color(Color)
	  {
	  }

	  Ship::~Ship()
	  {
	  }

	  void Ship::AddPosition(string input)
	  {
		char cColumn = toupper(input.at(0));
		char cRow = input.at(1);  // Kommentar
		
		Letters lColumn = (Letters) (cColumn - 'A');
		int nRow = cRow - '0';
		
		Position position(lColumn, nRow);
		Positions.insert(Positions.begin(), position);
	  }
	  void Ship::AddPosition(const Position &inputPosition)
	  {
		  Positions.insert(Positions.begin(), inputPosition);
	  }
	}
  }
}


