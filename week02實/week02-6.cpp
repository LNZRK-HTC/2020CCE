#include <stdio.h>
int a[1000];
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int ans=0,sum=0;
	for(int i=0;i<n;i++)
	{
		ans+=a[i];
	}
	float avg;
	avg=(float)ans/n;
	printf("§¡¼Ð:%.1f\n",avg);
	int r = 0;
	for(int i=0;i<n;i++)
	{
		if(a[i]>=avg)
		{
			sum+=a[i];
			r++;
		}
	}
	float top;
	top=(float)sum/r;
	printf("«e¼Ð:%.1f\n",top);
}
