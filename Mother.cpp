//
//  Mother.cpp
//  Mastery_Level2
//

#include "Mother.h"

Mother::Mother(string name, int age): Person(name, age) {}

Mother::~Mother()
{
    cout<<"\nMother: I'm a destruct! - my parent destruct has no saying"<<endl;
}