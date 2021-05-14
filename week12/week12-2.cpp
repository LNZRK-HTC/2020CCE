#include <stdio.h>
int main()
{
	int p,d;
	scanf("%d %d",&p,&d);
	printf("%d %d",(p-6*d)/6,(p-6*d)%6);
}
