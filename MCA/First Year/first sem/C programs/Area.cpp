#include<stdio.h>
#include<conio.h>
int circleArea(float r){
	float A = 3.14*r*r;
	printf("The Area of Circle is:%.2f",A);
	return 0;
}
int rectangleArea(float w, float h){
	float A = w * h;
	printf("The Area of Rectangle is:%.2f",A);
	return 0;
}
int triangleArea(float b, float h){
	float A = (b*h)/2;
	printf("The Area of triangle is:%.2f",A);
	return 0;
}
int main()
{
	int s;
	printf("\n 1. circle");
		printf("\n 2. Rectangle");
			printf("\n 3. Triangle\n");
			scanf(" %d",&s);
			switch(s){
				case 1:
					float r;
					printf("\nEnter the Radius:");
					scanf("%f",&r);
					circleArea(r);
					break;
				case 2:
					float w; float h;
					printf("\nEnter the width and height:");
					scanf("%f %f",&w,&h);
					rectangleArea(w,h);
					break;
				case 3:
					float b; float H;
					printf("\nEnter the Base and Height of triangle:");
					scanf("%f %f",&b,&H);
					triangleArea(b,H);
					break;
			}
			
			return 0;
}
