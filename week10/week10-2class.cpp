#include <stdio.h>
#include <string.h>
char line[1000];
int main()
{
    int T;
    scanf("%d\n\n",&T);//step01:Ū���
    for(int t=0;t<T;t++)//step01:Ū���gets()�@���
	{
		int N=0;//�ڭ̻ݭn���D,���X�ʾ�!!!
		while(gets(line)!=NULL)//step02:Ū���ѷ|��NULL
		{
			if(strcmp(line,"")==0)break;//�Ŧ�]�n���}
			//printf("%s\n",line);
			N++;//step03:�έp�𪺼ƥ�
		}
		printf("���X�ʾ�?%d\n",N);
		printf("========���j�u========\n");
	}
}
