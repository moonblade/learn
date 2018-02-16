#include "stdio.h"
int main(int argc, char const *argv[])
{
	int a[]  = {1,2,3,4,5,6,7};
	int n = sizeof(a)/sizeof(a[0]);
	for(int i=0,j=n-1;i<=n/2,j>=n/2;i++,j--){
		int temp = a[i];
		a[i]	 = a[j];
		a[j]	 = temp;
	}
	for(int i=0; i<n; ++i)
		printf("%d ",a[i] );
	printf("\n");
	return 0;
}