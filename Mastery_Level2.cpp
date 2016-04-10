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
    
    //example();
    //example(person);
    example(person, dad, mom);
    //example(person,dad,mom,son,daughter);
}

void example()
{
    //          - Operator Overloading -
    //  Creates a new person object with a saying, then outputs saying
    //  so I can see difference. calls the operator+ function passing
    //  in a Person object. The operator function uses the passed in
    //  objects getSpeak() and adds it to a temp object getSpeak() saying.
    //  The function then returns the temp object with the two sayings added
    //  together. Then the speak() gets called on the updated object passed back
    
    Person example("ex",2,"This is my statement");
    example.speak();
    example.operator+(example).speak();
}

void example(Person person)
{
    Person person2("Person2",23,"I dont have the default saying");
    
    //          - Example of constructor overload -
    //  "person" is initilized with original constructor so it outputs the
    //   default saying. "person2" uses the overloaded constructor, so it outputs
    //   the saying it was initilized with. Then I set "person"'s saying by using
    //   a function to access the encapsulated string, setting saying to a new result,
    //   then i output it showing the new result.
    
    person.speak();
    person2.speak();
    person.setSpeak("person1 new saying");
    person2.setSpeak("person2 updated saying");
    person.speak();
    person2.speak();
}

void example(Person person, Father dad, Mother mom)
{
    //          - Inheritance / Polymorphism -
    //  All of the classes inherit from the Person class. Only the Person class
    //  defines the variables for name and age, all other classes inherit the member
    //  variables and functions, such as the accessors and mutators for those encapsulated
    //  private variables.
    //
    //  This example shows inheritance by callings person speak() to so its value. Next it
    //  calls Father class object dad speak() to show that although Father class inherits from
    //  Person class, I have defined a overriding speak() in the Father class that gets called
    //  instead of parent class speak(). Next I call the mom object from Mother class that inherits
    //  from person call and since i have not defined a speak() for Mother class, it outputs the
    //  saying from its parent class Person. Then i set Person class object person speak() to a new
    //  saying then reoutput all the sayings so I can see what changed. Notice that mom object saying
    //  still is the original parent class saying even though i changed person object saying.
    
    person.speak();
    dad.speak();
    mom.speak();
    cout<<""<<endl;
    
    person.setSpeak("New saying");
    person.speak();
    dad.speak();
    mom.speak();
}

void example(Person person, Father father, Mother mom, Son son, Daughter daughter)
{
    //          - (More) Inheritance / Polymorphism -
    //
    
    
    
}




