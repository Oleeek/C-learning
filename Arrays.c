//
// Created by lemsk on 16.05.2024.
// https://www.learn-c.org/en/Arrays


/*Exercise
    The code below does not compile, because the grades variable is missing.
    One of the grades is missing. Can you define it so the grade average will be 85?
*/

#include <stdio.h>

int main() {
    int grades[3];
    int average;

    grades[0] = 80;
    grades[1] =85;
    grades[2] = 90;

    average = (grades[0] + grades[1] + grades[2]) / 3;
    printf("The average of the 3 grades is: %d", average);

    return 0;
}

//Output
//The average of the 3 grades is: 85
