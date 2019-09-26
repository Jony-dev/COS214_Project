#include "ShipTransporterFactory.h"
#include "ShipTransporter.h"

ShipTransporterFactory::ShipTransporterFactory() : ShipFactory()
{

}

ShipTransporterFactory::~ShipTransporterFactory()
{

}

Ship* ShipTransporterFactory::buildShip()
{
    return createShip();
}

Ship* ShipTransporterFactory::createShip()
{
    return new ShipTransporter();
}