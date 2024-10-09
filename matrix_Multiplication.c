#include<stdio.h>
int main(){
	int i,j,k,r,c;
	printf("Enter no. of rows:");
	scanf("%d",&r);
	printf("\nEnter no. of cols:");
	scanf("%d",&c);
	int a[r][c],b[r][c],mul[r][c];
	printf("Enter 1st Matrix:");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nEnter 2nd Matrix:");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<r;i++){
		mul[i][j]=0;
		for(j=0;j<c;j++){
			for(k=0;k<c;k++){
				mul[i][j] += a[i][k]*b[k][j];
			}	
		}
	}
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("%d ",mul[i][j]);
		}
		printf("\n");
	}
	return 0;
}
