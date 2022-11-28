#include "X.h"
#include "objetoA.h"
#include "objetoC.h"
B* X::foo(B* test){
    test->fooB();
    return test;
}