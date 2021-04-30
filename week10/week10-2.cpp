#include <stdio.h>
#include <string.h>
int main()
{
	char a[100],b[100];
	scanf("%s%s",&a,&b);
	int lena=strlen(a);//字串a的長度
	int lenb=strlen(b);//字串b的長度
	if(lena>lenb)printf("1");//a>b
	else if(lena<lenb)printf("-1");//a<b
	else//2字串長度相等
	{
		printf("%d",strcmp(a,b));//a>b印1、a<b印-1、a=b印0
	}
}
