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
/*
#include <stdio.h>
int main()
{
	char line[85];
	scanf("%s",&line);
	int i=0,ans=0;
	while(line[i]!='\0')
	{	
		
		if(line[i]>='0' && line[i]<='9')ans++;
		i++;
	}
	printf("%d",ans);
}

*/
