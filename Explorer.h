#ifndef EXPLORER_H
#define EXPLORER_H

#include<string>
#include "Ship.h"

using namespace std;

/**
 * @class Explorer
 * @brief Explorer ship type
 */
class Explorer : public Ship
{
	public:
        /**
         * @brief Constructor
         * @param speed The speed of the ship
         * @return New instance of class
         */
		Explorer();
        /// Destructor
		~Explorer();

	private:
	
};

#endif