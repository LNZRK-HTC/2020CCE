## 第十二周正課

告訴我頻率:不用排序(簡化版)
```c
#include <stdio.h>
char line[2000];
int main()
{
	for(int t=0;gets(line);t++)//step01:input
	{
		int ans[265]={ };//{0,0,0,0,0,0...}
		
		for(int i=0;line[i]!=0;i++)
		{
			char c = line[i];
			ans[c]++;
		}//step03:字串的for迴圈
		
		if(t>0)printf("\n");//車廂 前面掛空白行
	
		for(int i=0;i<256;i++)
		{//step02:output
			if(ans[i]>0)printf("%d %d\n",i,ans[i]);
		}
	}
}
```
![week12-1](https://user-images.githubusercontent.com/71545492/118208446-5d1b5380-b499-11eb-831d-205904f93744.png)

告訴我頻率:有點排序(簡化版)
```c
#include <stdio.h>
char line[2000];
int main()
{
	for(int t=0;gets(line);t++)//step01:input
	{
		int ans[265]={ };//{0,0,0,0,0,0...}
		char   c[256]={ };//{0,1,2,3...}
		for(int i=0;i<256;i++)c[i]=i;
		
		for(int i=0;line[i]!=0;i++)
		{
			char c = line[i];
			ans[c]++;
		}//step03:字串的for迴圈
		for(int i=0;i<256;i++)//左手i //排序
		{
			for(int j=i+1;j<256;j++)
			{//右手j
				if(ans[i]>ans[j])
				{
					int temp=ans[i];//交換ans[]
					ans[i]=ans[j];
					ans[j]=temp;
					char t=c[i];//交換字母
					c[i]=c[j];
					c[j]=t;
				}
			}
		}
		if(t>0)printf("\n");//車廂 前面掛空白行
		for(int i=0;i<256;i++)
		{//step02:output
			if(ans[i]>0)printf("%d %d\n",c[i],ans[i]);
		}
	}
}
```
![week12-2](https://user-images.githubusercontent.com/71545492/118210152-a02af600-b49c-11eb-9bfd-02bfc0ffb7aa.png)

```c
#include <stdio.h>
char line[2000];
int main()
{
	for(int t=0;gets(line);t++)//step01:input
	{
		int ans[265]={ };//{0,0,0,0,0,0...}
		char   c[256]={ };//{0,1,2,3...}
		for(int i=0;i<256;i++)c[i]=i;
		
		for(int i=0;line[i]!=0;i++)
		{
			char c = line[i];
			ans[c]++;
		}//step03:字串的for迴圈
		for(int i=0;i<256;i++)//左手i //排序
		{
			for(int j=i+1;j<256;j++)
			{//右手j
				if(ans[i]>ans[j])
				{
					int temp=ans[i];//交換ans[]
					ans[i]=ans[j];
					ans[j]=temp;
					char t=c[i];//交換字母
					c[i]=c[j];
					c[j]=t;
				}
				if(ans[i]==ans[j] && c[i]<c[j])
				{
					int temp=ans[i];//交換ans[]
					ans[i]=ans[j];
					ans[j]=temp;
					char t=c[i];//交換字母
					c[i]=c[j];
					c[j]=t;
				}
			}
		}
		if(t>0)printf("\n");//車廂 前面掛空白行
		for(int i=0;i<256;i++)
		{//step02:output
			if(ans[i]>0)printf("%d %d\n",c[i],ans[i]);
		}
	}
}
```
![week12-3](https://user-images.githubusercontent.com/71545492/118211462-b639b600-b49e-11eb-8e13-d7b9af89a7cb.png)


```c
#include <stdio.h>
int a[100];
int main()
{
	int T;//step01:input有幾筆
	scanf("%d",&T);
	for(int t=0;t<T;t++)
	{
		int N;
		scanf("%d",&N);
		for(int i=0;i<N;i++)//step02:input到陣列a[i]
		{
			scanf("%d",&a[i]);
		}
		int ans=0;
		
		//step03:output
		printf("Optimal train swapping takes %d swaps.\n",ans);
	}
}
```
![week12-4](https://user-images.githubusercontent.com/71545492/118214679-c2c00d80-b4a2-11eb-86e8-f13e08280a54.png)


```c
#include <stdio.h>
int a[100];
int main()
{
	int T;//step01:input有幾筆
	scanf("%d",&T);
	for(int t=0;t<T;t++)
	{
		int N;
		scanf("%d",&N);
		for(int i=0;i<N;i++)//step02:input到陣列a[i]
		{
			scanf("%d",&a[i]);
		}
		int ans=0;
		
		for(int k=0;k<N-1;k++)
		{
			for(int i=0;i<N-1;i++)
			{
				if(a[i]>a[i+1])
				{
					int temp=a[i];
					a[i]=a[i+1];
					a[i+1]=temp;
					ans++;//又做了一次交換swap
				}
			}
		}
		
		//step03:output
		printf("Optimal train swapping takes %d swaps.\n",ans);
	}
}
```
![week12-5](https://user-images.githubusercontent.com/71545492/118215736-b6d54b00-b4a4-11eb-84da-a40a109cc4cc.png)
