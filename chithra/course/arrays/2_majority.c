#include <stdio.h>
struct intCount
{
	int num=-1,count=0;
};
int main(int argc, char const *argv[])
{
	struct intCount maj;
	maj.count=0;
	int a[] = {1,3,3,2,4,5,6,3,4,3};
	int n = sizeof(a)/sizeof(a[0]);
	struct intCount c[n];
	for(int i=0; i<n; i++){
		int j=0;
		do
		{
			if(c[j].num==a[i]){
				c[j].count++;
				break;
			}
			else if(c[j].num==-1){
				c[j].num=a[i];
				c[j].count++;
				break;
			}
		}while(j++<n);

	}
	for (int i = 0; i < n; ++i)
	{
		if(c[i].count>maj.count){
			maj.count=c[i].count;
			maj.num = c[i].num;
		}
	}
	printf("%d %d\n",maj.num, maj.count);
	return 0;
}