#include<stdio.h>
#include<conio.h>
//swapping without using thrid variable
int firstWay(int a, int b){
	a = a+b;
	b = a-b;
	a = a-b;
	printf("\nafter swapping by first way %d %d", a ,b);
	return 0;
		

}
//using bitwise XOR operator
int secondWay(int a, int b){
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("\nafter swaping by second method %d %d", a ,b);
	return 0;
	
}
// using airthematic operation
int thirdWay(int a , int b){
	a = a*b;
	b = a/b;
	a = a/b;
	printf("\nafter swapping by thrid method %d %d", a,b);
	return 0;
}
int main(){
	int a , b;
	printf("\nenter the value which you want swap:-\n");
	scanf("%d %d", &a, &b);
	firstWay(a,b);
	secondWay(a,b);
	thirdWay(a,b);
	return 0;
}
