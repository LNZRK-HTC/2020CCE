#include <stdio.h>
char line[2000];
int main()
{
	for(int t=0;gets(line);t++)//step01:input
	{
		int ans[265]={ };//{0,0,0,0,0,0...}
		char   c[256]={ };//{0,1,2,3...}
		for(int i=0;i<256;i++)c[i]=i;

		for(int i=0;line[i]!=0;i++)
		{
			char c = line[i];
			ans[c]++;
		}//step03:﹃for癹伴
		for(int i=0;i<256;i++)//オもi //逼
		{
			for(int j=i+1;j<256;j++)
			{//もj
				if(ans[i]>ans[j])
				{
					int temp=ans[i];//ユ传ans[]
					ans[i]=ans[j];
					ans[j]=temp;
					char t=c[i];//ユ传ダ
					c[i]=c[j];
					c[j]=t;
				}
				if(ans[i]==ans[j] && c[i]<c[j])
				{
					int temp=ans[i];//ユ传ans[]
					ans[i]=ans[j];
					ans[j]=temp;
					char t=c[i];//ユ传ダ
					c[i]=c[j];
					c[j]=t;
				}
			}
		}
		if(t>0)printf("\n");//ó碵 玡本フ︽
		for(int i=0;i<256;i++)
		{//step02:output
			if(ans[i]>0)printf("%d %d\n",c[i],ans[i]);
		}
	}
}
