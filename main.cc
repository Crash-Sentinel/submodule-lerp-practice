#include <iostream>
#include "lerp/lerp.c"


int main ()
{
    float* values = new float[5]{3.5, 1.0, 5.0, 5.0, 10.0};

    std::cout << "Linear Interpolation of 3.5 between x := [1.0, 5.0] and y := [5.0, 10.0]:\n" 
    << lerp(values[0], values[1], values[2], values[3], values[4]); 

    delete[] values;

    return 0;
}