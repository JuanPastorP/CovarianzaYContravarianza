#include "Y.h"
#include "objetoA.h"
#include "objetoC.h"
B* Y::foo(B* test){
    test->fooB();
    return test;
}