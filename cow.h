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
 * FILE:		cow.h
 *
 * DESCRIPTION:	This file contains the cow class prototypes and variables
 *
 *
 ***********************************************************/
#include "animal.h"
#ifndef cow_h
#define cow_h

class cow : public animal
{
    private:
    
    public:
        cow();
        ~cow();
        void displaydata();
};
#endif /* cow_h */

