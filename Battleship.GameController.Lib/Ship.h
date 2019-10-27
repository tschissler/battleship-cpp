#pragma once

#include <string>
#include <list>

#include "Position.h"
#include "..\Windows.Helpers\ConsoleColor.h"

namespace Battleship
{
  namespace GameController
  {
	namespace Contracts
	{
	  class Ship
	  {

	  public:
		Ship();
		Ship(std::string Name, int Size, Windows::Helpers::ConsoleColor Color = Windows::Helpers::ConsoleColor());
		~Ship();

	  public:

		/// <summary>
		/// Gets or sets the name.
		/// </summary>
		std::string Name;

		/// <summary>
		/// Gets or sets the positions.
		/// </summary>
		std::list<Position> Positions;

		/// <summary>
		/// The color of the ship
		/// </summary>
		Windows::Helpers::ConsoleColor Color;

		/// <summary>
		/// Gets or sets the size.
		/// </summary>
		int Size;

		/// <summary>
		/// The add position.
		/// </summary>
		/// <param name="input">
		/// The input.
		/// </param>
		void AddPosition(std::string input);
		void AddPosition(const Position &input);
	  };
	}
  }
}

