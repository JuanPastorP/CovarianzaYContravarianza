#ifndef Y_H
#define Y_H
#include "X.h"
class Y: public X{
    public:
        virtual B foo(B test) = 0;
};
#endif