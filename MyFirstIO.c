/*

DESCRIPTION: Declaring 3 variables and getting an output.

AUTHOR: Tyler Brady

DATE: 24/09/2024

*/

#include <stdio.h>
int main(){

    int num1, num2;
    float num3;
    num1 = 400;
    num2 = 600;
    num3 = num2;
    printf("num1 contains %d",num1);
    printf("\nnum2 contains %d and num3 contains %f",num2,num3); //num3 is a float so it will display 600.000000 but if changed to an "int" variable then it will just display 600
 
    return 0;
}