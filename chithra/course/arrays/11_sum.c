/*Find the index in an array such that the sum of elements 
at lower indices is equal to the sum of elements at higher indices.*/

#include <stdio.h>
int main(int argc, char const *argv[])
{
	int a[] = {2,4,5,1,4,6,8,2};
	int n = sizeof(a)/sizeof(a[0]);
	int sum1=0,sum2=0;
	int i=0,j=n-1;
	while(i<n &&j+1!=i){
		sum1+=a[i];
		i++;
		if(sum1>sum2){
			sum2+=a[j];
			j--;
		}
		else if(sum1<sum2){
			sum1+=a[i++];
		}
		else{
			sum1+=a[i++];
			sum2+=a[j--];
		}
	}
	if(sum1==sum2)
		printf("%d %d\n",i,sum1);
	else
		printf("%d %d\n",sum1,sum2 );
	return 0;
}