#ifndef BATTLESHIPFACTORY_H
#define BATTLESHIPFACTORY_H

#include<string>
#include "ShipFactory.h"

using namespace std;

class BattleshipFactory : public ShipFactory
{
public:
    BattleshipFactory();
    ~BattleshipFactory();

    Ship* buildShip();

private:
    Ship* createShip();

};

#endif