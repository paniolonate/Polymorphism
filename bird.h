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
 * DATE:		August 8, 2016
 *
 * FILE:		bird.h
 *
 * DESCRIPTION:	This file contains the bird class prototypes and variables
 *
 *
 ***********************************************************/
#include "animal.h"
#ifndef bird_h
#define bird_h

class bird : public animal
{
    private:
    
    public:
        bird();
        ~bird();
        void displaydata();
};
#endif /* bird_h */

