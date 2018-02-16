#include <stdio.h>
int main(int argc, char const *argv[])
{
	int a[] = {0,1,0,0,0,1,1,1,0,1,0,0};
	int n = sizeof(a)/sizeof(a[0]);
	int countZero=0, countOne=0;
	for(int i=0; i<n; ++i){
		if(a[i]==0)
			countZero++;
		if(a[i]==1)
			countOne++;
	}
	printf("%d %d\n",countZero,countOne );
	int i=0;
	while(--countZero>=0){
		a[i++] = 0;
	}
	while(--countOne>=0){
		a[i++] = 1;
	}
	for (int i = 0; i < n; ++i){
		printf("%d ", a[i]);
	}
	printf("\n");
	return 0;
}