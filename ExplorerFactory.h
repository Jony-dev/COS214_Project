#ifndef EXPLORERFACTORY_H
#define EXPLORERFACTORY_H

#include<string>
#include "ShipFactory.h"

using namespace std;

class ExplorerFactory : public ShipFactory
{
	public:
		ExplorerFactory();
		~ExplorerFactory();

		Ship* buildShip();

	private:
        Ship* createShip();
	
};

#endif