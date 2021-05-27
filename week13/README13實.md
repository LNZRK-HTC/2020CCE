

(SOIT108_Advance_004) 進階題：  
求11 +22+33+…+nn。:題目內容：請計算11+22+33+…+nn的值。數字範圍：整數1-9。
```c
#include <stdio.h>
int main()
{
	int n,ans=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)```c
    
    ```
	{
		ans+=i*10+i;
	}
	printf("%d",ans);
}
```

(SOIT108_Advance_006_C_CPP)   
進階題：求兩數之最大公因數 : 輸入a, b兩數，請用函數式設計，求兩數之最大公因數，a ,b > 0。
```c
#include<iostream>
using namespace std;
int GCD(int a, int b){
  .....
}
int main(){
  int a,b;cin>>a>>b;
  cout<<GCD(a,b)<<endl;
  return 0;
}
```
```c
#include<iostream>
using namespace std;
int GCD(int a, int b){
  int x,ans=1;
  if(a<b)x=a;
  else 	 x=b;
  for(int i=2;i<x;i++)
  {
  	if(a%i==0 && b%i==0)ans=i;
  }
  return ans;
}
int main(){
  int a,b;cin>>a>>b;
  cout<<GCD(a,b)<<endl;
  return 0;
}
```
(SOIT108_Advance_007)   
進階題：區間測速-超速之王 :   
題目內容：龜山區萬壽路1段裝設區間測速器，長度1.2公里，量得10輛車通過的秒數(輸入10個整數)，  
請輸出第幾輛車最快的，並把它的時速印出來(只印整數部分，小數部分無條件捨去)。  
(時速的單位是每小時幾公里( km/hour)。1小時有60分鐘，1分鐘有60秒，輸入的是秒數) 數字範圍：整數1 – 1000
```c
#include <stdio.h>
int main()
{
	int i,a,min,index=1;
	scanf("%d",&min);
	for(i=2;i<=10;i++)
	{
		scanf("%d",&a);
		if(min>a)
		{
			min=a;
			index=i;
		}
	}
	int s=60*60*1.2/min;
	printf("%d %d",index,s);
}
```

(SOIT108_Advance_008)   
進階題：10數排序，從大到小排好 :  
題目內容：輸入10個數字，把它們從大到小排好。數字範圍：整數1 – 100。
```c
#include <stdio.h>
int main()
{
	int a[15],temp;
	for(int i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(int i=0;i<10;i++)
	{
		for(int j=i+1;j<10;j++)
		{
			if(a[i]<a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(int i=0;i<10;i++)
	{
		printf("%d ",a[i]);
	}
}
```

(SOIT108_Base_003)
基礎題：正整數平方總和 : 
題目內容：輸入正整數n，可計算：1 * 1 + 2 * 2+...+n * n之總和的結果。數字範圍：整數1~1000
```c
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int ans=0;
	for(int i=1;i<=n;i++)
	{
		ans+=i*i;
	}
	printf("%d",ans);
}
/*
#include <stdio.h>
int main()
{
	int n,i,sum=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum+=(i*i);
	}
	printf("%d",sum);
}
*/
```

(SOIT108_Base_003A) 進階題：兩數之間的3倍數總和 :   
題目內容：請輸入兩個由小到大的正整數(起始數字與終止數字)，  
可計算出【起始數字】到【中止數字】間所有3的倍數之總和。  
{ex. 3 9 => 3+6+9=18} 數字範圍：整數1~1000 
```c
#include <stdio.h>
int main()
{
	int a,b,ans=0;
	scanf("%d %d",&a,&b);
	for(int i=a;i<=b;i++)
	{
		if(i%3==0)
		ans+=i;
	}
	printf("%d",ans);
}
```
