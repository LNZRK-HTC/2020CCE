## 第十六周正課

```c
void setup(){//設定，只做一次
  size(400,200);
}
void draw(){//畫,每秒60次
  background(57,255,127);//RGB三色
  ellipse(50,50,80,80);
}
```
![week16-1](https://user-images.githubusercontent.com/71545492/121619449-343bad80-ca9b-11eb-89df-f2f5b276f5d2.png)

```c
void setup(){//設定，只做一次
  size(400,200);
}
void draw(){//畫,每秒60次
  background(57,255,127);//RGB三色
  fill(225);
  ellipse(100,100,180,180);
  fill(225,0,0);
  float stop=mouseX/50.0;
  text(stop,200,100);
  arc(100,100,180,180,0,stop);
}//  畫圓 圓心 寬 高
```
![week16-2](https://user-images.githubusercontent.com/71545492/121619293-f2126c00-ca9a-11eb-8c7a-2df59403346e.png)

```c
void setup(){
  size(400,200);
  fill(255,0,0);
  textSize(40);
}
void draw(){
  background(57,255,127);
  arc(100,100,180,180,radians(90),radians(180));
}
```
![week16-3](https://user-images.githubusercontent.com/71545492/121621781-6e0eb300-ca9f-11eb-9517-c7b5274e8783.png)

```c
void setup(){
  size(400,200);
  fill(255,0,0);
  textSize(40);
}
float shift=0;
void draw(){
  background(57,255,127);
  float start = radians(90+shift);
  float stop = radians(180+shift);
  arc(100,100,180,180,start,stop);
  shift+=1;
}
```
![week16-4](https://user-images.githubusercontent.com/71545492/121622985-77008400-caa1-11eb-8330-40ebd14ef9de.png)

```c
void setup(){
  size(400,200);
  fill(255,0,0);
  textSize(40);
}
float shift=0,v=10;//一開始速度10
void draw(){
  background(57,255,127);
  float start = radians(90+shift);
  float stop = radians(180+shift);
  arc(100,100,180,180,start,stop);
  if(v>0.0001){//還有速度時，就轉動
    shift+=v;//轉動的速度
    v = v * 0.99;//速度會慢慢減速
  }
  text(shift,200,100);//印出shift
  text(v,200,150);//印出轉動的速度
}
```
![week16-5](https://user-images.githubusercontent.com/71545492/121624435-1d4d8900-caa4-11eb-8e7f-76e606dff927.png)


```c
void setup(){
  size(400,200);
  fill(255,0,0);
  textSize(40);
}
float shift=0,v=0;//一開始速度0
void mousePressed(){
 // v=random(10);//0...10.0
  v=random(10)+5;//5...15.0
}
void draw(){
  background(57,255,127);
  float start = radians(90+shift);
  float stop = radians(180+shift);
  arc(100,100,180,180,start,stop);
  if(v>0.1){//還有速度時，就轉動
    shift+=v;//轉動的速度
    v = v * 0.99;//速度會慢慢減速
  }
  text(shift,200,100);//印出shift
  text(v,200,150);//印出轉動的速度
}
```
![week16-6](https://user-images.githubusercontent.com/71545492/121626042-40c60300-caa7-11eb-896c-7c209859fbef.png)


```c
void setup(){
  size(400,200);
  fill(255,0,0);
  textSize(40);
}
float shift=0,v=0;//一開始速度0
void mousePressed(){
 // v=random(10);//0...10.0
  v=random(10)+5;//5...15.0
}
void draw(){
  background(57,255,127);
  for(int i=0;i<24;i++){
    if(i%3==0)fill(0);
    if(i%3==1)fill(255);
    if(i%3==2)fill(200,180,0);
    float start = radians(0+shift+i*360/24);
    float stop = radians(360/24+shift+i*360/24);
    arc(100,100,180,180,start,stop);
  }
  if(v>0.1){//還有速度時，就轉動
    shift+=v;//轉動的速度
    v = v * 0.99;//速度會慢慢減速
  }
  text(shift,200,100);//印出shift
  text(v,200,150);//印出轉動的速度
}
```
![week16-7](https://user-images.githubusercontent.com/71545492/121627970-f2b2fe80-caaa-11eb-91be-446ffe4dbb5a.png)
