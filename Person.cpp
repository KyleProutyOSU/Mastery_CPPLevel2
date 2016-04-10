/*
 * Person.cpp
 *
 */
#include "Person.h"

Person::Person(string name, int age)
:saying("I am a person, I can speak")
{
	setName(name);
	setAge(age);
}

//  constructor overloading
Person::Person(string name, int age, string saying)
{
    setName(name);
    setAge(age);
    setSpeak(saying);
}

Person::~Person()
{
    //cout<<"I'm a destruct!"<<endl;
}

void Person::setName(string name)
{
	(this->name) = name;
}

string Person::getName()
{
	return(this->name);
}

void Person::setAge(int age)
{
	(this->age) = age;
}

int Person::getAge()
{
	return (this->age);
}

void Person::speak()
{
    cout << getSpeak() << endl;
}

void Person::setSpeak(string saying)
{
    (this->saying) = saying;
}

string Person::getSpeak()
{
    return (this->saying);
}


