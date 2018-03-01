#include <stdio.h>
int main(int argc, char const *argv[])
{
	int M[] ={4,5};
	int mPlusN[] = {1,2,3,0,0};
	int m = 2,n = 3;
	int k=m+n-1;
	for(int i=n-1; i>=0; --i,--k){
		mPlusN[k] = mPlusN[i];
	}
	for(int i=0; i<m;++i)
		mPlusN[i] = 0;
	//00125
	int i=0,j=n-1;
	k=0;
	while((i<m)&&(j<m+n)){
		if(mPlusN[j]<M[i]){
			mPlusN[k++] = mPlusN[j++];
		}
		else{
			mPlusN[k++] = M[i++];
		}
	}
	while(i<m){
		mPlusN[k++] = M[i++];
	}
	for(int i=0; i<m+n; ++i){
		printf("%d ",mPlusN[i]);
	}
	return 0;
}