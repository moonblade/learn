/* 	Given an array, find the maximum difference between 
	two elts such that biggest is to the right of smallest
*/

#include <stdio.h>
int main(int argc, char const *argv[])
{
	int a[] = {2, 3, 10, 6, 4, 8, 1};
	int n = sizeof(a)/sizeof(a[0]);
	int maxdif = a[1]-a[0];
	int ind1=1,ind2=0;
	for(int i=0; i<n; ++i){
		for(int j=i+1; j<n-1; ++j){
			if(a[j]-a[i]>maxdif){
				maxdif = a[j]-a[i];
				ind1 =j;
				ind2 =i;
			}
		}
	}
	printf("%d %d %d\n", maxdif,ind1,ind2 );
	return 0;
}