## 第五周正課

```c
#include <stdio.h>
int main()
{
    char line[10]="decline";
    char line2[10]={'p','r','o','p','e','r','\0'};

    printf("%s\n",line);
    printf("%s\n",line2);
}
```
![week05-1](https://user-images.githubusercontent.com/71545492/112572199-a6014500-8e24-11eb-8858-39fa92632da8.png)


```c
#include <stdio.h>
int main()
{
    char line[10]="decline";
    char line2[10]={'p','r','o','p','e','r','\0'};

    printf("%s\n",line);
    printf("%s\n",line2);

    char line3[]="majority";
    printf("%s\n",line3);
    char line4[]={'m','a','j','o','r','i','t','y'};
    printf("line4:==%s==\n",line4);
}
```
![week05-2](https://user-images.githubusercontent.com/71545492/112572205-aa2d6280-8e24-11eb-9332-4c2e5098fa13.png)


```c
#include <stdio.h>
int main()
{
    char line[5][10]={"decline","proper","majority","bullet","shop"};

    for(int i=0;i<5;i++)
    {
        printf("%s\n",line[i]);
    }
}
```
![week05-3](https://user-images.githubusercontent.com/71545492/112572223-b0234380-8e24-11eb-9f29-b84b3cfa20c7.png)


```c
#include <stdio.h>
int main()
{
    printf("值是:%d\n",'\0');
    printf("值是:%d\n",0);
    printf("他們都一樣，太神奇了!");
}
```
![week05-4](https://user-images.githubusercontent.com/71545492/112572268-c6c99a80-8e24-11eb-9873-28c8e31a7354.png)


```c
#include <stdio.h>
#include <string.h>
int main()
{
    char line[10]="majority";
    char line2[10]="ask";
    if(strcmp(line,line2)>0)
    {
        printf("左邊大\n");

    }
    else
    {
        printf("右邊大\n");
    }

}
```
![week05-5](https://user-images.githubusercontent.com/71545492/112572304-dd6ff180-8e24-11eb-8e67-9c91450daba1.png)


```c
#include <stdio.h>
#include <string.h>
char line[100][10];
int main()
{
	int N;
	scanf("%d",&N);
	for(int i=0;i<N;i++)
	{
		scanf("%s",line[i]);//(1)讀進來
	}

	char temp[10];
	for(int i=0;i<N;i++)
	{
		for(int j=i+1;j<N;j++)
		{
			if(strcmp(line[i],line[j])>0)//(2)大小錯
			{
				strcpy(temp,line[i]);//temp=a;
				strcpy(line[i],line[j]);//a=b;
				strcpy(line[j],temp);//b=temp;
			}//就交換
		}
	}

	for(int i=0;i<N;i++)
	{
		printf("%s\n",line[i]);
	}//(3)印出去

}
```
![week05-6](https://user-images.githubusercontent.com/71545492/112573077-81a66800-8e26-11eb-8c26-49c43d37fcd8.png)
