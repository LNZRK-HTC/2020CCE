## 第十五周實習課

(SOIT108_Advance_010) 進階題：億萬富翁 :　　
題目內容：有一個富翁的財產超過一萬億，所以常常搞不清楚財產到底有多少，現在輸入一個整數N表示富翁的財產總額，　　
請您幫他在財產總額上，從後方每三位加一個逗號，方便閱讀。　　
數字範圍：整數N範圍 為 1000000000000 – 999000000000000。
```c
#include <stdio.h>
#include <string.h>
int main()
{
	char a[100];
	scanf("%s",&a);
	for(int i=0;i<strlen(a);i++)
	{
		if((strlen(a)-i)%3==0 && i!=0)printf(",");
		printf("%c",a[i]);
	}
}
```

(SOIT108_Advance_011) 進階題：秒數換算 :  
題目內容：輸入總秒數(介於0~80000 之間的整數)，將其轉換成時:分:秒格式。數字範圍：秒數範圍0~80000  
```c
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	
	int sec=n%60;
	int min=n/60%60;
	int hour=n/(60*60);
	printf("%02d:%02d:%02d",hour,min,sec);
}
```

(SOIT108_Base_010) 基礎題：水杯接水 : 題目內容：有一桶水要分裝到杯子中，  
水桶中的水有N毫升，杯子的容量為M毫升，請問至少需要幾個杯子才能承接水桶裡的水。  
現在輸入N與M，請輸出答案。數字範圍：N為1 – 9999，M為1 –99
```c
#include <stdio.h>
int main()
{
	int n,m;
	scanf("%d %d",&n,&m);
	if(n%m==0)printf("%d",n/m);
	else printf("%d",n/m+1);
}
```

(SOIT108_Base_011) 基礎題：平面兩座標的面積 :   
題目名稱：平面兩座標的面積 (題目修改) (BACIC)   
題目內容：輸入平面兩點座標的四個整數值(x1,y1,x2,y2)，計算並顯示這兩點所圍之面積。  
(EX.輸入(x1,y1,x2,y2)，計算(x1,y1)、(x1,y2)、(x2,y2)、(x2,y1)所圍面積。)   
數字範圍：整數1 –100  
```c
#include <stdio.h>
int main()
{
	int x1,x2,y1,y2;
	scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
	if(x2-x1>0&&y2-y1>0)printf("%d",(x2-x1)*(y2-y1));
	else if(x2-x1<0&&y2-y1<0)printf("%d",(x2-x1)*(y2-y1));
	else printf("%d",-(x2-x1)*(y2-y1));
}

/*
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int x1,x2,y1,y2;
	scanf("%d %d %d %d ",&x1,&y1,&x2,&y2);
	printf("%d",abs(x2-x1)*abs(y2-y1));
}
*/
```

(SOIT108_Base_012) 基礎題：整數向量相加 :   
題目內容：輸入一個整數N，再依序讀入兩筆各有N個整數的向量，輸出此兩筆向量和。  
數字範圍：整數N範圍 1–10；其他整數1–100 Ex. 5 8 4 10 3 8 10 9 4 4 9  
```c
#include <stdio.h>
int main()
{
	int n,a[10],b[10];
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++)
	{
		scanf("%d",&b[i]);
	}
	for(int i=0;i<n;i++)
	{
		printf("%d ",a[i]+b[i]);
	}
}

/*#include <stdio.h>
int main()
{
	int n,a[10],b[10];
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++)
	{
		scanf("%d",&b[i]);
		printf("%d ",a[i]+b[i]);
	}
	
}
*/
```
