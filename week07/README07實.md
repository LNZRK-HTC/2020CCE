## 第七周實習課

(SOIT106_ADVANCE_007) 進階題：迴文判斷 :   
題目內容：從鍵盤讀入1個4位數的整數(1000-9999)。  
如果該數字構成廻文(即由左而右，由右而左，順序相同)，  
則顯示YES。如果該數字未構成廻文，則顯示NO。
```c
#include <stdio.h>
#include <string.h>
int main()
{
	char a[100];
	scanf("%s",&a);//a是陣列
	
	int i;
	char len=strlen(a) ;//strlen可取得字串長度
	for(i=0;i<(len/2);i++)
	{
		if(a[i]!=a[len-1-i])break;
	}
	
	if(i==(len/2)) printf("YES\n");
	else printf("NO\n");
}
```

(SOIT106_ADVANCE_009) 進階題：函數反序排列數字 :   
設計一個函數f(n)，該函數可以傳回整數n的數字反序排列所組成的整數。   
數字範圍：整數 1 – 9999 (不含10的倍數)  
```c
#include <stdio.h>
void f(int n)
{
	printf("%d",n%10);
	if(n>=10)f(n/10);
	
}

int main()
{
	int n;
	scanf("%d",&n);
	f(n);
	printf("\n");
}
```

(SOIT106_ADVANCE_012) 進階題：陣列找出現次數 :  
讀入一個正整數的數列(逐一輸入正整數，輸入0表示結束，  
數列至多包含10個整數)，之後再讀入一個正整數，  
程式可以找出該整數出現在數列中的次數。   
數字範圍：正整數 1 – 9 
```c
#include <stdio.h>
int main()
{
	int a[11];
	int i;
	for(i=0;i<11;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]==0)break;
	}
	
	int x;
	scanf("%d",&x);//找x在數列中出現的次數
	
	int n=i;//紀錄陣列個數
	int count=0;
	for(i=0;i<n;i++)
	{
		
		if(a[i]==x)count++;
	}
	printf("%d\n",count);
}
```

(SOIT107_ADVANCE_001_C) 進階題：判斷大小 :   
寫一方法能傳入2個整數，如果第一個數字比第二個數字小，  
則回傳-1;如果兩個數字相等，則回傳0;   
如果第一個數字比第二個數字大，則回傳1。印出比較後的結果。
```c
#include <stdio.h>
int f(int a,int b){
.....
}
int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d",f(a,b));
    return 0;
}
```
```c
#include <stdio.h>
int f(int a,int b){
	if(b>a)return -1;
	else if(a==b)return 0;
	else return 1;
}
int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d",f(a,b));
    return 0;
}
```

(SOIT107_ADVANCE_003) 進階題：計算一列整數的總和 :  
請撰寫一個程式計算並印出數個整數的加總。假設以999當成警示值。
```c
#include <stdio.h>
int main()
{
	int a;
	int sum=0;
	while(a!=999)//999是終止條件
	{
		printf("Enter an integer ( 999 to end ): \n");
		scanf("%d",&a);//a=999
		sum+=a;
	}
	printf("The total is: %d",sum-999);
}
```

(SOIT107_Base_003) 基礎題：計算餘數 : 輸入兩個整數a b，輸出a除以b的餘數  
```c
#include <stdio.h>
int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	printf("%d",a%b);
}
```

(SOIT107_Base_004) 基礎題：整數轉換等級 :  
輸入一個整數成嫧，如果所輸入的整數大於或等於90，則輸出A;   
如果輸入的整數小於90但大於等於80，則輸出B;  
如果小於80但大於或等於70，則輸出C;  
如果小於70但大於或等於60，則輸出D;如為其他整數則輸出F。 
```c
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	if(n>=90)printf("A");
	else if(90>n&&n>=80)printf("B");
	else if(80>n&&n>=70)printf("C");
	else if(70>n&&n>=60)printf("D");
	else printf("F");
}
```

(SOIT107_Base_002) 基礎題：計程車資計算 :  
輸入里程公尺數，輸出應付的車資。計程車資計算方式為:   
起跳100元(1500公尺)，續跳5元(每250公尺)註:不足250公尺也要5元。
```c
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	if(n<=1500)printf("100");
	else if(n>1500)printf("%d",100+(n-1500+249)/250*5);
}
```

(SOIT107_Base_001) 基礎題：找零錢 :   
假設有50元、10元、5元和1元等4種硬幣，  
請輸入一個金額，並顯示等同於該金額所需的最少硬幣組合。 
```c
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d=50*%d+10*%d+5*%d+1*%d",n,n/50,(n%50)/10,(n%10)/5,(n%5)/1);
}
```
