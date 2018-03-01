/*Trapping rain water problem, How much amount of rain water can be trapped*/

#include <stdio.h>
int max(int a, int b){
	return (a>b)?a:b;
}

int min(int a,int b){
	return (a<b)?a:b;
}

int rainWater(int a[], int n){
	int water = 0;
	int left[n];
	int right[n];
	left[0] = a[0];
	right[n-1] = a[n-1];
	for(int i=1; i<n; i++){
		left[i] = max(left[i-1],a[i]);
	}
	for(int i=0;i<n; i++)
		printf("%d ",left[i] );
	printf("\n");


	for(int i=n-2;i>=0;i--)
		right[i] = max(right[i+1],a[i]);
	for(int i=0;i<n; i++)
		printf("%d ",right[i] );
	printf("\n");
	for (int i = 0; i < n; ++i){
		water+=min(left[i],right[i]) - a[i];
	}
	return water;
}

int main(int argc, char const *argv[])
{
	int a[] = {0,1,0,2,1,0,1,3,2,1,2,1};
	int n = sizeof(a)/sizeof(a[0]);
	printf("%d\n", rainWater(a,n));
	return 0;
}