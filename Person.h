//
//  Person.h
//  Mastery_Level2
//
#ifndef PERSON_H_
#define PERSON_H_

#include <iostream>
#include <string>
using namespace std;

class Person
{
    public:
		Person(string,int);
        Person(string,int,string); //constructor overloading
        Person operator+(Person); //operator overload
        ~Person();

		void setName(string); //encapsulation functions
		string getName();
		void setAge(int);
		int getAge();
        void speak();
        void setSpeak(string);
        string getSpeak();

	private:
		string name, saying; //encapsulated variables
		int age;
};

#endif /* PERSON_H_ */
