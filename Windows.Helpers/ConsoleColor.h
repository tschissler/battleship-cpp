#pragma once

namespace Windows
{
  namespace Helpers
  {
    enum ForegroundColor
    {
      ForegroundBlack = 0x00,
      ForegroundDarkBlue = 0x01,
      ForegroundDarkGreen = 0x02,
      ForegroundPetrol = 0x03,
      ForegroundDarkRed = 0x04,
      ForegroundDarkMagenta = 0x05,
      ForegroundGold = 0x06,
      ForegroundLightGrey = 0x07,
      ForegroundDarkGrey = 0x08,
      ForegroundBlue = 0x09,
      ForegroundGreen = 0x0A,
      ForegroundCyan = 0x0B,
      ForegroundRed = 0x0C,
      ForegroundMagenta = 0x0D,
      ForegroundYellow = 0x0E,
      ForegroundWhite = 0x0F,
    };

    enum BackgroundColor
    {
      BackgroundBlack = 0x00,
      BackgroundDarkBlue = 0x10,
      BackgroundDarkGreen = 0x20,
      BackgroundPetrol = 0x30,
      BackgroundDarkRed = 0x40,
      BackgroundDarkMagenta = 0x50,
      BackgroundGold = 0x60,
      BackgroundLightGrey = 0x70,
      BackgroundDarkGrey = 0x80,
      BackgroundBlue = 0x90,
      BackgroundGreen = 0xA0,
      BackgroundCyan = 0xB0, 
      BackgroundRed = 0xC0,
      BackgroundMagenta = 0xD0,
      BackgroundYellow = 0xE0,
      BackgroundWhite = 0xF0,
    };

    class ConsoleColor
    {
    private:
      ForegroundColor Foreground;
      BackgroundColor Background;

    public:
      ConsoleColor(ForegroundColor foreground = ForegroundColor::ForegroundWhite, BackgroundColor background = BackgroundColor::BackgroundBlack);
      ~ConsoleColor();

    public:
      operator int();
    };
  }
}


