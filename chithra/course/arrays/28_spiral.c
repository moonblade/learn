/*Traverse the matrix in a spiral form*/

#include <stdio.h>
#define N 6
#define R 3

void printSpiral(int a[][N]){
	for(int k=0;k<=R/2;k++){
		for(int j=k; j<N-k; j++)
			printf("%d ",a[k][j] );
		for(int i=k+1;i<R-1-k;i++)
			printf("%d ",a[i][N-1-k] );
		if (k!=R/2 && R%2!=0){	
			for(int j=N-1-k;j>=k;j--)
				printf("%d ",a[R-1-k][j]);
		}
			for(int i=R-2-k;i>k;i--)
				printf("%d ",a[i][k]);
	}
	printf("\n");
}

int main(int argc, char const *argv[])
{
	int a[][N] = {{1,2,3,4,5,6},{7,8,9,10,11,12},{13,14,15,16,17,18}};
	/*
		1  2  3  4  5  6
		7  8  9 10 11 12
	   13 14 15 16 17 18

	   1 2 3 
	   4 5 6 
	   7 8 9

	    1  2  3  4
	    5  6  7  8
	    9 10 11 12
	   13 14 15 16

	*/
	printSpiral(a);
	return 0;
}