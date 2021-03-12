#include <stdio.h>
int a[5]={0,10,20,30,40};
void printAll()
{
    for(int i=0;i<5;i++)printf("%d ",a[i]);
    printf("\n");
}
int main()
{
    printAll();
    int *p = &a[2];
    *p=222;
    printf("p心裡小紙條記的是:%d\n",p);

    printAll();
    p=p+2;
    *p=666;
    printf("p心裡小紙條記的是:%d\n",p);

    printAll();
    p--;
    *p=555;
    printf("p心裡小紙條記的是:%d\n",p);

    printf("%d %d %d %d %d",a[0],a[1],a[2],a[3],a[4]);
}
