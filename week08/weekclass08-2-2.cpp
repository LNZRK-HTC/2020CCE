#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char line[2000][80];//75�r���A�᭱�|��\0���F�j�@�I�A���80
int compare(const void *p1,const void *p2)
{
	return strcmp((char*)p1,(char*)p2);
}
char trash[80];//�Ψө񤣭��n�B�n�ᱼ���F��(�᭱���r)
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%s",line[i]);
		gets (trash);
	}

	qsort(line,n,80,compare);

	int ans=1;
	printf("%s",line[0]);
	for(int i=0;i<n-1;i++)
	{
		if(strcmp(line[i],line[i+1])!=0)//���ۦP
		{
			printf(" %d\n",ans);
			printf("%s",line[i+1]);//�b�L�s������line
			ans=1;//�s���@��
		}
		else ans++;//�ۦP�ɡAans++
	}
	printf(" %d\n",ans);
}
