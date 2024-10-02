//program to calculate compound interest
/*
Author:Kirika Rebeccah
*/
//variable and data types
//preprocessor directive scanf(),printf()
#include<stdio.h>
#include<math.h>
int main(){
float P;
float r;
float t;
float n ;
float A;
float CI;

printf("Enter P amount in sh(cents):");
scanf("%f",&P);

printf("Enter r in decimals:");
scanf("%f",&r);

printf("Enter t in years:");
scanf("%f",&t);

printf("Enter the value of n:");
scanf("%f",&n);

A=P* pow((1+r/n),n*t);
CI=A-P;
printf("CI is %.2f",CI);
return 0;
}