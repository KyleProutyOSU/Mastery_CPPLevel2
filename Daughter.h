//
//  Daughter.h
//  Mastery_Level2
//

#ifndef Daughter_h
#define Daughter_h

#include "Mother.h"

class Daughter: public Mother
{
    public:
        Daughter(string, int);
        void speak();
};

#endif /* Daughter_h */
