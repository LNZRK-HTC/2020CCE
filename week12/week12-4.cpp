#include <stdio.h>
int main()
{
	int a[7];
	for(int i=1;i<=6;i++)
	{
		scanf("%d",&a[i]);
		printf("%d\n",a[i]*a[i]*a[i]);
	}
}
