#ifndef functions_h
#define functions_h

#include <math.h>
#include <iostream>

using namespace std;

void area_and_circ(float* area, float* circumference, float* array){
    for (int i = 0; i < 3; i++){

        area[i] = M_PI * (array[i]*array[i]);
        cout << " Circle " << i + 1 << " Area = " << area[i] << endl;
        
        circumference[i] = 2 * M_PI * (array[i]);
        cout << " Circle " << i + 1 << " Cicumference = " << circumference[i] << endl;
    }
}

bool contains_a_negative_radii(float* array){
    for (int i = 0; i < 3; i++){
        
        if((array[i]) < 0){
            return true;
        }
    }
    return false;
}

#endif