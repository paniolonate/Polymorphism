/*********************************************************
 *
 * NAME:		Nathan Nahina
 *
 * HOMEWORK:	10
 *
 * CLASS:	ICS 212
 *
 * Instructor:	Ravi Narayan
 *
 * DATE:		August 6, 2016
 *
 * FILE:		bird.cpp
 *
 * DESCRIPTION:	This file contains the bird class function definitions
 *
 *
 ***********************************************************/

#include "bird.h"
#include "animal.h"
#include "cow.h"

#include <iostream>

using namespace std;

/*********************************************************
 *
 * Function name:    bird (constructor)
 *
 * DESCRIPTION:	The constructor for bird class, The 4th bit from the left
 *              will be the bit that decides whether the animal can fly or not (0000 X000).
 *              The last 3 bits (0000 0XXX) will be used to see how much legs an animal has (0-7).
 *              The variable data is set to 10 (0000 1010) since birds can fly and have 2 legs.
 *
 * Parameters:	none
 *
 * Return Values:    none
 *
 *
 ***********************************************************/

bird::bird()
{
    strcpy(sound, "quack");
    
    data = 5;
    /* Shifted bits to the left one to set to 10 (0000 1010) */
    data = data << 1;
}



/*********************************************************
 *
 * Function name:    ~bird (deconstructor)
 *
 * DESCRIPTION:	The deconstructor for bird class
 *
 * Parameters:	none
 *
 * Return Values:    none
 *
 *
 ***********************************************************/

bird::~bird()
{
    
}

/*********************************************************
 *
 * Function name:    displaydata
 *
 * DESCRIPTION:	Function that prints the value of sound and fly
 *
 * Parameters:	none
 *
 * Return Values:    void
 *
 *
 ***********************************************************/

void bird::displaydata()
{
    cout << "\nBird: " << sound << ", ";
    
    if ((8 & data) == 0) {
        cout << "cannot fly, ";
    }
    else
    {
        cout << "can fly, ";
    }

}
