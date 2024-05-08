#include<stdio.h>
#include<conio.h>
int isPrime(int n){
	int cnt = 0;
	for(int i = 1; i*i <= n; i++){
		if(n % i == 0){
		cnt++;
			if((n/i) != i)
	{
		cnt++;
		}
		}
	
	}
	if(cnt == 2){
		return 1;
	}
	else{
		return 0;
	}	
}
int main(){
	for(int i = 1; i <= 10; i++){
		if(isPrime(i) ){
			printf("%d is prime number \n", i);
		}
	}
	return 0;
}
