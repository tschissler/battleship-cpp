#pragma once
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <algorithm>
#include <list>

#include "../Battleship.GameController.Lib/Ship.h"

using namespace std;
using namespace Battleship::GameController::Contracts;

namespace Battleship
{
  namespace Ascii
  {
	class Program
	{
	private:
	  static list<Ship> myFleet;
	  static list<Ship> enemyFleet;

	public:
	  Program();
	  ~Program();

	public:
	  static void Main();
	  static void StartGame();

	private:
	  static void InitializeGame();

	  static void InitializeMyFleet();
	  static void InitializeEnemyFleet(list<Ship> &Fleet);

	public:
	  static Position ParsePosition(string input);
	  static Position GetRandomPosition();
	};
  }
}

