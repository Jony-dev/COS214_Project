#ifndef SHIPTRANSPORTERFACTORY_H
#define SHIPTRANSPORTERFACTORY_H

#include<string>
#include "ShipFactory.h"

using namespace std;

class ShipTransporterFactory : public ShipFactory
{
    public:
        ShipTransporterFactory();
        ~ShipTransporterFactory();

        Ship* buildShip();

    private:
        Ship* createShip();

};

#endif