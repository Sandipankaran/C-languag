#include<stdio.h>
int main(){
    int a,b,c,d;
   printf("WELOCOME TO SIMPLE CALCULATOR USING C");
   printf("\n------------------------------------\n");
   printf("1. addtion\n");
   printf("2. subtraction\n");
   printf("3. multiplacation\n");
   printf("4. Devition\n");
   printf("\n\n Select a option: ");
   scanf("%d",&d);
   switch (d){
    case 1:
			printf("Enter your 1st number : ");
			scanf("%d",&a);
			printf("Enter your 2st number : ");
			scanf("%d",&b);
			c=a+b;
			printf("The answer of addition = %d",c);
			break;
				case 2:
            printf("Enter your 1st number : ");
			scanf("%d",&a);
			printf("Enter your 2st number : ");
			scanf("%d",&b);
			c=a-b;
			printf("The answer of subtraction= %d",c);
			break;
				case 3:
			printf("Enter your 1st number : ");
			scanf("%d",&a);
			printf("Enter your 2st number : ");
			scanf("%d",&b);
			c=a*b;
			printf("The answer of multiplaction = %d",c);
			break;
		case 4:
			printf("Enter your 1st number : ");
			scanf("%d",&a);
			printf("Enter your 2st number : ");
			scanf("%d",&b);
			c=a/b;
			printf("The answer of devition = %d",c);
			break;
        default:
        printf("No option is selected");
   }
    
}
