/*

DESCRIPTION: Program to display the importance of correct dilimeters

AUTHOR: Tyler Brady

DATE: 24/09/2024

*/

#include <stdio.h>

int main(){

    int number_1;
    float number_2;
    char letter;

    number_1 = 100;
    number_2 = 600.3242397;
    letter = 'A';
     
    // wrong dilimeters

    // printf("number_1 is %f, number_2 is %d and the letter is %s", number_1, number_2, letter);

    // when the above code is ran this error occurs: Exception has occurred Segmentation fault

    printf("number_1 is %d, number_2 is %f and the letter is %c", number_1, number_2, letter);



    return 0;

}
