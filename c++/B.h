#ifndef B_H
#define B_H
#include "A.h"
class B: public A{
    public:
        virtual void fooB() = 0;
};
#endif