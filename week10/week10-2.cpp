#include <stdio.h>
#include <string.h>
int main()
{
	char a[100],b[100];
	scanf("%s%s",&a,&b);
	int lena=strlen(a);//�r��a������
	int lenb=strlen(b);//�r��b������
	if(lena>lenb)printf("1");//a>b
	else if(lena<lenb)printf("-1");//a<b
	else//2�r����׬۵�
	{
		printf("%d",strcmp(a,b));//a>b�L1�Ba<b�L-1�Ba=b�L0
	}
}
