//======================================================================================
// Name        : Mastery_Level2.cpp
// Author      : Kyle Prouty
// Version     : Mastery Achievement Level 2
//
// Description : The goal of this achievement was to demonstrate the Principles
//               of Object Oriented Programming (OOP) - Encapsulation, Abstraction
//               Inheritance, Polymorphism. Other required goals include: function
//               overloading, Classes(Constructor, Destructor, overloaded constructor),
//               overloaded assignment operator.
//======================================================================================

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
    
    
    
    //example();
    //example(person,dad,mom,son,daughter);
}

void example()
{
    Person example("ex",2,"Person: This is my statement");
    example.speak();
    example.operator+(example).speak();
}

void example(Person person, Father dad, Mother mom, Son son, Daughter daughter)
{
    mom.speak();
    daughter.speak();
    dad.speak();
    son.speak();
    
    mom.setSpeak("Mom: What a mom would say..");
    daughter.setSpeak("Daughter: new saying");
    dad.setSpeak("Dad: no more random saying for me");
    son.setSpeak("Son: you dont get to see this, yay polymorphism!");
    cout<<""<<endl;
    
    mom.speak();
    daughter.speak();
    cout<<"   **value for dad.getSpeak() -- "<<dad.getSpeak()<<" --"<<endl;
    dad.speak();
    son.speak();
}




