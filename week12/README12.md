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
