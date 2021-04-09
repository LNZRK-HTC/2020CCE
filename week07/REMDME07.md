## 第七周正課


老師的參考網址:https://hackmd.io/@jsyeh/ctutor  
字串排列第二種寫法(第一種詳情請見第五周，下方也有附)
```c
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char line[100][10];
char temp[10];

int compare(const void * p1,const void *p2)
{
	char * s1 = (char*)p1;
	char * s2 = (char*)p2;
	return strcmp(s1,s2);
}
int main()
{
	int n;
	scanf("%d",&n);
	
	for(int i=0;i<n;i++)
	{
		scanf("%s",line[i]);
	}
	
	qsort(line,n,10,compare);
	
	for(int i=0;i<n;i++)
	{
		printf("%s\n",line[i]);
	}
}
```
![week07-2](https://user-images.githubusercontent.com/71545492/114123065-24c9a800-9924-11eb-9018-9c6b332fbd9c.png)


```c
#include <stdio.h>
#include <string.h>
char line[100][10];
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%s",line[i]);
	}
	
	char temp[10];
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(strcmp(line[i],line[j])>0)
			{
				strcpy(temp,line[i]);
				strcpy(line[i],line[j]);
				strcpy(line[j],temp);
			}
		}
	}
	for(int i=0;i<n;i++)
	{
		printf("%s\n",line[i]);
	}
} 
```
![week05-1](https://user-images.githubusercontent.com/71545492/114123213-72deab80-9924-11eb-9b47-171231429ab6.png)
