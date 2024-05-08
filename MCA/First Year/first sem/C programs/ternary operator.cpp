#include<stdio.h>
#include<conio.h>

int main() {

	int a, b,c, d;
	printf("Enter the value");
	scanf("%d %d %d", &a, &b, &c);
	d = 	(a>b && a>c)? a:(b>c?b:c);
	printf("Big number is %d", d);

return 0;
}
