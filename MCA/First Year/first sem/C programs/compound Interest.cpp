#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
float prcAmount, rate, time;
printf("Enter Your Principal Amount: ");
scanf("%f",&prcAmount);
printf("\nEnter the Interest Rate: ");
scanf("%f", &rate);
printf("\nEnter the Time of Interest: ");
scanf("%f", &time);

float amount = prcAmount*(pow((1 + rate / 100), time));

float CoumpoundInterest = amount - prcAmount;
printf("\nYour Coumpound Interest:- %.2f", CoumpoundInterest);
return 0;
	 
}
