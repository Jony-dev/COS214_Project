#ifndef SHIPFACTORY_H
#define SHIPFACTORY_H

#include<string>

class Ship;

using namespace std;

class ShipFactory
{
	public:
		ShipFactory();
		virtual ~ShipFactory();

		virtual Ship* buildShip() = 0;

    protected:
        virtual Ship* createShip() = 0;

	private:
	
};

#endif