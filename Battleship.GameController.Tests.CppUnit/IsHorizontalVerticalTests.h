#pragma once

#include <cppunit/TestFixture.h>
#include <cppunit/extensions/HelperMacros.h>
#include "../Battleship.GameController.Lib/GameController.h"

using namespace std;
using namespace Battleship::GameController;
using namespace Battleship::GameController::Contracts;

class IsHorizontalVerticalTests : public CPPUNIT_NS :: TestFixture
{
    CPPUNIT_TEST_SUITE (IsHorizontalVerticalTests);
    CPPUNIT_TEST (TestCase1);
    CPPUNIT_TEST_SUITE_END ();

    protected:
        void TestCase1 (void);
};