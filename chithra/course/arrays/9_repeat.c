/*You are given an array of n+2 elements.
All elements of the array are in range 1 to n. 
And all elements occur once except two numbers which occur twice.
Find the two repeating numbers. */


#include <stdio.h>
int main(int argc, char const *argv[])
{
	int n = 5;
	int a[n+2] = {1,5,3,2,4,1,3};
	int count[n]={0};
	for(int i=0; i<n+2; ++i){
		count[a[i]]++;
	}
	for(int i=0; i<n; ++i){
		if(count[i]>1)
			printf("%d %d\n", i,count[i]);
	}
	return 0;
}