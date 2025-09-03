#include<stdio.h>
int main(){
	int q;
	printf("enter array size :-");
	scanf("%d",&q);
	int a[q],i,r=0;
	for( i=0;i<q;i++){
		printf("enter array elemenent %d:",i+1);
		scanf("%d",&a[i]);
	}
	for(i=0;i<q;i++){
		printf("element that in array:-%d\n",a[i]);
	}
	for(i=0;i<q;i++){
		r=r+a[i];
	}
	printf(" sum of array element is:-%d",r);
	
}
