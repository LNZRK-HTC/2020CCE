#include <stdio.h>
int main()
{
	int max,min,n;
	scanf("%d",&n);
	min=n;
	max=n;
	while(n!=0)
	{
		scanf("%d",&n);
		if(min>n)min=n;
		if(max<n)max=n;
	}
	printf("[%d,%d]",min,max);
}
