/*

DESCRIPTION: Program to display my name and address.

AUTHOR: Tyler Brady

DATE: 24/09/2024

*/

#include <stdio.h>

int main(){

    char myname[] = "Tyler Brady";
    char myaddress[] = "35th street on 9th avenue NYC";
    printf("My name is %s and my address is %s.", myname, myaddress);

    printf("\n\nMy name is %s.\n\nMy address is: \n\n35th street \n\nOn 9th Avenue \n\nNYC.", myname);
    return 0;
}