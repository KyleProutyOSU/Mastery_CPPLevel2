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
    
    //**    uncheck to run examples   **//
    example(person);
    example(person, dad, mom);
    example(person,dad,mom,son,daughter);
}

void example(Person person)
{
    Person person2("Person2",23,"I dont have the default saying");
    
    //          - Example of constructor overload -
    //  "person" is initilized with original constructor so he outputs the
    //   default saying. "person2" uses the overloaded constructor, so he outputs
    //   the saying with initilized him with. Then I use abstraction to set "person"
    //   saying and output it showing the new result.
    person.speak();
    person2.speak();
    person.setSpeak("This is my new saying");
    person2.setSpeak("person2 updated saying");
    person.speak();
    person2.speak();
}

void example(Person person, Father father, Mother mom)
{
    
}

void example(Person person, Father father, Mother mom, Son son, Daughter daughter)
{
    
}
