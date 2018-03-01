/*
	Find the smallest positive integer value that can not be
	represented as sum of any subset of given array
*/

#include <stdio.h>

int findSmallest(int a[], int n){
	int res = 1;
	for(int i=0; i<n && a[i]<=res;  i++)
		res = res+a[i];
	return res;
}

int main(int argc, char const *argv[])
{
	int a[] = {1,3,4,5};
	int n   = sizeof(a)/sizeof(a[0]);
	printf("%d\n",findSmallest(a,n));

	int b[] = {1,2,6,10,11};
	int n2 = sizeof(b)/sizeof(b[0]);
	printf("%d\n",findSmallest(b,n2));
	return 0;
}