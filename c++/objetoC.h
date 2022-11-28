#ifndef OBJETOC_H
#define OBJETOC_H
#include "C.h"
class objetoC: public C{
    public:
        void fooA() override;
        void fooB() override;
        void fooC() override;
};
#endif