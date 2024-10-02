//program to determine if a person qualifiea for a loan 
/*
program to determine if a person qualifies for a loan
Author:Rebeccah Kirika
Date:23/09/2024
*/
#include <stdio.h>
int main (){
int age;
int annual_salary;
printf("Enter the age");
scanf("%d",&age);

printf("Enter the annual_salary");
scanf("%d",&annual_salary);

if (age>=21&annual_salary>=21000) {
printf("Congratulation you qualify for a loan!");
} 
else {
printf("Unfortunately we are unable to offer you a loan at this time.");
}
return 0;
}