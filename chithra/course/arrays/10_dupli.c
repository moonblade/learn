/* Algorithm to find duplicate elements in O(n) time and
 O(1) extra space, for a given array of size 'n'. Restriction:
 All the elements in the array should be less than n*/

#include <stdio.h>
#include <set>
#include "stack"
#include <stdlib.h>
void findDuplicates(int a[], int n){
	for(int i=0; i<n; i++){
		if(a[abs(a[i])]>=0)
			a[abs(a[i])] = -a[abs(a[i])];
		else{
			printf("%d ",abs(a[i]));
		}

	}
}
void findDupliEfficient(int a[], int n){
	for(int i=0; i<n; ++i){
		int index = a[i]%n;
		a[index]+=n;
	}
	for(int i=0; i<n;++i)
		printf("%d ",a[i] );
	printf("\n");
	for(int i=0; i<n; ++i){
		if((a[i]/n)>1){
			printf("%d ",i);
		}
	}
}

int main(int argc, char const *argv[])
{
	int a[] = {1,2,3,1,3,6,6,1};
	int n = sizeof(a)/sizeof(a[0]);
	// findDuplicates(a,n);
	// printf("\n");
	findDupliEfficient(a,n);
	return 0;
}