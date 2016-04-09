//============================================================================
// Name        : Mastery_Level2.cpp
// Author      : Kyle Prouty
// Version     : Mastery Achievement Level 2
//
// Description :
//============================================================================

#include "Master.h"

int main()
{
    funWithPolymorphism();
	return 0;
}

void funWithPolymorphism()
{
    Person person("Person", 22);
    Father dad("Dad", 50);
    Mother mom("Mom", 48);
    Son son("Son",10);
    Daughter daughter("Daughter", 20);
    
    startHere(person,dad,mom,son,daughter);
}

void startHere(Person person, Father dad, Mother mom, Son son, Daughter daughter)
{
    mom.speak();
    
}
