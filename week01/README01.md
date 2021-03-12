## 第一周實習課
基礎題：找零錢 : 假設有50元、5元和1元等3種硬幣，請輸入一個金額，並顯示等同於該金額所需的最少硬幣組合。   
數字範圍：整數1 – 1000
```c
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d=50*%d+5*%d+1*%d\n",n,(n/50),(n%50/5),(n%5/1));
}
```


基礎題：因數個數 : 輸入一個正整數，顯示所有該正整數因數的個數。  
數字範圍：整數1 – 10000。
```c
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int r=0;
	for(int i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			r++;
		}
	}
	printf("%d\n",r);
}
```
基礎題：找倍數 : 連續讀入10個整數(1-1000)，找出所讀入的整數有幾個是3的倍數。  
整數範圍:整數1-1000
```c
#include <stdio.h>
int main()
{
	int a[10];
	int ans=0;
	for(int i=0;i<10;i++)//陣列是從0~9
	{
		scanf("%d",&a[i]);
	}
	for(int j=0;j<10;j++)
	{
		if(a[j]%3==0)
		{
			ans+=1;
		}
		
	}
	printf("%d\n",ans);
}
```
基礎題：整數轉換為等級 : 輸入一個整數，如果所輸入的整數大於或等於90，則輸出A；  
如果輸入的整數小於90但大於或等於80則輸出B，如果小於80但大於或等於60，則輸出C；  
如為其他整數，則輸出F。  
```c
#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n >= 90)printf("A\n");
    else if(n < 90 && n >= 88)printf("B\n");
    else if(n < 80 && n >= 60)printf("C\n");
    else printf("F\n");
}
```
進階題：分式化簡 : 輸入分式的分子及分母(分母不可為0)，將其化簡後的分式輸出。  
數字範圍：整數1 – 10000  
```c
#include <stdio.h>
int main()
{
    int a,n,ans=0;
    scanf("%d%d",&a,&n);
    for(int i=1;i<=a;i++)
    {
        if(a%i==0 && n%i==0)
        {
            ans=i;
        }
    }
    printf("%d %d\n",a/ans,n/ans);
}
```
