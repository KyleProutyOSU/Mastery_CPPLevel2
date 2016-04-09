//
//  Father.cpp
//  Mastery_Level2
//
//

#include <random>
#include "Father.h"

Father::Father(string name, int age): Person(name, age) {}

void Father::speak()
{
    int rand_num = randomNum();
    
    switch(rand_num)
    {
        case 1: cout<<"I want chips"<<endl;
            break;
        case 2: cout<<"I'm sleepy, night night"<<endl;
            break;
        case 3: cout<<"Yo, what up bro dog dog yo"<<endl;
            break;
        case 4: cout<<"I shouldn't program so late"<<endl;
            break;
        default: cout<<"Ok, lets stop!"<<endl;
            break;
    }
   // cout<<rand_num<<endl;
}

int Father::randomNum()
{
    random_device seed; //then make a mersenne twister engine
    mt19937 engine(seed()); //then the easy part... the distribution
    uniform_int_distribution<int> dist(1, 5); //then just generate the integer like this:
    return dist(engine);
}

