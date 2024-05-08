#include<stdio.h>
int isprimefirst(int n){
	int i;
	for( i = 2; i<=n-1; i++){
		if(n%i == 0){
			break;
		}
	}
	if(i==n){
		return 1;
	}else{
		return 0;
	}
}
int isprimesecond(int n){
	
	int i, count = 0;
	for(i = 1; i<=n; i++){
		if(n%i==0){
			count++;
		}
	}
	if(count == 2){
		return 1;
	
	}else{
		return 0;
	}
}
int bestapproch(int n){
	int i, count =0;
	for(i = 1; i*i<=n; i++){
		if(n%i==0){
			count++;
			if((n/i)!=i){
				count++;
			}
		}
	}
	if(count ==2){
		return 1;
	}
	else{
		return 0;
	}
}
int main(){
	int n;
	printf("enter the value: ");
	scanf("%d",&n);
	if(isprimefirst(n)&&isprimesecond(n)&&bestapproch(n)){
		printf("this number is prime");
		
	}else{
		printf("this number is not prime");
	}

			
}
