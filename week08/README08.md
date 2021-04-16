## 第八周正課!
```c
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char line[100][10];//100行,10字母
int compare(const void *p1,const void *p2)
{
	char*s1=(char*)p1;
	char*s2=(char*)p2;
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
![week08-1](https://user-images.githubusercontent.com/71545492/114962595-8f876000-9e9d-11eb-917b-f7b4b27c01bf.png)
![week08-2](https://user-images.githubusercontent.com/71545492/114962602-91e9ba00-9e9d-11eb-879c-f952e6db45f7.png)

```c
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
```

![week08-3](https://user-images.githubusercontent.com/71545492/114962645-a6c64d80-9e9d-11eb-9258-63719bf3e381.png)
![week08-4](https://user-images.githubusercontent.com/71545492/114962650-a928a780-9e9d-11eb-807c-f175ecb34b1e.png)

