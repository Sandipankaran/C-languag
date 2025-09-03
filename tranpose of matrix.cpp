#include<stdio.h>
int main(){
	int r,c;
	printf("ENTER ROW SIZE ");
	scanf("%d",&r);
	printf("ENTER column SIZE ");
	scanf("%d",&c);
	int u[r][c],i,j;
	for(i=1;i<=r;i++){
		for(j=1;j<=c;j++){
			printf("enter element of matrex [%d][%d]:-",++i,j++);
			scanf("%d",&u[i][j]);
		}
	}
	printf("the matrex is\n ");
	for(i=1;i<=r;i++){
	for(j=1;j<=c;j++){
	printf("%d",u[i][j]);}
		printf("\n");}
		printf("the trenspos of matrex is \n");
		for(i=1;i<=r;i++){
		for(j=1;j<=c;j++){
			printf("%d",u[j][i]);
		}
		printf("\n");}
}
