## 第三周正課

int * p = &a[2]; * p=222; p = p + 2; * p = 666;
```c
#include <stdio.h>
int main()
{
    int a[5]={0,10,20,30,40};
    int *p = &a[2];
    *p=222;

    p=p+2;
    *p=666;
    printf("%d %d %d %d %d",a[0],a[1],a[2],a[3],a[4]);
}
```
![image](https://user-images.githubusercontent.com/71545492/111337783-5480e980-86b1-11eb-9448-c4121bc876b4.png)


int * p = &a[2]; * p=222; p = p + 2; * p = 666;
p--; * p=555;
```c
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
            printAll();
    p=p+2;
    *p=666;
            printAll();
    p--;
    *p=555;
    printf("%d %d %d %d %d",a[0],a[1],a[2],a[3],a[4]);
}
```
![image](https://user-images.githubusercontent.com/71545492/111337967-81350100-86b1-11eb-92c6-ab2c758dc211.png)
![image](https://user-images.githubusercontent.com/71545492/111338296-c8bb8d00-86b1-11eb-9125-7950b73b1bf0.png)


把 int * p = &a[2] ; 的 p 心中的值(心裡放住址的小紙條) 印出來給你看 printf("%d\n", p); 
```c
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
```
![image](https://user-images.githubusercontent.com/71545492/111338172-ade91880-86b1-11eb-9036-329813042536.png)


malloc(), 它是什麼呢? 會幫你準備 memory (allocate memory)。  
int * p;  
    p = (int * ) malloc( sizeof(int) * 10 );  
```c
#include <stdio.h>
#include <stdlib.h>
int a[10];
int main()
{
    int b[10];
    int *p=(int*)malloc(sizeof(int)*10);
    return 0;
}
```
![image](https://user-images.githubusercontent.com/71545492/111338595-07514780-86b2-11eb-9e8e-fdd250415983.png)
![image](https://user-images.githubusercontent.com/71545492/111338663-10daaf80-86b2-11eb-9a07-28d99ff3e38e.png)

