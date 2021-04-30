## 第十周實習課

(SOIT107_ADVANCE_004)   
進階題：最大公因數gcd : 輸入二整數 a b，輸出a b最大公因數 
```c
#include <stdio.h>
int main()
{
	int a,b;
	printf("Enter two integers: \n");
	scanf("%d%d",&a,&b);
	int ans=0;
	for(int i=1;i<=a;i++)
	{
		if(a%i==0&&b%i==0)ans=i;
	}
	printf("The greatest common divisor of %d and %d is %d\n",a,b,ans);
}
```


(SOIT107_ADVANCE_005)   
進階題：字串長度 : 輸入兩個很大的正整數a與 b，  
如果a>b則輸出 1，如果 a<b則輸出 -1,  
如果 a=b 則輸出 0。   
(暗示：可用字串輸入，用字串的觀點來比大小。) 
```c
#include <stdio.h>
#include <string.h>
int main()
{
	char a[100],b[100];
	scanf("%s%s",&a,&b);
	int lena=strlen(a);//字串a的長度
	int lenb=strlen(b);//字串b的長度
	if(lena>lenb)printf("1");//a>b
	else if(lena<lenb)printf("-1");//a<b
	else//2字串長度相等 
	{
		printf("%d",strcmp(a,b));//a>b印1、a<b印-1、a=b印0
	}
}
```

(SOIT107_ADVANCE_008_C_C++) 進階題：函數判斷質數 : 設計一個函數prime(n)，可以判斷n是否為質數：如果是質數則回傳1，否則回傳0。
```c

```

(SOIT107_ADVANCE_010)   
進階題：判斷迴文 : 讀入一個至多80個字的字串，判斷字串是否為迴文  
(即由左而右，由右而左，順序相同，大小寫字母視為相異)。  
如果是迴文則輸出YES，如果不是則輸出NO。
```c
#include <stdio.h>
#include <string.h>
int main()
{
	char a[100];
	scanf("%s",&a);
	
	int i;
	char len=strlen(a);
	for(i=0;i<len/2;i++)
	{
		if(a[i]!=a[len-1-i])break;
	}
	
	if(i==len/2)printf("YES");
	else printf("NO");
}
```

(SOIT107_Base_005)  
基礎題：計算餘數及列印 : 撰寫一個程式，要求使用者輸入兩個數字(變數名稱分別為x,y)  
，再從使用者取得這兩個數字，x為被除數，y為除數，然後印出計算後的餘數(remainder)。  
```c
#include <stdio.h>
int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	printf("Enter two numbers: The remainder is %d\n",a%b);
}
```

(SOIT107_Base_006)  
基礎題：判別正方形 : 撰寫一個程式要求使用者輸入矩形的長與寬，然後讀進這兩個整數。  
假如長與寬相同則印出訊息「It is a square」，否則印出訊息「It is not a square」。  
只能使用本章所學到的單一if敘述式。
```c
#include <stdio.h>
int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	printf("Enter two numbers:");
	if(a==b)
	{
		printf("  It is a square ");
	}
	else
	{
		printf("  It is not a square ");
	}
}
```
(SOIT107_Base_008) 基礎題：將一連串整數相乘 : 請撰寫一個會將一連串整數相乘的程式。  
假定以scanf所讀取的第一個整數，是用於指出接下來要輸入的數值的個數。  
你的程式每執行一次scanf，必須只能讀取一個數值。  
底下是一個輸入列的範例 3 20 50 12 其中3表示後面共有3筆資料要輸入。
```c
#include <stdio.h>
int main()
{
	int n,a[10],ans=1;
	scanf("%d",&n);
	printf("Enter the number of values to be processed: ");
	for(int i=0;i<n;i++)
	{
		printf("Enter a value: ");
		scanf("%d",&a[i]);
		ans*=a[i];
	}
	printf("Product of the %d values is %d",n,ans);
	
}
```

(SOIT107_Base_010)   
基礎題：平年月份的天數 : 輸入一個整數N，輸出平年中N月的天數。
 ```c
 #include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	if( n==1 || n==3 || n==5 || n==7 || n==8 || n==10 || n==12 )
	{
		printf("31");
	}
	else if( n==4 || n==6 || n==9 || n==11)
	{
		printf("30");
	}
	else
	printf("28");
}
 ```
