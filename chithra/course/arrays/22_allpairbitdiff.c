//find the sum of bit differences of the all possible pair of inputs

#include <stdio.h>


int bitDiff(int a, int b){
	int exor = a^b,diff=0;
	while(exor>0){
		diff+=exor%2;
		exor/=2;
	}
	return diff;
}

int bitDiffSum(int a[], int n){
	int sum;
	for(int i=0; i<n; i++){
		for(int j=0; j<n; ++j){
			// printf("%d, %d : diff = %d\n",a[i],a[j],bitDiff(a[i],a[j]) );
			sum+=bitDiff(a[i],a[j]);
		}
	}
	return sum;
}

/*Efficient Algorithm */
int bitDiffSumEffi(int a[], int n){
	int ans = 0;
	for(int i=0; i<32; i++){
		int count = 0;
		for(int j=0; j<n; j++){
			//find the elements whose ith bit is set and add to count
			if(a[j] & (1<<i)){
				count++;
			}
		}
		//if count nos has ith bit set, n-count has ith bit not set
		//so no of pairs having difference is c*(n-c)*2
		//that means each pair contribute a difference of 1,so add them up
		ans+= count*(n-count)*2;
	}
	return ans;
}

int main(int argc, char const *argv[])
{
	int a[]  = {1,2};
	int n = sizeof(a)/sizeof(a[0]);
	int p = bitDiffSum(a,n);
	printf("%d %d\n",p,bitDiffSumEffi(a,n) );
	return 0;
}