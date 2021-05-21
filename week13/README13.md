## 第十三周

```c
size(1024,400);
background(15,162,249);
```
![week13-1](https://user-images.githubusercontent.com/71545492/119076033-6fab0500-ba24-11eb-8efd-cfd8c273cc9e.png)


```c
void setup(){
  size(1024,400);
}
void draw(){
  if(mousePressed)background(15,162,249);
  else background(250,250,180);
}
```
![week13-2-1](https://user-images.githubusercontent.com/71545492/119075740-e72c6480-ba23-11eb-98b3-acd8a7bcee33.png)
![week13-2-2](https://user-images.githubusercontent.com/71545492/119075742-e85d9180-ba23-11eb-9de6-fc3683e4f74a.png)

```c
void setup(){//只做一次設定
  size(1024,400);
}
void draw(){//每秒狂做60次
  if(mousePressed)background(250,250,180);
  else background(15,162,249);
  textSize(50);
  text(a,100,100);
}
int a=0;//外部變數
  void mousePressed(){//按下去時，會呼叫這個函式
    a++;
 }
 ```
![week13-3](https://user-images.githubusercontent.com/71545492/119075829-09be7d80-ba24-11eb-8635-64aeea049cf1.png)


```c
void setup(){//只做一次設定
  size(1024,400);
}
void draw(){//每秒狂做60次
  background(15,162,249);
  textSize(50);
  int h=hour();//小時
  int m=minute();//分鐘
  int s=second();//秒
  text("Now:" + h + ":" + m + ":" + s  , 100,100);
    //  字串    數  字串  數  字串 數字
}
int a=0;//外部變數
  void mousePressed(){//按下去時，會呼叫這個函式
    a++;
 }
```
![week13-4](https://user-images.githubusercontent.com/71545492/119075820-06c38d00-ba24-11eb-95e0-ecd1db7a2e42.png)

