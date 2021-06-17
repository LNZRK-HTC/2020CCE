#include <stdio.h>
int main()
{
	int ans=0,n;
	scanf("%d",&n);
	while(n!=0)
	{
		if(n>0)
		{
			ans+=n;
		}
		scanf("%d",&n);
	}
	printf("%d",ans);
}
