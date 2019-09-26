#include "ExplorerFactory.h"
#include "Explorer.h"

ExplorerFactory::ExplorerFactory() : ShipFactory()
{

}

ExplorerFactory::~ExplorerFactory()
{

}

Ship* ExplorerFactory::buildShip()
{
    return createShip();
}

Ship* ExplorerFactory::createShip()
{
    return new Explorer();
}