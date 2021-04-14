## 第四周正課

struct 結構 (定義/宣告、使用)
```c
#include <stdio.h>

struct POINT {
    float x,y;
};

int main()
{
    struct POINT a;
}
```
![week04-1](https://user-images.githubusercontent.com/71545492/111721008-0844cd80-889a-11eb-80ee-476265fd441b.png)


```c
#include <stdio.h>

struct POINT {
    float x,y;
};

int main()
{
    struct POINT a = {4.1,3.2};
    printf("%f %f\n",a.x,a.y);
}
```
![week04-2](https://user-images.githubusercontent.com/71545492/111722247-712d4500-889c-11eb-9869-a90d1842add5.png)


```c
#include <stdio.h>

struct POINT {
    float x,y;
};

int main()
{
    struct POINT a = {4.1,3.2};
    printf("%f %f\n",a.x,a.y);

    a.x=1;
    a.y=2;
    printf("%f %f\n",a.x,a.y);
}
```
![week04-3](https://user-images.githubusercontent.com/71545492/111722786-7f2f9580-889d-11eb-818e-9c8ca7eeaf0f.png)


```c
#include <stdio.h>
struct DATA{
    int x,y;
}a[3];
struct DATA b={100,200};
int main()
{
    for(int i=0;i<3;i++)
    {
        printf("a[%d]:%d %d\n",i,a[i].x,a[i].y);
    }
    printf("b: %d %d\n",b.x,b.y);

    struct DATA c;
    printf("c: %d  %d   像亂碼\n",c.x,c.y);

    c=b;///較好的寫法:c.x=b.x; c.y=b.y;
    printf("c: %d %d\n",c.x,c.y);
}
```
![week04-4](https://user-images.githubusercontent.com/71545492/111724859-f87cb780-88a0-11eb-8e8e-32cbcf1e9ddc.png)


```c
#include <stdio.h>
struct POINT {
    float x,y,z;
};

struct POINT point[5]={{0,0,0},{1,0,0},{0,1,0},{0,0,1},{1,1,1}};

int main()
{
    struct POINT *p =& point[0];
    printf("%.2f %.2f %.2f\n",p->x,p->y,p->z);

    p++;
    printf("%.2f %.2f %.2f\n",p->x,p->y,p->z);

    p++;
    printf("%.2f %.2f %.2f\n",p->x,p->y,p->z);
}
```
![week04-5](https://user-images.githubusercontent.com/71545492/111728809-9d4ec300-88a8-11eb-8ec1-e70986abea14.png)
