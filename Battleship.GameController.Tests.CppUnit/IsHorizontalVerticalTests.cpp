#include "IsHorizontalVerticalTests.h"

#include <stdlib.h>
#include <algorithm>
#include <stdexcept>
#include <iostream>

CPPUNIT_TEST_SUITE_REGISTRATION (IsHorizontalVerticalTests);

void IsHorizontalVerticalTests :: TestCase1(void)
{      
    bool result = true;

    CPPUNIT_ASSERT_EQUAL(false, result);
}

