/*Algorithm to find the common element in given three sorted arrays*/
#include <stdio.h>
void findCommon(int a[], int b[], int c[], int n1, int n2, int n3){
	int i=0,j=0,k=0;
	//let a[i] = x, b[j] = y, c[k] = z
	while(i<n1 && j<n2 && k<n3){
		if(a[i]==b[j] && b[j]==c[k]){
			printf("%d\n",a[i] );
			i++;
			j++;
			k++;
		}
		//if x<y
		else if(a[i]<b[j]){
			i++;
		}
		//if x>y and y<z
		else if(b[j]<c[k])
			j++;
		//if x>y and y>z
		else 
			k++;
	}
}

int main(int argc, char const *argv[])
{
	int a[] = {1,5,10,20,40,80};
	int n1 = sizeof(a)/sizeof(a[0]);
	int b[] = {6,7,20,80,100};
	int n2 = sizeof(b)/sizeof(b[0]);
	int c[] = {3,4,15,20,30,70,80,120};
	int n3 = sizeof(c)/sizeof(c[0]);
	findCommon(a,b,c,n1,n2,n3);
	return 0;
}