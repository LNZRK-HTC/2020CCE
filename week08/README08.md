## 第八周正課

字串排列
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

另一種寫法
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

CPE習題  
(UVA10420) List of Conquests :  
第一種寫法
```c
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char line[2000][75];
char other[100];
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
		gets (other);
	}
	
	qsort(line,n,75,compare);
	
	int ans=1;
	for(int i=0;i<n;i++)
	{
		if(strcmp(line[i],line[i+1])==0)ans++;
		else
		{
			printf("%s %d\n",line[i],ans);
			ans=1;
		}
	}
}
```
![week08-4-1](https://user-images.githubusercontent.com/71545492/114963301-05d89200-9e9f-11eb-8673-37a8eff84fd4.png)

第二種寫法
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


```c
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char tree[1000000][35];//怕字串後面\0沒有準備好，會出錯，所以開大點30->35
int compare(const void *p1,const void *p2)
{
	return strcmp((char*)p1,(char*)p2);
}
int main()
{
	int T;//測試資料有幾筆
	scanf("%d\n\n",&T);
	//       會把後面2個跳行吃掉
	int N=0;
	for(int i=0;   ;i++)
	{
		char*now=gets(tree[i]);//一次讀一整行，用gets(),不能用scanf
		if(now==NULL)//讀入失敗
		{
			N=i;
			break;//離開迴圈
		}
		if(strcmp(tree[i],"")==0)//空白行
		{
			N=i;
			break;//離開迴圈
		}
	}
	
	qsort(tree,N,35,compare);
	
	printf("%s ",tree[0]);
	int ans=1;//從1開始數(又有新的1筆囉)
	for(int i=0;i<N-1;i++)
	{
		if(strcmp(tree[i],tree[i+1])!=0)//不同時
		{
			printf("%.4f\n",100*ans/(float)N);
			printf("%s ",tree[i+1]);
			ans=1;//小心，要重新從1開始數(又有新的一筆囉)
		}
		else ans++;//相同時
	}
	printf("%.4f\n",100*ans/(float)N);
}
```
![week08-7](https://user-images.githubusercontent.com/71545492/114969404-e0518580-9eaa-11eb-902c-8dc589dc3b12.png)
