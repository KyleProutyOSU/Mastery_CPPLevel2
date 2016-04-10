//
//  Father.h
//  Mastery_Level2
//

#ifndef Father_h
#define Father_h

#include "Person.h"

class Father: public Person
{
    public:
        Father(string, int);
        void speak();
    
    private:
        int randomNum();
};

#endif /* Father_h */
