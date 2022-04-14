TARGET = Battleship.exe
CPPUNIT_PATH=/usr/local/lib

$(TARGET): Battleship.o Program.a GameController.a 
	g++ -g $^ -o $@

Battleship.o: ../Battleship.Ascii/Battleship.Ascii.cpp
	g++ -g -c $< -o $@

Program.a: Program.o
	ar rcs $@ $^

Program.o: ../Battleship.Ascii.Lib/Program.cpp ../Battleship.Ascii.Lib/Program.h
	g++ -g -c $< -o $@

GameController.a: ../Battleship.GameController.Lib/Ship.o ../Battleship.GameController.Lib/Position.o ../Battleship.GameController.Lib/Letters.o ../Battleship.GameController.Lib/GameController.o
	ar rcs $@ $^

Ship.o: ../Battleship.GameController.Lib/Ship.cpp ../Battleship.GameController.Lib/Ship.h
	g++ -g -c -o $@ $<

Position.o: ../Battleship.GameController.Lib/Position.cpp ../Battleship.GameController.Lib/Position.h
	g++ -g -c -o $@ $<

Letters.o: ../Battleship.GameController.Lib/Letters.cpp ../Battleship.GameController.Lib/Letters.h
	g++ -g -c -o $@ $<

GameController.o: ../Battleship.GameController.Lib/GameController.cpp ../Battleship.GameController.Lib/GameController.h
	g++ -g -c -o $@ $<

TestRunner.exe: IsHorizontalVerticalTests.o CheckIsHitTests.o IsShipValidTests.o ParsePositionTests.o TestRunner.o GameController.o Ship.o Position.o Letters.o Program.o
	g++ -g $^ -o $@ -L${CPPUNIT_PATH}/lib -lstdc++ -lcppunit -ldl

CheckIsHitTests.o: ../Battleship.GameController.Tests.CppUnit/CheckIsHitTests.cpp ../Battleship.GameController.Tests.CppUnit/CheckIsHitTests.h GameController.o Ship.o Position.o Letters.o
	g++ -g -c -o $@ $< -I${CPPUNIT_PATH}/include

IsShipValidTests.o: ../Battleship.GameController.Tests.CppUnit/IsShipValidTests.cpp ../Battleship.GameController.Tests.CppUnit/IsShipValidTests.h GameController.o Ship.o Position.o Letters.o
	g++ -g -c -o $@ $< -I${CPPUNIT_PATH}/include

IsHorizontalVerticalTests.o: ../Battleship.GameController.Tests.CppUnit/IsHorizontalVerticalTests.cpp ../Battleship.GameController.Tests.CppUnit/IsHorizontalVerticalTests.h GameController.o Ship.o Position.o Letters.o
	g++ -g -c -o $@ $< -I${CPPUNIT_PATH}/include

ParsePositionTests.o: ../Battleship.Ascii.Tests.CppUnit/ParsePositionTests.cpp ../Battleship.Ascii.Tests.CppUnit/ParsePositionTests.h GameController.o Ship.o Position.o Letters.o Program.o
	g++ -g -c -o $@ $< -I${CPPUNIT_PATH}/include

TestRunner.o: ../Battleship.GameController.Tests.CppUnit/TestRunner.cpp
	g++ -g -c -o $@ $< -I${CPPUNIT_PATH}/include

clean:
	rm -f *.o *.a $(TARGET)