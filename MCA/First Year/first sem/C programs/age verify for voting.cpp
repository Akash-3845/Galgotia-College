#include<stdio.h>
#include<conio.h>
int main(){
	int age;
	printf("Enter your Age:");
	scanf("%d", &age);
	age>=18?printf("you are eligble for voting"):printf("you are not eligble for voting");
	return 0;
}
