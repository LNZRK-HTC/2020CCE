## 第十五周正課

```c
void setup(){//設定  只做一次
  size(400,200);
  textSize(40);//字型大小
}
void draw(){//畫圖,每秒60次
  background(41,109,207);
  int s = second();//秒鐘
  text(s,100,100);
}
```
![week15-1](https://user-images.githubusercontent.com/71545492/120731773-dcd79380-c516-11eb-941b-1b9d1987abb9.png)

```c
//秒數s:0,1,2...59
//      59,58,57...0(幫手)59-s
//============================
//倒數:9,8,7...0
void setup(){//設定  只做一次
  size(400,200);
  textSize(40);//字型大小
}
void draw(){//畫圖,每秒60次
  background(41,109,207);//隨便猜的顏色
  int s = second();//秒鐘
  //text(59-s,100,100);
  text(9-s%10,100,100);
}
//原本:0,1,2,3,4,5,6,7,8,9
//倒數:9,8,7,6,5,4,3,2,1,0
```
![week15-2](https://user-images.githubusercontent.com/71545492/120733292-7607a980-c519-11eb-8ffc-ad7a98a7e8ee.png)
