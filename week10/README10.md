## 第十周正課

```c
#include <stdio.h>
#include <string.h>
char line[1000];
int main()
{
	int T;
	scanf("%d\n\n",&T);//step01:讀資料
	
	for(int t=0;t<T;t++)//step01:讀資料gets()一整行
	{
		int N=0;
		
		while(gets(line)!=NULL)//step02:讀失敗會變NULL
		{
			if(strcmp(line,"")==0)break;//空行也要離開
			
			printf("%s\n",line);
		}
		printf("========分隔線========\n");
	}
}
```
![week10-1](https://user-images.githubusercontent.com/71545492/116647030-2713a500-a9ac-11eb-8346-df9a6f3cec9f.png)


```c
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
```
![week10-2](https://user-images.githubusercontent.com/71545492/116647035-2a0e9580-a9ac-11eb-99b5-26533126a473.png)


```c
#include <stdio.h>
#include <string.h>//strcmp() strcpy()
#include <stdlib.h>//qsort()
char line[1000];
char tree[1000000][32];//step04:陣列tree
int compare(const void *p1,const void *p2)
{
	return strcmp((char*)p1,(char*)p2);
}
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
			
			strcpy(tree[N],line);//step04:把樹的名字;放到tree[i]
			//printf("%s\n",line);
			N++;//step03:統計樹的數目
		}
		//printf("有幾棵樹?%d\n",N);
		
		//step05:照樹的名字來排序 => step04:陣列在哪裡
		qsort(tree,N,32,compare);//step05:qsort
		
		int ans=1;//新的開始
		printf("%s",tree[0]);
		for(int i=0;i<N;i++)
		{
			if(strcmp(tree[i],tree[i+1])==0)//相同
			{
				ans++;
			}
			else//不相同，收尾+新的開始
			{
				printf("%d\n",ans);//收尾
				ans=1;//新的開始
				printf("%s",tree[i+1]);//新的開始
			}
			
			//printf("%s\n",tree[i]);//step04:把tree[i]印出來
		}
		//printf("========分隔線========\n");
	}
}
```
#include <stdio.h>
#include <string.h>
char line[1000];
char tree[1000000][32];//step04:陣列tree
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
			
			strcpy(tree[N],line);//step04:把樹的名字;放到tree[i]
			//printf("%s\n",line);
			N++;//step03:統計樹的數目
		}
		printf("有幾棵樹?%d\n",N);
		
		//照樹的名字來排序 => 陣列在哪裡
		
		for(int i=0;i<N;i++)
		{
			printf("%s\n",tree[i]);//step04:把tree[i]印出來
		}
		printf("========分隔線========\n");
	}
  
  
  -----------
  
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

-------------
#include <stdio.h>
#include <string.h>
char line[1000];
int main()
{
	int T;
	scanf("%d\n\n",&T);//step01:讀資料
	
	for(int t=0;t<T;t++)//step01:讀資料gets()一整行
	{
		int N=0;
		
		while(gets(line)!=NULL)//step02:讀失敗會變NULL
		{
			if(strcmp(line,"")==0)break;//空行也要離開
			
			printf("%s\n",line);
		}
		printf("========分隔線========\n");
	}
}
---------------
#include <stdio.h>
#include <string.h>//strcmp() strcpy()
#include <stdlib.h>//qsort()
char line[1000];
char tree[1000000][32];//step04:陣列tree
int compare(const void *p1,const void *p2)
{
	return strcmp((char*)p1,(char*)p2);
}
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
			
			strcpy(tree[N],line);//step04:把樹的名字;放到tree[i]
			//printf("%s\n",line);
			N++;//step03:統計樹的數目
		}
		printf("有幾棵樹?%d\n",N);
		
		//照樹的名字來排序 => 陣列在哪裡
		qsort(tree,N,32,compare);
		
		for(int i=0;i<N;i++)
		{
			printf("%s\n",tree[i]);//step04:把tree[i]印出來
		}
		printf("========分隔線========\n");
	}
}
*---------------
#include <stdlib.h>//qsort()
char line[1000];
char tree[1000000][32];//step04:陣列tree
int compare(const void *p1,const void *p2){
	return strcmp((char*)p1,(char*)p2);
}
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
			
			strcpy(tree[N],line);//step04:把樹的名字;放到tree[i]
			//printf("%s\n",line);
			N++;//step03:統計樹的數目
		}
		//printf("有幾棵樹?%d\n",N);
		//step05:照樹的名字來排序 => step04:陣列在哪裡
		qsort(tree,N,32,compare);//step05:qsort
		int ans=1;//新的開始
		printf("%s",tree[0]);
		for(int i=0;i<N;i++)
		{
			if(strcmp(tree[i],tree[i+1])==0){//相同
				ans++;
			}
			else//不相同，收尾+新的開始
			{
				printf("%d\n",ans);//收尾
				ans=1;//新的開始
				printf("%s",tree[i+1]);//新的開始
			}
			//printf("%s\n",tree[i]);//step04:把tree[i]印出來
		}
		printf("========分隔線========\n");
	}
}
