/*make a[i] as a[a[i]] o(1) space*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
	int a[] = {5,3,2,4,0,1};
	int n =sizeof(a)/sizeof(a[0]);
	for(int i=0;i<n;i++){
		a[i] +=(a[a[i]]%n)*n;
	}
	for(int i=0;i<n;i++)
		a[i]/=n;
	for (int i = 0; i < n; ++i)
	{
		printf("%d ", a[i]);
	}
	return 0;
}