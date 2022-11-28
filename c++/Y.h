#ifndef Y_H
#define Y_H
#include "X.h"
#include "objetoC.h"
#include "objetoA.h"
class Y: public X{
    public:
        //B* foo(B* test) override;
        //C* foo(B* test) override;
        //A* foo(B* test) override;
        //B* foo(A* test) override;
        B* foo(C* test) override;
};
#endif