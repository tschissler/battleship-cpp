TARGET = prog

$(TARGET): Battleship.o Program.a GameController.a #Windows.Helpers.a
	g++ $^ -o $@

Battleship.o: Battleship.Ascii.Exe.cpp
	g++ -c $< -o $@

Program.a: Program.o
	ar rcs $@ $^

Program.o: ../Battleship.Ascii.Lib/Program.cpp ../Battleship.Ascii.Lib/Program.h
	g++ -c $< -o $@

GameController.a: ../Battleship.GameController.Lib/Ship.o ../Battleship.GameController.Lib/Position.o ../Battleship.GameController.Lib/Letters.o ../Battleship.GameController.Lib/GameController.o
	ar rcs $@ $^

Ship.o: ../Battleship.GameController.Lib/Ship.cpp ../Battleship.GameController.Lib/Ship.h
	g++ -c -o $@ $<

Position.o: ../Battleship.GameController.Lib/Position.cpp ../Battleship.GameController.Lib/Position.h
	g++ -c -o $@ $<

Letters.o: ../Battleship.GameController.Lib/Letters.cpp ../Battleship.GameController.Lib/Letters.h
	g++ -c -o $@ $<

GameController.o: ../Battleship.GameController.Lib/GameController.cpp ../Battleship.GameController.Lib/GameController.h
	g++ -c -o $@ $<

# Windows.Helpers.a: ../Windows.Helpers/Console.o ../Windows.Helpers.ConsoleColor.o
# 	ar rcs $@ $^

# Console.o: ../Windows.Helpers/Console.cpp ../Windows.Helpers/Console.h
# 	g++ -c -o $@ $<

# ConsoleColor.o: ../Windows.Helpers/ConsoleColor.cpp ../Windows.Helpers/ConsoleColor.h
# 	g++ -c -o $@ $<

clean:
	rm -f *.o *.a $(TARGET)