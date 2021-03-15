#include <stdio.h>
int main()
{
	int n=0;
	int a[11];
	for(int i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]==0)
			break;
			n++;//­pºâ­Ó¼Æ
	}
	for(int i=n-1;i>=0;i--)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
}


/*#include <stdio.h>
int a[1000];
int main()
{
	int n=0;
	for(int i=1;i<1000;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]==0)
		{
			n=i;
			break;
		}

	}
	for(int i=n-1;i>=1;i--)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
}
*/
