#ifndef FIGHTERTRANSPORTERFACTORY_H
#define FIGHTERTRANSPORTERFACTORY_H

#include<string>
#include "ShipFactory.h"

using namespace std;

class FighterTransporterFactory : public ShipFactory
{
public:
    FighterTransporterFactory();
    ~FighterTransporterFactory();

    Ship* buildShip();

private:
    Ship* createShip();

};

#endif