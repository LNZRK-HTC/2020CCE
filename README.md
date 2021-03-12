# 2020CCE
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
## 第二週正課
指標(* pointer):利用 int * p 來改變 n1 變數的值，
    int * p2 來改變 n3 變數的值
 ```c
 #include <stdio.h>
int main()
{
    int n1=10,n2=20,n3=30;
    printf("n1:%d n2:%d n3:%d\n",n1,n2,n3);

    int *p =&n1;
    *p=200;
    printf("n1:%d n2:%d n3:%d\n",n1,n2,n3);

}
```
![image](https://user-images.githubusercontent.com/71545492/110059551-643e2b00-7d9f-11eb-9126-62601625c4e9.png)


```c
#include <stdio.h>
int main()
{
    int n[3]={10,20,30};
    printf("n[0]:%d n[1]:%d n[2]:%d\n",n[0],n[1],n[2]);

    int *p =&n[0];
    *p=200;
    printf("n[0]:%d n[1]:%d n[2]:%d\n",n[0],n[1],n[2]);

    int *p2 =&n[2];
    *p2=300;
    printf("n[0]:%d n[1]:%d n[2]:%d\n",n[0],n[1],n[2]);

    p2 = p;
    *p2=400;
    printf("n[0]:%d n[1]:%d n[2]:%d\n",n[0],n[1],n[2]);
}

```
![week02-3](https://user-images.githubusercontent.com/71545492/110062251-e0d30880-7da3-11eb-8666-d44b2a9f70b7.png)

## 第二周實習課
進階題：讀入整數反序列印 : 設計一個程式，該程式可以連續讀入正整數
(輸入0表示結束，至多不超過10個正整數)，
之後將所輸入的正整數以相反序顯示在畫面上。 
數字範圍：整數 1 – 1000  
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


/*#include <stdio.h>
int a[1000];
int main()
{
	int n=0;
	for(int i=1;i<1000;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]==0)
		{
			n=i;
			break;
		}
		
	}
	for(int i=n-1;i>=1;i--)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
}
*/
```
進階題：A的B次方函數 : 
題目名稱：A的B次方函數
題目內容：請撰寫一個函數MYPOWER(A,B)，可以計算A^B結果。
數字範圍：整數 1 – 9。
程式限制：不得使用power()函數。不得變更已給定的主程式。
主程式：
```c
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
```c
進階題：漸增數列相加 : 輸入正整數n，計算1*2+2*3+3*4+…+(n-1)*n之和。 
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
(SOIT107_Base_006) 基礎題：判別正方形 : 
撰寫一個程式要求使用者輸入矩形的長與寬，
然後讀進這兩個整數。假如長與寬相同則印出訊息
「It is a square」，否則印出訊息
「It is not a square」。
只能使用本章所學到的單一if敘述式。
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

進階題：2進位轉10進位 : 讀入一個0000 ~ 1111的2進位整數
(固定4位數)，請顯示出對應的10進位數字。 
數字範圍：0000 – 1111 
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
均標與前標計算 : 輸入整數N, 再輸入N個同學的分數, 
計算並且輸出均標(float 小數點後一位數), 
均標是全部學生的平均分數, 再計算並且輸出前標
(float 小數點後一位數), 本題的前標是大於
或等於均標的同學的平均分數
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
## 第三周正課
```c
#include <stdio.h>
int main()
{
    int a[5]={0,10,20,30,40};
    int *p = &a[2];
    *p=222;

    p=p+2;
    *p=666;
    printf("%d %d %d %d %d",a[0],a[1],a[2],a[3],a[4]);
}
```
![week03-1](https://user-images.githubusercontent.com/71545492/110881697-c22cbe80-831b-11eb-8c54-63a5e0d34a8f.png)
