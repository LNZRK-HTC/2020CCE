#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char line[2000][80];//75字母，後面會有\0為了大一點，改用80
int compare(const void *p1,const void *p2)
{
	return strcmp((char*)p1,(char*)p2);
}
char trash[80];//用來放不重要、要丟掉的東西(後面的字)
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%s",line[i]);
		gets (trash);
	}

	qsort(line,n,80,compare);

	int ans=1;
	printf("%s",line[0]);
	for(int i=0;i<n-1;i++)
	{
		if(strcmp(line[i],line[i+1])!=0)//不相同
		{
			printf(" %d\n",ans);
			printf("%s",line[i+1]);//在印新的那個line
			ans=1;//新的一筆
		}
		else ans++;//相同時，ans++
	}
	printf(" %d\n",ans);
}
