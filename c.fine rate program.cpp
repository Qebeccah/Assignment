//program to calculate the fine for overdue library books
/*
Author:
Date:
*/
#include <stdio.h>
# include<math.h>
int main(){

int book_id;
int due_date;
int return_date;
int days_overdue;
int fine_rate;
int fine_amount;

printf("Enter the Book ID");
scanf("%d",&book_id);
printf("Enter the Due Date");
scanf("%d",&due_date);
printf("Enter the Return Date");
scanf("%d",&return_date);

days_overdue = return_date - due_date;

if (days_overdue<=7) {
fine_rate=20;
 fine_amount=fine_rate*days_overdue;
 printf("fine_amount is%d\n",fine_amount);
}
else if (days_overdue<=14) {
fine_rate=50;
fine_amount=fine_rate*days_overdue;
printf("fine_amount is%d\n",fine_amount);
}
else{
fine_rate=100;
fine_amount=fine_rate*days_overdue;
printf("fine_amount is%d\n",fine_amount);
}

printf("book_id is%d\n",book_id);
printf("due_date is%d\n",due_date);
printf("return_date is%d\n",return_date);
printf("days_overdue is%d\n",days_overdue);
printf("fine_rate is%d\n",fine_rate);
printf("fine_amount is%d",fine_amount);
 return 0;
 }        
        