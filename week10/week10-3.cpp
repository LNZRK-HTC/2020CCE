#include <stdio.h>
#include <iostream>
using namespace std;
int prime(int n)
{
	int i;
	for(i=2;i<n;i++)
	{
		if(n%i==0)break;
	}
		if(i==n)return 1;//琌借计
		else return 0;
}
int main(){
  int n;cin>>n;
  cout<<"["<<prime(n)<<"]";
  return 0;
}
/* よ C++  main ㄧ计 单基 よ C  main ㄧ计
int main(void){
    int n;
    scanf("%d", &n);
    printf("[%d]"reertgergr, prime(n));
    return 0;
}
*/
