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