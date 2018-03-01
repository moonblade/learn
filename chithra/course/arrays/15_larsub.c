/*Given an array containing only 0s and 1s, find the largest
subarray which contain equal no of 0s and 1s. Expected time
 complexity is O(n). */

#include <stdio.h>
void largSubArray(int a[], int n){
	int c[2]={0};
	int s,e,max=0;
	for(int j=0; j<n-1; j++){
		if(a[j]==0)
			c[0]=1;
		else
			c[1] = 1;
		for(int i=j+1; i<n; i++){
			if(a[i]==0)
				c[0]++;
			else
				c[1]++;
			if(c[0]==c[1] && max<i-j+1){
				s=j;
				max=i-j+1;
			}
		}
	}
	printf("%d %d %d\n",s,s+max-1,max);
}
int main(int argc, char const *argv[])
{
	int a[] = {0,0,1,1,0};
	int n = sizeof(a)/sizeof(a[0]);
	largSubArray(a,n);
	return 0;
}