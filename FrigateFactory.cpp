#include "FrigateFactory.h"
#include "Frigate.h"

FrigateFactory::FrigateFactory() : ShipFactory()
{

}

FrigateFactory::~FrigateFactory()
{

}

Ship* FrigateFactory::buildShip()
{
    return createShip();
}

Ship* FrigateFactory::createShip()
{
    return new Frigate();
}