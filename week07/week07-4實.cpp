#include <stdio.h>
int f(int a,int b){
	if(b>a)return -1;
	else if(a==b)return 0;
	else return 1;
}
int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d",f(a,b));
    return 0;
}
