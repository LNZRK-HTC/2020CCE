#include <stdio.h>
#include <string.h>
int main()
{
	char a[100];
	scanf("%s",&a);//a�O�}�C

	int i;
	char len=strlen(a) ;//strlen�i���o�r�����
	for(i=0;i<(len/2);i++)
	{
		if(a[i]!=a[len-1-i])break;
	}

	if(i==(len/2)) printf("YES\n");
	else printf("NO\n");
}
