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

