#pragma once

#include "ConsoleColor.h"

namespace Windows
{
  namespace Helpers
  {
    class Console
    {
    public:
      Console();
      ~Console();

    public:
      static void SetColor(ConsoleColor consoleColor = ConsoleColor());
      static void SetColor(ForegroundColor foreground, BackgroundColor background);
      static void SetForeColor(ForegroundColor foreground);
      static void SetBackColor(BackgroundColor background);

    public:
      static void Clear();
      static void Beep(int freq = 800, int duration = 200);
    };
  }
}

