/*Algorithm to find the contiguous sub-array with maximum sum, 
 for a given array of postive and negative numbers.*/

#include <stdio.h>
//Handles if all the elements are -ve also
void maxsubsum(int a[], int n){
	int s=-1,e=-1;
	int max_so_far=a[0], cur_max = a[0];
	for(int i=1; i<n; i++){
		if(a[i]>cur_max+a[i]){
			s = i;
			cur_max = a[i];
		}
		else
			cur_max = cur_max+a[i];
		if(max_so_far<cur_max){
			e = i;
			max_so_far = cur_max;
		}
	}
	printf("Max sum :%d\nStarts at %d\nEnds at %d\n",max_so_far,s,e );
}
/*If both +ve and -ve nums are there
	initialise sum=0, maxsum=0
	keep on adding each elt in the array to  sum
	when sum<0,reset it to zero and start adding from the next index
	if sum>maxsum ,maxsum = sum
*/

int main(int argc, char const *argv[])
{
	int a[] = {-2,-3,4,-1,-2,1,5,-3};
	int n = sizeof(a)/sizeof(a[0]);
	maxsubsum(a,n);
	return 0;
}