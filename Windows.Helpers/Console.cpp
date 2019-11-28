#include "Console.h"

namespace Windows
{
  namespace Helpers
  {
    Console::Console()
    {
    }

    Console::~Console()
    {
    }

    void Console::SetColor(ConsoleColor consoleColor)
    {
      HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
      SetConsoleTextAttribute(hConsole, (WORD) consoleColor);
    }

    void Console::SetColor(ForegroundColor foreground, BackgroundColor background)
    {
      ConsoleColor consoleColor(foreground, background);
      SetColor(consoleColor);
    }

    void Console::SetForeColor(ForegroundColor foreground)
    {
      HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
      CONSOLE_SCREEN_BUFFER_INFO csbi;
      GetConsoleScreenBufferInfo(hConsole, &csbi);
      BackgroundColor background = (BackgroundColor) (csbi.wAttributes & 0xF0);
      ConsoleColor consoleColor(foreground, background);
      SetConsoleTextAttribute(hConsole, (WORD) consoleColor);
    }

    void Console::SetBackColor(BackgroundColor background)
    {
      HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
      CONSOLE_SCREEN_BUFFER_INFO csbi;
      GetConsoleScreenBufferInfo(hConsole, &csbi);
      ForegroundColor foreground = (ForegroundColor) (csbi.wAttributes & 0x0F);
      ConsoleColor consoleColor(foreground, background);
      SetConsoleTextAttribute(hConsole, (WORD)consoleColor);
    }

    void Console::Clear()
    {
      COORD topLeft = { 0, 0 };
      HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
      CONSOLE_SCREEN_BUFFER_INFO screen;
      DWORD written;

      GetConsoleScreenBufferInfo(console, &screen);
      FillConsoleOutputCharacterA(
        console, ' ', screen.dwSize.X * screen.dwSize.Y, topLeft, &written
      );
      FillConsoleOutputAttribute(
        console, FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_BLUE,
        screen.dwSize.X * screen.dwSize.Y, topLeft, &written
      );
      SetConsoleCursorPosition(console, topLeft);
    }

    void Console::Beep(int freq, int duration)
    {
      ::Beep(freq, duration);
    }
  }
}
