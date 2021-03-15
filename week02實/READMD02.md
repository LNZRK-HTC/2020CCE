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
