#include <stdio.h>
#include <string.h>//strcmp() strcpy()
#include <stdlib.h>//qsort()
char line[1000];
char tree[1000000][32];//step04:�}�Ctree
int compare(const void *p1,const void *p2)
{
    return strcmp((char*)p1,(char*)p2);
}
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

			strcpy(tree[N],line);//step04:��𪺦W�r;���tree[i]
			//printf("%s\n",line);
			N++;//step03:�έp�𪺼ƥ�
		}
		printf("���X�ʾ�?%d\n",N);

		//�Ӿ𪺦W�r�ӱƧ� => �}�C�b����
		qsort(tree,N,32,compare);

		for(int i=0;i<N;i++)
		{
			printf("%s\n",tree[i]);//step04:��tree[i]�L�X��
		}
		printf("========���j�u========\n");
    }
}