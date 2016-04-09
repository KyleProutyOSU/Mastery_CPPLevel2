/*
 * Person.cpp
 *
 */
#include "Person.h"

Person::Person(string name, int age)
{
	setName(name);
	setAge(age);
}

Person::~Person()
{
    cout<<"I'm a destruct!"<<endl;
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
    cout << "I am a person, I can speak" << endl;
}


