/*Subsum*/

#include <stdio.h>

int max(int a,int b){
	return (a>b)?a:b;
}
int subsum(int *a,int n,int index,int sum){
	if(sum==0 && n==0){
		printf("sum=%d, n=%d\n",sum,n);
		return 1;
	}
	else if((sum!=0 && n==0)||(sum==0 && n!=0)){
		printf("sum=%d, n=%d\n",sum,n);
		return -1;
	}
	else if(a[index]>sum){
		printf("a[i]=%d, n=%d\n",a[index],n);
		return subsum(a,n-1,index+1,sum);
	}
	else{
		printf("a[i]=%d, n=%d\n",a[index],n);
		return subsum(a,n-1,index+1,sum-a[index])||subsum(a,n-1,index+1,sum);
	}
	return -1;
}


int main(int argc, char const *argv[])
{
	int a[]={1,5,4,3,6,3,2,1};
	int n = sizeof(a)/sizeof(a[0]);
	int sum = 11;

	int p = subsum(a,n,0,sum);
	if(p==1){
		printf("subsum possible\n");
	}
	else{
		printf("subsum not possible\n");
	}
	return 0;
} 