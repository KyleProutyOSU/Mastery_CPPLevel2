//
//  Son.cpp
//  Mastery_Level2
//

#include "Son.h"

Son::Son(string name, int age): Father(name, age) {}

Son::~Son()
{
    cout<<"\nSon: I'm a destruct! - my parent destruct has no saying"<<endl;
}

