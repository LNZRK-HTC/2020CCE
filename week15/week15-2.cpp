#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);

	int sec=n%60;
	int min=n/60%60;
	int hour=n/(60*60);
	printf("%02d:%02d:%02d",hour,min,sec);
}
