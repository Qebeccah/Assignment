//program to calculate simple interest
/*
program to calculate simple interest
Author:Rebeccah Kirika
Date:23/09/2024
*/
#include <stdio.h>
int main (){
float principal;
float time;
float rate;
float simple_interest;

//variable initialization
printf("Enter the principal amount(sh:cent:");
scanf("%f",&principal);

printf("Enter the time in years:");
scanf("%f",&time);

printf("Enter the annual rate in decimals: ");
scanf("%f",&rate);

simple_interest=(principal* rate* time) /100;
printf("The simple interest is %.2f", simple_interest);
return 0;
}
    