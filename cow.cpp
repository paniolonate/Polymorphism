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
 * FILE:		cow.c
 *
 * DESCRIPTION:	This file contains the cow class function definitions
 *
 *
 ***********************************************************/

#include "cow.h"
#include "animal.h"
#include "bird.h"
#include <iostream>

using namespace std;

/*********************************************************
 *
 * Function name:    cow (constructor)
 *
 * DESCRIPTION:	The constructor for cow class, The 4th bit from the left
 *              will be the bit that decides whether the animal can fly or not (0000 X000).
 *              The last 3 bits (0000 0XXX) will be used to see how much legs an animal has (0-7).
 *              The variable data is set to 4 (0000 0100) since cows can't fly and have 4 legs.
 *
 * Parameters:	none
 *
 * Return Values:    none
 *
 *
 ***********************************************************/

cow::cow()
{
    strcpy(sound, "moo");
    data = 1;
    /* Shifted bits to the left by 2 to set data to 4 */
    data = data << 2;
}



/*********************************************************
 *
 * Function name:    ~cow (deconstructor)
 *
 * DESCRIPTION:	The deconstructor for cow class
 *
 * Parameters:	none
 *
 * Return Values:    none
 *
 *
 ***********************************************************/

cow::~cow()
{
    
}

/*********************************************************
 *
 * Function name:    displaydata
 *
 * DESCRIPTION:	Function that prints the value of sound, number of legs, and fly
 *
 * Parameters:	none
 *
 * Return Values:    void
 *
 *
 ***********************************************************/

void cow::displaydata()
{
    cout << "\nCow: " << sound << ", ";
    
    if ((8 & data) == 0) {
        cout << "cannot fly, ";
    }
    else
    {
        cout << "can fly, ";
    }
    
    if ((4 & data) == 0) {
        cout << "has 0 legs\n\n";
    }
    else
    {
        cout << "has 4 legs\n\n";
    }

}
