#include <stdio.h>
int a[100];
int main()
{
	int T;//step01:input¦³´Xµ§
	scanf("%d",&T);
	for(int t=0;t<T;t++)
	{
		int N;
		scanf("%d",&N);
		for(int i=0;i<N;i++)//step02:input¨ì°}¦Ca[i]
		{
			scanf("%d",&a[i]);
		}
		int ans=0;

		//step03:output
		printf("Optimal train swapping takes %d swaps.\n",ans);
	}
}
