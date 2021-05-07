#include <stdio.h>
#include <stdlib.h>//qsort()
#include <string.h>//strcmp()
char line[2000][80];
char others[80];//用來把後面的資料讀掉
int compare(const void *p1,const void *p2)
{
	char * s1 = (char*) p1;
	char * s2 = (char*) p2;

	int result = strcmp(s1,s2);
	if(result >  0)return  1;
	if(result == 0)return  0;
	if(result <  0)return -1;
}
int main()
{
	int n;//step01:input
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%s",line[i]);
		gets(others);//用來把後面的資料讀掉
	}

	qsort(line,n,80,compare);//排序

	printf("%s",line[0]);//開頭
	int ans=1;//開頭
	for(int i=0;i<n-1;i++)//step02:output
	{
		if(strcmp(line[i],line[i+1])==0)//若2筆相同
		{
			ans++;
		}
		else
		{
			printf(" %d\n",ans);//收尾(前一筆的)
			printf("%s ",line[i+1]);//開頭(下一筆)
			ans=1;
		}
	}
	printf("%d\n",ans);//收尾
}
