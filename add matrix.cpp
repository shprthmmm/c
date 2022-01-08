#include <stdio.h>
#include <stdlib.h>
#define ROW 10
#define COL 10

int main(){
	int r,c,i,j,a,b;
	int m1[ROW][COL],m2[ROW][COL],m3[ROW][COL];
	printf("Enter the no. of rows and columns of 1st matrix = ");
	scanf("%d %d",&r,&c);
	
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("Enter element %d,%d = ",i+1,j+1);
			scanf("%d",&m1[i][j]);
		}
		printf("\n");
	}
	printf("Enter the no. of rows and columns of 2nd matrix = ");
	scanf("%d %d",&a,&b);
	for(i=0;i<r;i++){
	    for(j=0;j<c;j++){
			printf("Enter element %d,%d = ",i+1,j+1);
			scanf("%d",&m2[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			m3[i][j]=m1[i][j] + m2[i][j];
			printf("%d",m3[i][j]);
	    }
		printf("\n");
	}
	
	return 0;
}
