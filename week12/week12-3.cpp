#include <stdio.h>
int fun(int a,int b,int c)
{
	if(a<b&&a<c)return("%d\n",a);
	if(b<a&&b<c)return("%d\n",b);
	if(c<a&&c<b)return("%d\n",c);
}
int main()
{
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	printf("%d\n",fun(a,b,c));
}
