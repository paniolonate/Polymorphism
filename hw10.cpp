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
 * FILE:		hw10.cpp
 *
 * DESCRIPTION:	This file contains the main function definition for HW10
 *
 *
 ***********************************************************/

#include <iostream>
#include <map>
#include <vector>
#include "animal.h"
#include "cow.h"
#include "bird.h"

using namespace std;

void animaldisplaydata(animal *);

/*********************************************************
 *
 * Function name:    main
 *
 * DESCRIPTION:	The main function for HW10
 *
 * Parameters:	int argc, const char * argv[]
 *
 * Return Values:    int
 *
 *
 ***********************************************************/

int main(int argc, const char * argv[]) {
    
    animal animal1;
    cow cow1;
    bird bird1;
    animal * panimal1;
    animal * panimal2;
    
    /* Vector declaration */
    vector<int> vector1;
    
    /* Map declaration */
    std::map< int, std::string > map1;
    
    /* Vector initialization */
    vector1.push_back(3);
    vector1.push_back(7);
    vector1.push_back(1);

    /* Vector output */
    cout << "\nContent in vector1 index 0: " << vector1[0] << "\n";
    
    /* Map initialization */
    map1[1] = "Nate";
    map1[2] = "Rhyzen";
    map1[3] = "Marissa";
    
    /* Map output */
    cout << "\nContent in map1, key 2: " << map1[2] << "\n\n";
    
    panimal1 = &cow1;
    panimal2 = &bird1;
    
    cout << "\nCALLING DISPLAYDATA WITH DIFFERENT INSTANCES OF EACH CLASS\n\n";

    
    animal1.displaydata();
    cow1.displaydata();
    bird1.displaydata();
    
    cout << "\nCALLING ANIMALDISPLAYDATA WITH ANIMAL POINTERS POINTING TO BIRD AND COW OBJECTS\n\n";
    
    animaldisplaydata(&bird1);
    animaldisplaydata(&cow1);
    
    return 0;
}

/*********************************************************
 *
 * Function name:    animaldisplaydata
 *
 * DESCRIPTION:	Function used to test polymorphism between classes
 *
 * Parameters:	animal * panimal
 *
 * Return Values:    void
 *
 *
 ***********************************************************/

void animaldisplaydata(animal * panimal)
{
    panimal->displaydata();
}


