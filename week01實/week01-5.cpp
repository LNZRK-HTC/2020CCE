#include <stdio.h>
int main()
{
    int a,n,ans=0;
    scanf("%d%d",&a,&n);
    for(int i=1;i<=a;i++)
    {
        if(a%i==0 && n%i==0)
        {
            ans=i;
        }
    }
    printf("%d %d\n",a/ans,n/ans);
}
