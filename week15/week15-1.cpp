#include <stdio.h>
#include <string.h>
int main()
{
	char a[100];
	scanf("%s",&a);
	for(int i=0;i<strlen(a);i++)
	{
		if((strlen(a)-i)%3==0 && i!=0)printf(",");
		printf("%c",a[i]);
	}
}
