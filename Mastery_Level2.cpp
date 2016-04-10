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
    //  All of the classes inherit from the Person class. Only the Person class
    //  defines the variables for name and age, all other classes inherit the member
    //  variables and functions, such as the accessors and mutators for those encapsulated
    //  private variables.
    
    Person person("Person", 22);
    Father dad("Dad", 50);
    Mother mom("Mom", 48);
    Son son("Son",10);
    Daughter daughter("Daughter", 20);
    
    
    //**    uncheck to run examples   **//
    /*
    example();
    example(person);
    example(person, dad, mom);
    example(person,dad,mom,son,daughter);
    */
}

void example()
{
    //          - Operator Overloading -
    //  Creates a new person object with a saying, then outputs saying
    //  so I can see difference. Calls the operator+ function passing
    //  in a Person object. The operator function uses the passed in
    //  objects getSpeak() and adds it to a temp object getSpeak() saying.
    //  The function then returns the temp object with the two sayings added
    //  together. Then the speak() gets called on the updated object passed back
    
    Person example("ex",2,"Person: This is my statement");
    example.speak();
    example.operator+(example).speak();
}

void example(Person person)
{
    Person person2("Person2",23,"Person2: I dont have the default saying");
    
    //          - Example of constructor overload -
    //  "person" is initilized with original constructor so it outputs the
    //   default saying. "person2" uses the overloaded constructor, so it outputs
    //   the saying it was initilized with. Then I set "person"'s saying by using
    //   a function to access the encapsulated string, setting saying to a new result,
    //   then i output it showing the new result.
    
    person.speak();
    person2.speak();
    person.setSpeak("Person: person new saying");
    person2.setSpeak("Person2: person2 updated saying");
    cout<<""<<endl;
    
    person.speak();
    person2.speak();
}

void example(Person person, Father dad, Mother mom)
{
    //          - Inheritance / Polymorphism -
    //  This example shows inheritance by calling persons speak() to show its value. Next it
    //  calls Father class object "dad" speak() to show that although Father class inherits from
    //  Person class, I have defined an overriding speak() in the Father class that gets called
    //  instead of parent class speak(). Next I call the mom object from Mother class that inherits
    //  from Person class, and since I have not defined a speak() for Mother class, it outputs the
    //  saying from its parent class Person. Then I set Person class object "person" speak() to a new
    //  saying then reoutput all the sayings so I can see what changed. Notice that mom object saying
    //  still is the original parent class saying even though I changed person object saying.
    
    person.speak();
    dad.speak();
    mom.speak();
    cout<<""<<endl;
    
    person.setSpeak("Person: new saying");
    person.speak();
    dad.speak();
    mom.speak();
}

void example(Person person, Father dad, Mother mom, Son son, Daughter daughter)
{
    //          - (More) Inheritance / Polymorphism -
    //  In the below example I start by calling each object of the 4 different classes
    //  speak(), so I can see the initial output. Notice that since Mom does not have a
    //  defined speak(), it inherits from Person class and outputs Person class default
    //  speak(). Next notice that even though daughter inherits from Mother class where
    //  Mother class does not define a speak(), I can still use the Mother classes parent
    //  funtions that Mother inherits so then Daughter inherits, to set the saying for my
    //  daughter object. Daughter class goes up two levels to access member funtions from
    //  Person class. Lastly notice that I have defined a speak() for Father class so the
    //  dad object outputs a random saying, and since Son class object inherits from Father
    //  class, it also outputs a random Father class saying.
    
    //  Next I update the saying for each object. Notice that none of these objects define
    //  the private saying variable. They all inherit it from Person class by being able to
    //  access member variables and functions.
    //
    //  Lastly I output all the sayings for each object again, notice all the weird things going
    //  on due to inheritance. Notice that Mom outputs the new saying we set using her parent classes
    //  accessors and mutators. This is the same case for the daughter class object as well. It gets
    //  weird when we output dads speak(). We expect to see the new saying that we set, but instead we
    //  get a random saying from the original speak() method defined in the Father class. So why is
    //  this? Since we redefined the speak() in Father class we no longer access its parent funtions
    //  speak() method. Instead it always outputs Father class speak(). When we updated dad object
    //  setSpeak() it was accessing the parent classes private variables and updating them. I show this
    //  in "value for dad" output. Since father class does not have a place to store the saying, it gets
    //  stored in parent class Person saying variable and since we override calling Person speak(), we
    //  never access the new value stored in that variable. Lastly you can see that this happens to the
    //  Son class object as well, so we again output from its inherited Father class speak().
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




