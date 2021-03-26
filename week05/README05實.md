## 第五周實習課

(SOIT106_ADVANCE_001)   
進階題：反序數字 : 輸入1個正整數，將該整數所有數字反序排列後組成一個的新整數，計算出兩者相加的結果。   
數字範圍：整數 1 – 10000
```c
#include <stdio.h>
int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	printf("%d\n",a/b);
}
```

(SOIT106_ADVANCE_008_C)   
進階題：絕對值函數 :   
題目名稱：絕對值函數。  
題目內容：設計一個函數f(n)，會回傳n的絕對值。  
數字範圍：整數1 – 10000  
程式限制：不得使用abs()函數。不得變更已給定的主程式。  
```c
主程式：
int main(void)
{
	int n;
	scanf("%d",&n);
	printf("[%d]",f(n));
	return 0;
}
```
```c
#include <stdio.h>
int f(int n)
{
	if(n<=0)n=0-n;
	return n;
}
int main(void)
{
	int n;
	scanf("%d",&n);
	printf("[%d]",f(n));
	return 0;
}

/*
#include <stdio.h>
int f(int n)
{
	if(n<=0)n-=2*n
	return n;
}
int main(void)
{
	int n;
	scanf("%d",&n);
	printf("[%d]",f(n));
	return 0;
}
*/
```

(SOIT106_BASE_003)   
基礎題：N數之和 : 輸入一個整數N，之後讀入N個整數，請輸出其和。   
數字範圍：N=整數1 – 10，其餘整數1 – 100。
```c
#include <stdio.h>
int main()
{
	int n,a[100];
	scanf("%d",&n);
	int ans=0;
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
		ans += a[i];
	}
	printf("%d",ans);
	printf("\n");
}
```

(SOIT106_BASE_006)   
基礎題：三數極大 : 輸入三個正整數，輸出其最大值。   
數字範圍：整數1 – 100
```c
#include <stdio.h>
int main()
{
	int n,a[100];
	scanf("%d",&n);
	int ans=0;
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
		ans += a[i];
	}
	printf("%d",ans);
	printf("\n");
}
```

(SOIT106_BASE_007)  
基礎題：計算商數 : 輸入兩個整數a，b，輸出a除以b的商。   
數字範圍：整數 1 – 10000  
```c
#include <stdio.h>
int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	printf("%d\n",a/b);
}
```
