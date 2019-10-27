#include "stdafx.h"
#include "ConsoleColor.h"

namespace Windows
{
  namespace Helpers
  {
    ConsoleColor::ConsoleColor(ForegroundColor foreground, BackgroundColor background) : Foreground(foreground), Background(background)
    {
    }

    ConsoleColor::~ConsoleColor()
    {
    }

    ConsoleColor::operator int()
    {
      return Foreground + Background;
    }
  }
}
