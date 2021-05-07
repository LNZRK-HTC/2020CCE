## 第十一周正課

```c
#include <stdio.h>
#include <stdlib.h>
int a[10]={4,8,3,7,5,2,9,1,6,10};

int compare(const void *p1,const void *p2)
{
    int d1=*(int*)p1;
    int d2=*(int*)p2;
    if(d1 >  d2)return 1;
    if(d1 == d2)return 0;
    if(d1 <  d2)return -1;
}
int main()
{
    qsort(a,10,sizeof(int),compare);
    for(int i=0;i<10;i++)
    {
        printf("%d ",a[i]);
    }
}

```
![week11-1](https://user-images.githubusercontent.com/71545492/117387417-78c3ae80-af1b-11eb-9caa-ffffc6a6d881.png)


```c
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
```
![week11-2](https://user-images.githubusercontent.com/71545492/117387795-1ae39680-af1c-11eb-8238-545f5abc790d.png)

```c
#include <stdio.h>
struct data
{
    int ans;
    char c;
};
struct data box;
int main()
{
    box.ans=1;
    box.c='A';
    printf("%c %d\n",box.c,box.ans);
}
```
![week11-3](https://user-images.githubusercontent.com/71545492/117390817-6a789100-af21-11eb-90a1-02b0f998975b.png)


```c
#include <stdio.h>
typedef struct data
{
    int ans;
    char c;
}DATA;
///struct data box;
DATA box;
int main()
{
    box.ans=1;
    box.c='A';
    printf("%c %d\n",box.c,box.ans);
}
```
![image](https://user-images.githubusercontent.com/71545492/117391487-9b0cfa80-af22-11eb-92a1-47e73843a0d0.png)


```c
#include <stdio.h>
char line[2000];
int main()
{
	//step01:input:一次1整行，很多一整行
	for(int t=0;gets(line);t++)
	{
		
		//step02:output:對應印出來
		if(t>0)printf("\n");
		printf("blahblahblah\n");
		printf("blahblahblah\n");
		printf("blahblahblah\n");
	}
}
```
![week11-5](https://user-images.githubusercontent.com/71545492/117394788-5f296380-af29-11eb-8297-2843ab4390ce.png)


```c
#include <stdio.h>
char line[2000];
int ans[256];//統計有幾個字母 ex.ans[65]=3表示'A'有3次
int main()
{
	//step01:input:一次1整行，很多一整行
	for(int t=0;gets(line);t++)
	{
		for(int i=0;i<256;i++)ans[i]=0;//清乾淨
		
		for(int i=0;line[i]!=0;i++)//step04:字串的迴圈
		{
			char c= line[i];//step04:第i個字母
			ans[c]++;//step04:統計到ans[]裡面
		}
		
		
		//step02:output:對應印出來
		if(t>0)printf("\n");
		for(int i=0;i<256;i++)//step05:真的印出來
		{
			if(ans[i]>0)printf("%d %d\n",i,ans[i]);
		}
	}
}
```
![week11-6](https://user-images.githubusercontent.com/71545492/117394797-62bcea80-af29-11eb-8f3b-798933713910.png)
