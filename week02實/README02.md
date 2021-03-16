## 第二周實習課

(SOIT106_ADVANCE_003)  
進階題：讀入整數反序列印 :   
設計一個程式，該程式可以連續讀入正整數(輸入0表示結束，至多不超過10個正整數)，  
之後將所輸入的正整數以相反序顯示在畫面上。數字範圍：整數 1 – 1000  
```c
#include <stdio.h>
int main()
{
	int n=0;
	int a[11];
	for(int i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]==0)
			break;
			n++;//計算個數
	}
	for(int i=n-1;i>=0;i--)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
}
```

(SOIT106_ADVANCE_005_C)  
進階題：A的B次方函數 :   
題目名稱：A的B次方函數
題目內容：請撰寫一個函數MYPOWER(A,B)，可以計算A^B結果。
數字範圍：整數 1 – 9。
程式限制：不得使用power()函數。不得變更已給定的主程式。
```c
主程式：
int main(void)
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("[%d]",MYPOWER(a,b));
	return 0;
}
```
```c
#include<stdio.h>
int MYPOWER(int a,int b)
{
	int ans=1;
	for(int i=b;i>=1;i--)
	{
			ans=ans*a;
	}
	return ans;
}

int main(void)
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("[%d]",MYPOWER(a,b));
	return 0;
}



/*#include <staio.h>
int mypower(int a,int b)
{
	int ans=1;
	for(int i=1;i<=b;i--)
	{
			ans=ans*a;
	}
	return ans;
}

int main(void)
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("[%d]",mypower(a,b));
	return 0;
}
*/

/*#include <staio.h>
int mypower(int a,int b)
int main(void)
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("[%d]",mypower(a,b));
	return 0;
}
int mypower(int a,int b)
{
	int ans=1;
	for(int i=1;i<=b;i--)
	{
			ans=ans*a;
	}
	return ans;
}
*/
```

(SOIT106_ADVANCE_006)  
進階題：漸增數列相加 : 輸入正整數n，計算1 * 2 + 2 * 3 + 3 * 4 + … + (n-1) * n之和。  
數字範圍：整數1 – 1000  
```c
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int ans=0;
	for(int i=2;i<=n;i++)
	{
		ans += (i-1)*i;
	}
	printf("%d\n",ans);
}
```

(SOIT107_Base_006)  
基礎題：判別正方形 : 撰寫一個程式要求使用者輸入矩形的長與寬，  
然後讀進這兩個整數。假如長與寬相同則印出訊息「It is a square」，  
否則印出訊息「It is not a square」。只能使用本章所學到的單一if敘述式。  
```c
#include <stdio.h>
int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	printf("Enter two numbers:  ",a,b);
	if(a==b)
	{
		printf("It is a square ");
	}
	else
	{
		printf("It is not a square ");
	}
}
```

(SOIT106_ADVANCE_011)   
進階題：2進位轉10進位 :   
讀入一個0000 ~ 1111的2進位整數(固定4位數)，  
請顯示出對應的10進位數字。數字範圍：0000 – 1111  
```c
#include <stdio.h>
int main()
{
	int n,a;
	scanf("%d",&n);
	a=n%10+((n%100)/10)*2+((n%1000)/100)*4+(n/1000*8);
	printf("%d\n",a);
}
```

(SLJ-Array-015)   
均標與前標計算 : 輸入整數N, 再輸入N個同學的分數,   
計算並且輸出均標(float 小數點後一位數),   
均標是全部學生的平均分數, 再計算並且輸出前標  
(float 小數點後一位數),   
本題的前標是大於或等於均標的同學的平均分數  
```c
#include <stdio.h>
int a[1000];
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int ans=0,sum=0;
	for(int i=0;i<n;i++)
	{
		ans+=a[i];
	}
	float avg;
	avg=(float)ans/n;
	printf("均標:%.1f\n",avg);
	int r = 0;
	for(int i=0;i<n;i++)
	{
		if(a[i]>=avg)
		{
			sum+=a[i];
			r++;
		}
	}
	float top;
	top=(float)sum/r;
	printf("前標:%.1f\n",top);
}
```
