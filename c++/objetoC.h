#ifndef OBJETOC_H
#define OBJETOC_H
#include "C.h"
class objetoC: public C{
    public:
        void fooA() = 0;
        void fooB() = 0;
        void fooC() = 0;
};
#endif