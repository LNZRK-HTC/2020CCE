#include <stdio.h>
int main()
{
	int a,b,count=0,j;//count�p���ƪ��Ӽ�
	scanf("%d %d",&a,&b);
	for(int i=a;i<=b;i++)//�]a~b
	{
		for(j=2;j<i;j++)
		{
			if(i%j==0)break;
		}
		if(j==i)//��2�hfor����]���A�N��S���ƥi�H�㰣i
		count++;
	}
	printf("%d",count);
}
