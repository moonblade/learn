#include <stdio.h>
struct intCount
{
	int num=-1,count=0;
};
int main(int argc, char const *argv[])
{
	
	int a[] = {1,1,6,4,3,2,2,6,4,7,7,7,4,8};
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
		if((c[i].count%2)!=0)
			printf("%d %d\n",c[i].num, c[i].count );
	}
	return 0;
}