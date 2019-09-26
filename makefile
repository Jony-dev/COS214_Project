make: main.cpp Ship.o FighterTransporter.o ShipTransporter.o Frigate.o Explorer.o Battleship.o Component.o Displacement.o Power.o Thrust.o MaxSpeed.o StallSpeed.o Crew.o Passengers.o Room.o Bridge.o SickBay.o SleepingQuarters.o PoorRoom.o AverageRoom.o NiceRoom.o ShipFactory.o FighterTransporterFactory.o ShipTransporterFactory.o FrigateFactory.o ExplorerFactory.o BattleshipFactory.o
	g++ -std=c++11 main.cpp Ship.o FighterTransporter.o ShipTransporter.o Frigate.o Explorer.o Battleship.o Component.o Displacement.o Power.o Thrust.o MaxSpeed.o StallSpeed.o Crew.o Passengers.o Room.o Bridge.o SickBay.o SleepingQuarters.o PoorRoom.o AverageRoom.o NiceRoom.o ShipFactory.o FighterTransporterFactory.o ShipTransporterFactory.o FrigateFactory.o ExplorerFactory.o BattleshipFactory.o -o main.out

Ship.o: Ship.h Ship.cpp
	g++ -c -std=c++11 Ship.h Ship.cpp

FighterTransporter.o: FighterTransporter.h FighterTransporter.cpp
	g++ -c -std=c++11 FighterTransporter.h FighterTransporter.cpp

ShipTransporter.o: ShipTransporter.h ShipTransporter.cpp
	g++ -c -std=c++11 ShipTransporter.h ShipTransporter.cpp

Frigate.o: Frigate.h Frigate.cpp
	g++ -c -std=c++11 Frigate.h Frigate.cpp

Explorer.o: Explorer.h Explorer.cpp
	g++ -c -std=c++11 Explorer.h Explorer.cpp

Battleship.o: Battleship.h Battleship.cpp
	g++ -c -std=c++11 Battleship.h Battleship.cpp

Component.o: Component.h Component.cpp
	g++ -c -std=c++11 Component.h Component.cpp

Displacement.o: Displacement.h Displacement.cpp
	g++ -c -std=c++11 Displacement.h Displacement.cpp

Power.o: Power.h Power.cpp
	g++ -c -std=c++11 Power.h Power.cpp

Thrust.o: Thrust.h Thrust.cpp
	g++ -c -std=c++11 Thrust.h Thrust.cpp

MaxSpeed.o: MaxSpeed.h MaxSpeed.cpp
	g++ -c -std=c++11 MaxSpeed.h MaxSpeed.cpp

StallSpeed.o: StallSpeed.h StallSpeed.cpp
	g++ -c -std=c++11 StallSpeed.h StallSpeed.cpp

Crew.o: Crew.h Crew.cpp
	g++ -c -std=c++11 Crew.h Crew.cpp

Passengers.o: Passengers.h Passengers.cpp
	g++ -c -std=c++11 Passengers.h Passengers.cpp

Room.o: Room.h Room.cpp
	g++ -c -std=c++11 Room.h Room.cpp

Bridge.o: Bridge.h Bridge.cpp
	g++ -c -std=c++11 Bridge.h Bridge.cpp

SickBay.o: SickBay.h SickBay.cpp
	g++ -c -std=c++11 SickBay.h SickBay.cpp

SleepingQuarters.o: SleepingQuarters.h SleepingQuarters.cpp
	g++ -c -std=c++11 SleepingQuarters.h SleepingQuarters.cpp

PoorRoom.o: PoorRoom.h PoorRoom.cpp
	g++ -c -std=c++11 PoorRoom.h PoorRoom.cpp

AverageRoom.o: AverageRoom.h AverageRoom.cpp
	g++ -c -std=c++11 AverageRoom.h AverageRoom.cpp

NiceRoom.o: NiceRoom.h NiceRoom.cpp
	g++ -c -std=c++11 NiceRoom.h NiceRoom.cpp

ShipFactory.o: ShipFactory.h ShipFactory.cpp
	g++ -c -std=c++11 ShipFactory.h ShipFactory.cpp

FighterTransporterFactory.o: FighterTransporterFactory.h FighterTransporterFactory.cpp
	g++ -c -std=c++11 FighterTransporterFactory.h FighterTransporterFactory.cpp

ShipTransporterFactory.o: ShipTransporterFactory.h ShipTransporterFactory.cpp
	g++ -c -std=c++11 ShipTransporterFactory.h ShipTransporterFactory.cpp

FrigateFactory.o: FrigateFactory.h FrigateFactory.cpp
	g++ -c -std=c++11 FrigateFactory.h FrigateFactory.cpp

ExplorerFactory.o: ExplorerFactory.h ExplorerFactory.cpp
	g++ -c -std=c++11 ExplorerFactory.h ExplorerFactory.cpp

BattleshipFactory.o: BattleshipFactory.h BattleshipFactory.cpp
	g++ -c -std=c++11 BattleshipFactory.h BattleshipFactory.cpp

run: main.out
	main.out

