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
 * FILE:		animal.h
 *
 * DESCRIPTION:	This file contains the animal class variables and
 *              prototypes
 *
 *
 ***********************************************************/
#ifndef animal_h
#define animal_h

class animal
{
    protected:
        char sound [10];
        unsigned char data;
    public:
        animal();
        ~animal();
    virtual void displaydata();
};

#endif /* animal_h */

