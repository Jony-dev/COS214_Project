#ifndef FRIGATEFACTORY_H
#define FRIGATEFACTORY_H

#include<string>
#include "ShipFactory.h"

using namespace std;

class FrigateFactory : public ShipFactory
{
public:
    FrigateFactory();
    ~FrigateFactory();

    Ship* buildShip();

private:
    Ship* createShip();

};

#endif