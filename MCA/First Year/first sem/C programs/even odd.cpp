#include<stdio.h>
#include<conio.h>
int main(){
	for(int i = 1; i<=100; i++){
		(i % 2 ==0)? printf("%d is a even number\n", i): printf("%d is odd number \n ", i);
	}
	return 0;
}
