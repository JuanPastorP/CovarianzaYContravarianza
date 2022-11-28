#ifndef OBJETOB_H
#define OBJETOB_H
#include "B.h"
class objetoB: public B{
    public:
        void fooA() override;
        void fooB() override;
};
#endif