#include <stdio.h>
#include <stdlib.h>//random 亂數
int main()
{
    char face[4][20]={"黑桃","紅心","方塊","梅花"};
    for(int i=0;i<52;i++){
        int f=i/13;
        int num=i%13+1;//0...12==(+1)==>1...13
        printf("%s、%d",face[f],num);
    }
    int n = rand()%52;//c取亂數
    int f = n/13;
    int num = n%13+1;
    printf("%d %s %d\n",n,face[f],num);
    printf("f : %d  num : %d\n",f,num);
}
