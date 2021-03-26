## 第一周正課

指標 * pointer
利用 int * p 來改變 n1變數的值 
```c
#include <stdio.h>
int main()
{
    int n1=10,n2=20,n3=30;
    printf("n1:%d n2:%d n3:%d\n",n1,n2,n3);

    int *p = &n1;
    *p = 200;
    printf("n1:%d n2:%d n3:%d\n",n1,n2,n3);
}
```
![image](https://user-images.githubusercontent.com/71545492/111335650-842ef200-86af-11eb-98cc-3f79d42da2e5.png)


利用 int * p2 來改變 n3 變數的值
```c
#include <stdio.h>
int main()
{
   int n1=10,n2=20,n3=30;
   printf("n1:%d n2:%d n3:%d\n",n1,n2,n3);

   int *p =&n1;
   *p=200;
   printf("n1:%d n2:%d n3:%d\n",n1,n2,n3);
}
```
![image](https://user-images.githubusercontent.com/71545492/111337059-b8ef7900-86b0-11eb-8658-e14aee2b8d07.png)
![image](https://user-images.githubusercontent.com/71545492/111336439-35ce2300-86b0-11eb-8a74-7db4ebae0847.png)

利用 p2=p 讓口袋的address位址換了一張, 所以 * p2=400 就會換到其他地方送400元
```c
#include <stdio.h>
int main()
{
    int n[3]={10,20,30};
    printf("n[0]:%d n[1]:%d n[2]:%d\n",n[0],n[1],n[2]);

    int *p =&n[0];
    *p=200;
    printf("n[0]:%d n[1]:%d n[2]:%d\n",n[0],n[1],n[2]);

    int *p2 =&n[2];
    *p2=300;
    printf("n[0]:%d n[1]:%d n[2]:%d\n",n[0],n[1],n[2]);

    p2 = p;
    *p2=400;
    printf("n[0]:%d n[1]:%d n[2]:%d\n",n[0],n[1],n[2]);
}
```
![image](https://user-images.githubusercontent.com/71545492/111336720-7168ed00-86b0-11eb-8316-ee9f08a74aac.png)
