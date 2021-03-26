
#include<stdio.h>
int MYPOWER(int a,int b)
{
	int ans=1;
	for(int i=b;i>=1;i--)
	{
			ans=ans*a;
	}
	return ans;
}

int main(void)
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("[%d]",MYPOWER(a,b));
	return 0;
}



/*#include <staio.h>
int mypower(int a,int b)
{
	int ans=1;
	for(int i=1;i<=b;i--)
	{
			ans=ans*a;
	}
	return ans;
}

int main(void)
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("[%d]",mypower(a,b));
	return 0;
}
*/

/*#include <staio.h>
int mypower(int a,int b)
int main(void)
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("[%d]",mypower(a,b));
	return 0;
}
int mypower(int a,int b)
{
	int ans=1;
	for(int i=1;i<=b;i--)
	{
			ans=ans*a;
	}
	return ans;
}


*/
