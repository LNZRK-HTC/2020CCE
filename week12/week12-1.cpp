#include <Stdio.h>
int main()
{
	int a[15],ans=0;
	for(int i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]==0)
		break;
		ans++;

	}
	printf("%d",ans);
}

/*
#include <stdio.h>
int main()
{
	int a,ans=0;
	while(scanf("%d",&a)!=EOF)//End of File
	{
		ans++;
	}
	printf("%d",ans-1);//因為最後一個0
}
*/
