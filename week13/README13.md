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
```
![week13-4](https://user-images.githubusercontent.com/71545492/119077642-3de76d80-ba27-11eb-8a97-d15c584abc3c.png)

```c
void setup(){//只做一次設定
  size(1024,400);
  textFont(createFont("標楷體",50));
}
void draw(){//每秒狂做60次
  background(15,162,249);
  textSize(50);
  int h=hour();//小時
  int m=minute();//分鐘
  int s=second();//秒
  text("Now:" + h + ":" + m + ":" + s  , 100,100);//現在時間
    //  字串    數  字串  數  字串 數字
    int total = h*60*60 + m*60 +s;//總秒數
    text("總秒數:"+total,100,200);
}
```
![week13-5](https://user-images.githubusercontent.com/71545492/119077523-fb259580-ba26-11eb-8745-9bc62b39c41a.png)

```c
void setup(){
  size(1024,400);
  textFont(createFont("標楷體",50));
}
void draw(){
  background(15,162,249);
  textSize(50);
  int h=hour();//小時
  int m=minute();//分鐘
  int s=second();//秒
  text("Now:" + h + ":" + m + ":" + s  , 100,100);//現在時間
    //  字串    數  字串  數  字串 數字
    int total  =  h*60*60 + m*60 +s;//現在時間的總秒數
    int total2 = 12*60*60 + 0*60 +0;//目標時間的總秒數 
    text("總秒數:"+total,100,200);
    int  ans = total2-total;
    int hh = ans/60/60%60 , mm = ans/60%60 , ss = ans%60;
    text("還剩下:" + hh + ":" + mm +":" + ss ,100,300);
}
```
![week13-6](https://user-images.githubusercontent.com/71545492/119078793-75efb000-ba29-11eb-9cc6-ca78ab461589.png)
