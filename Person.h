/*
 * Person.h
 *
 */
#ifndef PERSON_H_
#define PERSON_H_

#include <iostream>
#include <string>
using namespace std;

class Person
{
    public:
		Person(string, int);
        ~Person();

		void setName(string);
		string getName();
		void setAge(int);
		int getAge();
        void speak();
        

	private:
		string name;
		int age;

};

#endif /* PERSON_H_ */
