// Created by RatGrandmother on 2023/3/5.
#ifndef SIMPLEPLUSPLUS_PRIVATE_SOURCE_XTRAMATH_H
#define SIMPLEPLUSPLUS_PRIVATE_SOURCE_XTRAMATH_H

double convertTemp(double temp, char unit) {
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






#endif
