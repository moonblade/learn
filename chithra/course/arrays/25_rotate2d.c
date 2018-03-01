/*Rotating 2d square matrix by 90 degree*/
	/*  
		1 2 3	3 6 9
		4 5 6	2 5 8 
		7 8 9	1 4 7
	*/

#include <stdio.h>

void swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

void print(int a[][4], int n){
	for(int i=0; i<n; i++){

		for(int j=0; j<n; j++)
			printf("  %5d ",a[i][j] );
		printf("\n");
	}
		printf("\n");
}

void rotate(int a[][4],int n){
	for(int i=0;i<n/2;i++){
		for(int j=i;j<n-1-i;j++){
			int temp = a[i][j];
			a[i][j] =a[j][n-1-i];
			a[j][n-1-i] = a[n-1-i][n-1-j];
			a[n-1-i][n-1-j] = a[n-1-j][i];
			a[n-1-j][i] = temp;
		}
	}
}

int main(int argc, char const *argv[])
{
	int a[][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
	int n = 4;
	print(a,n);
	rotate(a,n);
	print(a,n);
	return 0;
}