#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	if(n<=2000)
	printf("%d\n",100);
	else
	printf("%d\n",100+(n-2000+499)/500*5);

}
