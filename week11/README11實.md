
(SOIT107_ADVANCE_011) 進階題：字串中的數字個數 :  
讀入一個至多80個字的字串，找出字串中有多少個數字。
```c
#include <stdio.h>
int main()
{
	char line[85];
	scanf("%s",&line);
	
	int ans=0;
	for(int i=0;line[i]!='\0';i++)
	{
		if(line[i]=='0' || line[i]=='1' || line[i]=='2' || line[i]=='3' || line[i]=='4' || line[i]=='5' || line[i]=='6' || line[i]=='7' || line[i]=='8' || line[i]=='9' )
		ans++;
	}
	printf("%d",ans);
}
```

(SOIT107_ADVANCE_013_C_C++)   
進階題：利用自訂函式最大值max與最小值min求出兩者之差 :  
輸入四個正整數後，利用函式判斷最大值與最小值，並輸出最大值減最小值之差
```c
#include<iostream>
using namespace std;
.....
int main(){
  int a,b,c,d;cin>>a>>b>>c>>d;
  cout<<(max(a,b,c,d)-min(a,b,c,d));
  return 0;
}
/* 上方C++ main 函式 等同於 下方 C 的 main 函式
int main(void){
  int a, b, c, d;
  scanf("%d %d %d %d", &a, &b, &c, &d);
  printf("%d",  max(a,b,c,d) - min(a,b,c,d) );
  return 0;
}
*/
```
```c
#include<iostream>
using namespace std;
int max(int a,int b,int c,int d)
{
	if(a>b && a>c && a>d)return a;
	if(b>a && b>c && b>d)return b;
	if(c>a && c>b && c>d)return c;
	if(d>a && d>b && d>c)return d;
}
int min(int a,int b,int c,int d)
{
	if(a<b && a<c && a<d)return a;
	if(b<a && b<c && b<d)return b;
	if(c<a && c<b && c<d)return c;
	if(d<a && d<b && d<c)return d;
}
int main(){
  int a,b,c,d;cin>>a>>b>>c>>d;
  cout<<(max(a,b,c,d)-min(a,b,c,d));
  return 0;
}
/* 上方C++ main 函式 等同於 下方 C 的 main 函式
int main(void){
  int a, b, c, d;
  scanf("%d %d %d %d", &a, &b, &c, &d);
  printf("%d",  max(a,b,c,d) - min(a,b,c,d) );
  return 0;
}
*/

/*
#include<iostream>
using namespace std;
int max(int a,int b,int c,int d)
{
	int x=a//x紀錄最大值
	if(x<b)x=b;
	if(x<c)x=c;
	if(x<d)x=d;
	return x;
}
int min(int a,int b,int c,int d)
{
	int x=a//x紀錄最小值
	if(x>b)x=b;
	if(x>c)x=c;
	if(x>d)x=d;
	return x;
}
int main(){
  int a,b,c,d;cin>>a>>b>>c>>d;
  cout<<(max(a,b,c,d)-min(a,b,c,d));
  return 0;
}
/* 上方C++ main 函式 等同於 下方 C 的 main 函式
int main(void){
  int a, b, c, d;
  scanf("%d %d %d %d", &a, &b, &c, &d);
  printf("%d",  max(a,b,c,d) - min(a,b,c,d) );
  return 0;
}
*/
```

(SOIT107_ADVANCE_014) 進階題：奇數之和 :  
輸入一個整數N，輸出由1至N中間的奇數和。  
```c
#include <stdio.h>
int main()
{
	int n,sum=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		if(i%2==1)//if(i%2!=0)
		sum+=i;
	}
	printf("%d",sum);
}

/*
#include <stdio.h>
int main()
{
	int n,sum=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i+=2)
	{
		sum+=i;
	}
	printf("%d",sum);
}
*/
```

(SOIT107_ADVANCE_015) 進階題：兩數間可被7整除的數 :   
輸入兩個整數，找出兩數之間所有可能被7整除的整數。
```c
#include <stdio.h>
int main()
{
	int a,b;
	scanf("%d %d ",&a,&b);
	for(int i=a;i<=b;i++)
	{
		if(i%7==0)printf("%d ",i);
	}
}
```

(SOIT107_Base_011) 基礎題：整數二元四則運算 :   
輸入兩個整數 a 與 b 及其 中間的四則運算子 c，輸出其運算結果。
```c
#include <stdio.h>
int main()
{
	int a,b;
	char c;
	scanf("%d %c%d ",&a,&c,&b);
	if(c=='+')printf("%d",a+b);
	if(c=='-')printf("%d",a-b);
	if(c=='*')printf("%d",a*b);
	if(c=='/')printf("%d",a/b);
}
```

(SOIT107_Base_013) 基礎題：幾日為星期幾 :   
假設某月的1號為星期日，請讀入日數，並找出對應的星期數  
(週日以0表示，週一以1表示，以此類推，至週六以6表示)。 
```c
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	if(n%7==1)printf("0");
	if(n%7==2)printf("1");
	if(n%7==3)printf("2");
	if(n%7==4)printf("3");
	if(n%7==5)printf("4");
	if(n%7==6)printf("5");
	if(n%7==0)printf("6");
}
```

(SOIT107_Base_014) 基礎題：零錢總額 :   
假設有50元、5元和1元等3種硬幣，請分別輸入三種硬幣的數量  
(分別讀入50元、5元、1元硬幣的數量)，計算出這些硬幣的總額。
```c
#include <stdio.h>
int main()
{
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	printf("%d",50*a+5*b+1*c);
}
```

(SOIT107_Base_016) 基礎題：兩數平方差 :   
讀取兩變數a與b之值，計算出a2-b2之值  
```c
#include <stdio.h>
int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	printf("%d",a*a-b*b);
}
```
