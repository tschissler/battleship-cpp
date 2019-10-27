#include "stdafx.h"
#include "CppUnitTest.h"
#include <iostream>

#include "..\Battleship.GameController.Lib\GameController.h"
#include "..\Battleship.Ascii.Lib\Program.h"

#include <windows.h> 
#pragma comment(lib,"winmm.lib")  //for MSV C++   

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

using namespace Battleship::GameController::Contracts;
using namespace Battleship::Ascii;

template<> std::wstring Microsoft::VisualStudio::CppUnitTestFramework::ToString<Position>(const Position& position)
{
  RETURN_WIDE_STRING("(" << (char) ('A' + position.Column) << "," << position.Row << ")");
}

namespace Battleship
{
  namespace Ascii
  {
    namespace Tests
    {
      TEST_CLASS(ParsePositionTests)
      {
      public:
		TEST_METHOD(ParsePositionTest)
		{
			string input = "a1";
			Position expected(Letters::A, 1);
			Position result = Program::ParsePosition(input);
			Assert::AreEqual(expected, result);
		}
      };
    }
  }
}
