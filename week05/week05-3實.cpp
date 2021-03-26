#include <stdio.h>
int main()
{
	int n,a[100];
	scanf("%d",&n);
	int ans=0;
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
		ans += a[i];
	}
	printf("%d",ans);
	printf("\n");
}


