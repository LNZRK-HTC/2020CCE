#include <stdio.h>
#include <string.h>
char line[1000];
int main()
{
    int T;
    scanf("%d\n\n",&T);//step01:讀資料
    for(int t=0;t<T;t++)//step01:讀資料gets()一整行
	{
		int N=0;//我們需要知道,有幾棵樹!!!
		while(gets(line)!=NULL)//step02:讀失敗會變NULL
		{
			if(strcmp(line,"")==0)break;//空行也要離開
			//printf("%s\n",line);
			N++;//step03:統計樹的數目
		}
		printf("有幾棵樹?%d\n",N);
		printf("========分隔線========\n");
	}
}
