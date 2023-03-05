// Created by RatGrandmother on 2023/3/5.
#ifndef SIMPLEPLUSPLUS_PRIVATE_SOURCE_XTRAMATH_H
#define SIMPLEPLUSPLUS_PRIVATE_SOURCE_XTRAMATH_H

#include <cmath>
double convertTemp(double temp, char unit) { // You first put the function name, then for the parameters, you put the temperature and the desired unit.
    switch (unit)
    {
        case 'F':
            temp = temp * 1.8 + 32;
            return temp;
        case 'C':
            temp = (temp - 32) / 1.8;
            return temp;
        default:
            std::cout << "Invalid unit ( Use F or C. )" << std::endl;
            return 0;
    }
}

double pythagorean(double a, double b) { // You put number a, and number b. (a and b are the sides of the triangle.) and it will return the hypotenuse.
    return sqrt(pow(a, 2) + pow(b, 2));
}




#endif
