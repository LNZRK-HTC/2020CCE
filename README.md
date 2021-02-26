# 2020CCE.github.io
# 大一下學期程式語言筆記
## 第一週實習課
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
