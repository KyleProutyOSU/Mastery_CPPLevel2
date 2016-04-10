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
        case 1: cout<<"Lets go watch the beaver game!"<<endl;
            break;
        case 2: cout<<"I'm sleepy, night night"<<endl;
            break;
        case 3: cout<<"Wow that was interesting!"<<endl;
            break;
        case 4: cout<<"I shouldn't program so late"<<endl;
            break;
        default: cout<<"Ok, lets stop!"<<endl;
            break;
    }
}

// random number function generates a random number between min, max using
// the random library
int Father::randomNum()
{
    int min = 1, max =4;
    
    random_device seed;
    mt19937 engine(seed()); //start the seed
    uniform_int_distribution<int> dist(min,max); //generate the int value
    return dist(engine);
}

