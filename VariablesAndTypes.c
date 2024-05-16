//
// Created by lemsk on 16.05.2024.
// https://www.learn-c.org/en/Variables_and_Types

/*unsigned int = only positive
signed int = positive and negative

floating point nums numbers with .12367 float and double
*/
//Exercise In the next exercise, you will need to create a program which prints out the sum of the numbers a, b, and c.
/*
 int a = 0, b = 1, c = 2, d = 3, e = 4;
a = b - c + d * e;
printf("%d", a) will print 1-2+3*4 = 11
*/

#include "stdio.h"

int main() {
    int a = 3;
    float b = 4.5;
    double c = 5.25;
    float sum;
    sum = a + b + c;

    printf("The sum of a, b, and c is %f.", sum);
    return 0;
}

//output The sum of a, b, and c is 12.750000.


