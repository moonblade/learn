/*Sort an array having zero one and two*/

#include <stdio.h>

void swap(int *a, int *b){
	if(*a!=*b){

	int temp = *a;
	*a = *b;
	*b = temp;
	}
}

void sort(int a[],int n){
	int l = 0,m = 0,r=n-1;
	while(m<=r){
		switch(a[m]){
			case 0:	swap(&a[l++],&a[m++]);
					break;
			case 1:	m++;
					break;
			case 2:	swap(&a[m],&a[r--]);
					break;
		}

	}
}

void print(int a[], int n){
	for(int i=0; i<n; i++)
		printf("%d ",a[i] );
}

int main(int argc, char const *argv[])
{
	int a[] = {0,1,0,2,0,1,0,2,2,1,0,2,0};
	int n = sizeof(a)/sizeof(a[0]);
	sort(a,n);
	print(a,n);
	return 0;
}