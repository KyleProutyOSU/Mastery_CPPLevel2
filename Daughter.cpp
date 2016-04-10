//
//  Daughter.cpp
//  Mastery_Level2
//

#include "Daughter.h"

Daughter::Daughter(string name, int age): Mother(name, age) {}

void Daughter::speak()
{
    cout<<"I'm a girl"<<endl;
}