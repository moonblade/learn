/*Algorithm to segregate 0's and 1's in an array*/

#include <stdio.h>

void sort(int a[], int n){
	int l=0, r=n-1;
	while(l<r){
		while(a[l]==0 && l<r)
			l++;
		while(a[r]==1 && l<r)
			r--;
		if(l<r){
			int temp = a[l];
			a[l] = a[r];
			a[r] = temp;
		}
	}
}
int main(int argc, char const *argv[])
{
	int a[] = {0,1,0,0,0,1,1,1,0,1,0,0};
	int n = sizeof(a)/sizeof(a[0]);
	// int countZero=0;
	// for(int i=0; i<n; ++i){
	// 	if(a[i]==0)
	// 		countZero++;
		
	// }
	// for(int i=0;i<countZero;i++)
	// 	a[i] = 0;
	// for(int i=countZero;i<n;i++)
	// 	a[i] = 1;
	sort(a,n);
	for (int i = 0; i < n; ++i){
		printf("%d ", a[i]);
	}
	printf("\n");
	return 0;
}