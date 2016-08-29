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
 * FILE:		animal.c
 *
 * DESCRIPTION:	This file contains the animal parent class function definitions
 *
 *
 ***********************************************************/

#include "animal.h"
#include "cow.h"
#include "bird.h"

#include <iostream>

using namespace std;

/*********************************************************
 *
 * Function name:    animal (constructor)
 *
 * DESCRIPTION:	The constructor for animal class, The 4th bit from the left
 *              will be the bit that decides whether the animal can fly or not (0000 X000).
 *              The last 3 bits (0000 0XXX) will be used to see how much legs an animal has (0-7).
 *              The variable data is set to 0 (0000 0000) since we don't know what kind of animal 
 *              it may be.
 *
 * Parameters:	none
 *
 * Return Values:    none
 *
 *
 ***********************************************************/

animal::animal()
{
    strcpy(sound, "mooquack");
    data = 0;
}



/*********************************************************
 *
 * Function name:    ~animal (deconstructor)
 *
 * DESCRIPTION:	The deconstructor for animal class
 *
 * Parameters:	none
 *
 * Return Values:    none
 *
 *
 ***********************************************************/

animal::~animal()
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

void animal::displaydata()
{
    cout << "\nAnimal: " << sound << ", ";
    if ((8 & data) == 0) {
        cout << "cannot fly\n\n";
    }
    else
    {
        cout << "can fly\n\n";
    }
    
}


