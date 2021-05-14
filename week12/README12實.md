## 第十二周實習課

(SOIT107_ADVANCE_016)   
進階題：數字個數 :   
設計一個程式，該程式可以連續讀入正整數  
(輸入0表示結束，至多不超過10個正整數)，  
之後顯示所輸入正整數的個數。
```c
#include <Stdio.h>
int main()
{
	int a[15],ans=0;
	for(int i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]==0)
		break;
		ans++;
		
	}
	printf("%d",ans);
}

/*
#include <stdio.h>
int main()
{
	int a,ans=0;
	while(scanf("%d",&a)!=EOF)//End of File
	{
		ans++;
	}
	printf("%d",ans-1);//因為最後一個0
}
*/
```

(SOIT107_Base_017)  
基礎題：剩餘啤酒有幾手又幾瓶 :  
假設購買啤酒瓶數有p瓶，喝掉d手（一手六瓶）後，試回答共剩幾手啤酒又幾瓶？
```c
#include <stdio.h>
int main()
{
	int p,d;
	scanf("%d %d",&p,&d);
	printf("%d %d",(p-6*d)/6,(p-6*d)%6);
}
```

(SOIT107_Base_019)   
基礎題：三數最小 : 寫一方法能接受三個正整數，並回傳其最小值
```c
#include <stdio.h>
int fun(int a,int b,int c)
{
	if(a<b&&a<c)return("%d\n",a);
	if(b<a&&b<c)return("%d\n",b);
	if(c<a&&c<b)return("%d\n",c);
}
int main()
{
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	printf("%d\n",fun(a,b,c));
}
```

(SOIT107_Base_020)   
基礎題：計算立方值 : 依序輸入六個整數，輸出六個數的立方值。
```c
#include <stdio.h>
int main()
{
	int a[7];
	for(int i=1;i<=6;i++)
	{
		scanf("%d",&a[i]);
		printf("%d\n",a[i]*a[i]*a[i]);
	}
}
```

(SOIT108_Advance_001)   
進階題：判斷平方數 : 讀入一個1 – 1000000的數字，  
判斷該數字是否為某數字的平方數：  
如果是，則印出該數字為哪個數字的平方數；如果不是，則印出0。
```c
#include <stdio.h>
int main()
{
	int n,ans=0;
	scanf("%d",&n);
	for(int i=1;i<n;i++)
	{
		if(i*i==n)ans=i;
	}
	printf("%d",ans);
}
```

(SOIT108_Advance_002)  
進階題：計算質數個數 :  
從鍵盤讀入2個 2 - 10000的數字，  
請計算出兩數字間(含兩數字，假設第2個數字較大)，有幾數字是質數。
```c
#include <stdio.h>
int main()
{
	int a,b,count=0,j;//count計算質數的個數
	scanf("%d %d",&a,&b);
	for(int i=a;i<=b;i++)//跑a~b
	{
		for(j=2;j<i;j++)
		{
			if(i%j==0)break;
		}
		if(j==i)//第2層for完整跑完，代表沒有數可以整除i
		count++;
	}
	printf("%d",count);
}
```

(SOIT108_Advance_002B)   
進階題：三數組合 : 讀入三個 0 - 9 的數字，將其組合成最大的數字，並計算將該數字加1的結果。  
```c
#include <stdio.h>
int main()
{
	int a[3],i,temp,j;
	for(i=0;i<3;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<3;i++)
	{
		for(j=i+1;j<3;j++)
		{
			if(a[i]<a[j])
			{
				temp=a[j];
				a[j]=a[i];
				a[i]=temp;
			}
		}
	}
	printf("%d",a[0]*100+a[1]*10+a[2]+1);
}
```

(SOIT108_Base_001)   
基礎題：找千位數 : 讀入 1000 - 100000 的數字，找出其千位數的數字
```c
#include <Stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d",n/1000%10);
}
```
