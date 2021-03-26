#include <stdio.h>
int main()
{
	char count[7]={0};
	char a[100];
	scanf("%s",&a);
	int i=0;
	while(a[i]!='\0')
	{
		count[a[i]-'0']++;
		i++;
	}
	for(int i=1;i<=6;i++)
	{
		printf("%d:%d\n",i,count[i]);//第一個%d是點數，第二個%d是次數
	}
}

