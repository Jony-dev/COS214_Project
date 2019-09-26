#include "FighterTransporterFactory.h"
#include "FighterTransporter.h"

FighterTransporterFactory::FighterTransporterFactory() : ShipFactory()
{

}

FighterTransporterFactory::~FighterTransporterFactory()
{

}

Ship* FighterTransporterFactory::buildShip()
{
    return createShip();
}

Ship* FighterTransporterFactory::createShip()
{
    return new FighterTransporter();
}