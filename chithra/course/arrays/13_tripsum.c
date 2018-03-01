/*Algorithm to find the triplet whose sum is X*/
#include <stdio.h>
int main(int argc, char const *argv[])
{
	int a[] =  {1, -4, 20, 6, 10, -8};
	int n = sizeof(a)/sizeof(a[0]);
	int x = 12;
	int k1,k2;
	for(int i=0; i<n-2; i++){
		k1 = a[i];
		for(int j=i+1; j<n-1; ++j){
			k2 = a[j];
			for(int k=j+1;k<n;++k){
				if(a[k]==x-a[i]-a[j])
					printf("%d %d %d\n",a[i],a[j],a[k] );
			}
		}
	}
}