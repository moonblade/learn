/*Wave like sorting*/

#include <stdio.h>
int swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
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
void waveLikeSort(int a[],int n){
	for(int i=0; i<n-1; i+=2){
		swap(&a[i],&a[i+1]);
	}
}
void print(int a[],int n){
	for(int i=0; i<n; i++)
		printf("%d ",a[i]);
	printf("\n");
}

/*For each even indexed element, make sure that it is greater than 
previous odd- indexed*/

void waveLikeEfficient(int a[] , int n){
	for(int i=0; i<n; i+=2){
		//if cur<prev
		if(i>0 && a[i]<a[i-1])
			swap(&a[i],&a[i-1]);
		//if cur<next
		if(i<n-1 && a[i]<a[i+1])
			swap(&a[i],&a[i+1]);
	}
}
int main(int argc, char const *argv[])
{
	/* code */
	int a[] = {10,90,49,2,1,5,23};
	int n = sizeof(a)/sizeof(a[0]);
	// quicksort(a,0,n-1);
	// waveLikeSort(a,n);
	waveLikeEfficient(a,n);
	print(a,n);
	return 0;
}