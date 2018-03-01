/*Find a pair in an array of size 'n', whose sum is X*/
#include <stdio.h>
int main(int argc, char const *argv[])
{
	int a[] =  {1, -4, 20, 6, 10, -8};
	int x = 16;
	int i,j,key;
	int n = sizeof(a)/sizeof(a[0]);
	for(i=0; i<n-1; i++){
		key = a[i];
		for(j=i;j<n; j++){
			if(a[j]==(x-key)){
				printf("%d %d\n", key,a[j]);
			}
		}
	}

	return 0;
}