#include<stdio.h>
int FIBBONACCI(int n){
	if(n==0){
		return 0;
	}else if (n==1){
		return 1;
	}
	else{
		return (FIBBONACCI(n-1) + FIBBONACCI(n-2));
	}
}

int fibbonacci(int n){
	int a=0, b=1, result;
	for(int i = 1; i<=n; i++){
		printf("%d \n", a);
		result = a + b;
		a = b;
		b = result;
	}
	return 0;
}
int main(){
	int n;
	printf("Enter the value:");
	scanf("%d",&n);
	fibbonacci(n);
	for(int i = 0; i<=n; i++){
		printf("%d ",FIBBONACCI(i));
	}
return 0;	
}
