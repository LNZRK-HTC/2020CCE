## 第四周實習課

(SOIT107_ADVANCE_006)   
進階題：除惡務盡 : 輸入一個字串，將所有字元2去除後輸出。
```c
#include <stdio.h>
int main()
{
	char a[100];
	scanf("%s",&a);//將字串(s)讀入依序放入陣列，最後加'\0'
	int i=0;
	while(a[i]!='\0')
	{
		if(a[i]!='2')
		printf("%c",a[i]);//字元(c)
		i++;
	}
	printf("\n");
}
```

(SOIT107_ADVANCE_007)   
進階題：擲骰統計 : 輸入一字串為擲骰的結果，統計1到6點出現的狀況。
```c
#include <stdio.h>
int main()
{
	char count[7]={0};
	char a[100];
	scanf("%s",&a);
	int i=0;
	while(a[i]!='\0')
	{
		count[a[i]-'0']++;
		i++;
	}
	for(int i=1;i<=6;i++)
	{
		printf("%d:%d\n",i,count[i]);//第一個%d是點數，第二個%d是次數
	}
}
```

(SOIT107_ADVANCE_009_C_C++)   
進階題：函數找整數的最大數字 : 設計一個函數max_digit(n)，找出組成正整數n中的最大數字，例如：183的最大數字為8。
```c
#include<iostream>
using namespace std;
.....
int main(){
  int n;cin>>n;
  cout<<"["<<max_digit(n)<<"]";
  return 0;
}
/* 上方C++ 的 main 函數 等價於 下方 C 的 main 函數
int main(void){
  int n;
  scanf("%d", &n);
  printf("[%d]", max_digit(n));
  return 0;
}
*/
```
```c
#include<iostream>
using namespace std;
int max_digit(int n)
{
	int max;//紀錄最大值
	max=n%10;//n的個位數
	while(n>0)
	{
		if((n%10)>max)
		max=n%10;
		n/=10;
	}
	return max;
}
int main(){
  int n;cin>>n;
  cout<<"["<<max_digit(n)<<"]";
  return 0;
}
/* 上方C++ 的 main 函數 等價於 下方 C 的 main 函數
int main(void){
  int n;
  scanf("%d", &n);
  printf("[%d]", max_digit(n));
  return 0;
}
*/
```

(SOIT107_ADVANCE_012)   
進階題：星星等腰三角 : 輸入1個正整數n，作為輸出星星三角的層數
```c
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n-i;j++)
		{
			printf(" ");
		}
		for(int k=0;k<i*2-1;k++)
		{
			printf("*");
		}
	printf("\n");
	}
}
```

(SOIT107_Base_007)   
基礎題：分開整數的每個數字 :   
撰寫一個程式，輸入一個五位數的數字，將這個數字分成個別的數字，  
然後分別印出每個數字，數字中間必須相隔3個空格。  
例如，若輸入42139，則程式必須印出： 4 2 1 3 9
```c
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d   %d   %d   %d   %d",n/10000,(n/1000)%10,(n/100)%10,(n/10)%10,(n/1)%10);
}

/*
#include <stdio.h>

#include <string.h>
int main()
{
	char a[100];
	scanf("%c",&a);
	int i=0;
	while(i<(strlen(a)-1))//string(a)取得a字串的長度(有多少字元)
	{
		printf("%C   ",a[i]);
		i++;	
	}
	printf("%c",a[i]);
}
*/
```

(SOIT107_Base_012)  
基礎題：字元判別 : 輸入一個字元，若其為大寫字母則輸出U，若其為小寫字母則輸出L，若其為數字則輸出D，若為其他則輸出O。
```c
#include <stdio.h>
int main()
{
	char a;
	scanf("%c",&a);
	if('A'<=a && a<='Z')
		printf("U");
		
	else if('a'<=a && a<='z')
		printf("L");
		
	else if('0'<=a && a<='9')
		printf("D");
		
	else
		printf("O");
}
```

(SOIT107_Base_015)   
基礎題：數字之首 : 輸入一個整數N，請找出這個數字的首位數。
```c
#include <stdio.h>
int main()
{
	int a[100];
	scanf("%s",&a);
	printf("%c",a[0]);
}
```

(SOIT107_Base_018)   
基礎題：輸出從0到N的偶數 : 輸入一正整數Ｎ後，利用迴圈概念輸出所有0～N內的偶數
```c
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		if(i%2==0)
		{
			printf("%d ",i);
		}
	}
}
```
