#include<string>

using namespace std;

#include "Ship.h"
#include "FighterTransporter.h"
#include "ShipTransporter.h"
#include "Frigate.h"
#include "Explorer.h"
#include "Battleship.h"
#include "Component.h"
#include "Displacement.h"
#include "Power.h"
#include "Thrust.h"
#include "MaxSpeed.h"
#include "StallSpeed.h"
#include "Crew.h"
#include "Passengers.h"
#include "Room.h"
#include "Bridge.h"
#include "SickBay.h"
#include "SleepingQuarters.h"
#include "PoorRoom.h"
#include "AverageRoom.h"
#include "NiceRoom.h"
#include "ShipFactory.h"
#include "FighterTransporterFactory.h"
#include "ShipTransporterFactory.h"
#include "FrigateFactory.h"
#include "ExplorerFactory.h"
#include "BattleshipFactory.h"

int main()
{
    ShipFactory* shipFactory = new BattleshipFactory();
    Ship* myShip = shipFactory->buildShip();

	return 0;
}
