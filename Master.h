//
//  Master.h
//  Mastery_Level2
//

#ifndef Master_h
#define Master_h

#include <iostream>
#include "Person.h"
#include "Father.h"
#include "Mother.h"
#include "Son.h"
#include "Daughter.h"
using namespace std;

void funWithPolymorphism();

void example();
void example(Person);
void example(Person,Father,Mother);
void example(Person,Father,Mother,Son,Daughter);

#endif /* Master_h */
