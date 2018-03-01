/*Find the number which is next greater to the given no by permuting*/

#include <stdio.h>
#include <stdlib.h>
#define INT_MAX 1000
/*
	Algorithm

	*move from right to left, find an index i such that a[i]<a[i+1]
	*now traverse in the array from index i+1 to the end, and find the index of 
	 just next greater num of a[i] as j
	*swap a[i] and a[j]
	*now sort the nums from index i+1 to n

*/
int swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}
int *a = (int*)malloc(sizeof(int)*20);
int i=0;
int p;
int *convertToArray(int n){
	int temp = n;
	while(temp>0){
		a[i++] = temp%10;
		temp/=10;
	}
	for(int j=0,k=i-1; j<k+1; j++,k--){
		swap(&a[j],&a[k]);
	}
	p = i;
	return a;
}

int findIndex(int a[], int n){
	int index = -1;
	for(int i=n-1; i>0;i--){
		if(a[i-1]<a[i])
		{
			index = i-1;
			break;
		}
	}
	return index;

}
int findSwapInd(int a[], int index,int end){
	//find smallest num to the right of index, >than a[index]
	int minIndex = index+1;
	for(int i=index+1; i<end; i++){
		if(a[i]>a[index] && a[minIndex]>a[index])
			minIndex = i;
	}
	return minIndex;
}

int partition(int a[], int start, int end){
	int pivot = a[end];
	int i = start-1;
	for(int j=start;j<end; j++){
		if(a[j]<=pivot){
			i++;
			swap(&a[i],&a[j]);
		}
	}
	swap(&a[i+1],&a[end]);
	return i+1;
}
void quicksort(int a[], int s,int e){
	if(s<e){
		int p = partition(a,s,e);
		quicksort(a,s,p-1);
		quicksort(a,p+1,e);
	}

}

void print(int a[], int n){
	for (int i = 0; i < n; ++i){
		printf("%d",a[i]);
	}
}

int main(int argc, char const *argv[])
{
	int n = 534976;
	int temp = n;
	a = convertToArray(n);
	int index = -1;
	index = findIndex(a,p);
	// printf("%d\n",index );
	int nextIndex = findSwapInd(a,index,p);
	// printf("%d\n",a[nextIndex] );
	swap(&a[index],&a[nextIndex]);
	quicksort(a,index+1,p-1) ;
	print(a,p);
	return 0;
}