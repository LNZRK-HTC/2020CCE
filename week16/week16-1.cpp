#include <stdio.h>
int main()
{
	int k,i,ans=0;
	scanf("%d",&k);
	for(i=1;i<k;i++)
	{
		ans+=i;
		if(ans>k)break;
	}
	printf("%d",i);
}
