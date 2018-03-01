/*Algorithm to find the maximum difference of j - i
 such that a[j] > a[i], for a given an array of 'n' elements.*/

#include <stdio.h>
int main(int argc, char const *argv[])
{
	int a[] = {3,6,2,9,5,7,2};
	int n = sizeof(a)/sizeof(a[0]);
	int maxdifin = -1;
	for(int i=0; i<n-1; ++i){
		for(int j=i+1; j<n; ++j){
			if(a[j]>a[i] && j-i>maxdifin)
				maxdifin = j-i;
		}
	}
	printf("%d is the max difference bw the indices\n",maxdifin );
	return 0;
}