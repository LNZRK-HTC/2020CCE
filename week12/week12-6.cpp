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
