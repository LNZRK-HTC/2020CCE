#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int ans=0;
	for(int i=1;i<=n;i++)
	{
		ans+=i*i;
	}
	printf("%d",ans);
}
/*
#include <stdio.h>
int main()
{
	int n,i,sum=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum+=(i*i);
	}
	printf("%d",sum);
}
*/
