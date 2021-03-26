#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d   %d   %d   %d   %d",n/10000,(n/1000)%10,(n/100)%10,(n/10)%10,(n/1)%10);
}

/*
#include <stdio.h>

#include <string.h>
int main()
{
	char a[100];
	scanf("%c",&a);
	int i=0;
	while(i<(strlen(a)-1))//string(a)取得a字串的長度(有多少字元)
	{
		printf("%C   ",a[i]);
		i++;
	}
	printf("%c",a[i]);
}
*/

