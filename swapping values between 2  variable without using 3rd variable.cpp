#include<stdio.h>
int main(){
	int a,b;
	printf("Enter a number :-");
	scanf("%d",&a);
	printf("Enter a number :-");
	scanf("%d",&b);
	a=a+b;
	b=a-b;
	a=a-b;
	
	printf("%d\n",a);
	printf("%d",b);
}
