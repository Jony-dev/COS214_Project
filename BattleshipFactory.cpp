#include "BattleshipFactory.h"
#include "Battleship.h"

BattleshipFactory::BattleshipFactory() : ShipFactory()
{

}

BattleshipFactory::~BattleshipFactory()
{

}

Ship* BattleshipFactory::buildShip()
{
    return createShip();
}

Ship* BattleshipFactory::createShip()
{
    return new Battleship();
}