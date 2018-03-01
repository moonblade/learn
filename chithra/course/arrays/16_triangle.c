/*Algorithm to find the number of triangles that can be formed with 
 three different array elements as three sides of triangles, for a given
 unsorted array of n elements*/

#include <stdio.h>

//Brute force algorithm
int count = 0;
void triangle(int a[],int n){
	for(int i=0; i<n-2; ++i){
		for(int j=i+1; j<n-1; ++j){
			for(int k=j+1;k<n;++k){
				if(a[i]+a[j]>a[k] && a[i]+a[k]>a[j] && a[j]+a[k]>a[i]){
					count++;
					printf("%d %d %d\n",a[i],a[j],a[k] );
				}
			}
		}
	}
	printf("Total no of triangles possible using the given combination are %d\n",count);
}

/*
	Sort the array

*/

int partition(int a[], int s, int e){
	int pivot = a[e];
	int i = s-1;
	for(int j=s; j<e; j++){
		if(a[j]<=pivot){
			i++;
			int temp = a[i];
			a[i]	=  a[j];
			a[j]	= temp;
		}
	}
	int temp = a[i+1];
	a[i+1]=a[e];
	a[e] = temp;
	return i+1;
}

void quicksort(int a[],int s,int e){
	// int p;
	if(s<e){
		int p = partition(a,s,e);
		quicksort(a,s,p-1);
		quicksort(a,p+1,e);
	}
}
int noOfTriangles(int a[], int n){
	quicksort(a,0,n-1);
	int c=0;
	for(int i=0; i<n-2; i++){
		int k = i+2;
		for(int j=i+1; j<n; j++){
			while(k<n && a[i]+a[j]>a[k])
				k++;
			c+=k-j-1;
		}
	}
	return c;

}
int main(int argc, char const *argv[])
{
	int a[] =  {10, 100, 101, 200, 21,22,300};
	int n = sizeof(a)/sizeof(a[0]);
	triangle(a,n);
	// for(int i=0; i<n; i++)
	// 	printf("%d ",a[i] );
	printf("In efficient way, %d\n",noOfTriangles(a,n) );
	return 0;
}