#include "stdio.h"
void rotate(int a[],int n){
	int temp = a[0];
	for(int i=0; i<n-1;++i){
		a[i] = a[i+1];
	}
	a[n-1] = temp;
}
//why dont we need to give pointer
int main(int argc, char const *argv[])
{
	int a[] = {1,2,3,4,5};
	int n = sizeof(a)/sizeof(a[0]);
	int d = 2;
	for(int i=0; i<d; i++)
		rotate(a,n);
	for(int i=0; i<n; ++i)
		printf("%d ",a[i] );
	printf("\n");
	return 0;
}