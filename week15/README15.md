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
![week15-2](https://user-images.githubusercontent.com/71545492/120733359-95063b80-c519-11eb-983e-9115142c74b1.png)

```c
//發出聲音，有點難，要用外掛Processing的sound
//這裡叫PDE:Processing Developing Environment
 import ddf.minim.*;
 Minim minim;
 AudioPlayer player;
//tada.mp3檔,也可以拉進來這裡
void setup(){
  size(400,200);
  minim = new Minim(this);
  player = minim.loadFile("tada.mp3");
}
void draw(){
  background(51,114,191);
}
void mousePressed(){
  player.play();
}
```
![WEEK15-3](https://user-images.githubusercontent.com/71545492/120737161-28426f80-c520-11eb-8775-e95caf53f296.png)

```c
import ddf.minim.*;
 Minim minim;
 AudioPlayer player;
//tada.mp3檔,也可以拉進來這裡
void setup(){
  size(400,200);
  minim = new Minim(this);
  player = minim.loadFile("tada.mp3");
}
void draw(){
  background(41,109,207);
  int s = second();
  //text(59-s,100,100);
  text(9-s%10,100,100);
  if(9-s%10 == 0)player.play();
}//0秒的時候，if()會進去60次
```
![week15-4](https://user-images.githubusercontent.com/71545492/120737472-b3bc0080-c520-11eb-8a57-264c56dffe22.png)

```c
import ddf.minim.*;
 Minim minim;
 AudioPlayer player;
void setup(){
  size(400,200);
  minim = new Minim(this);
  player = minim.loadFile("bell.mp3");
}//把bell.mp3放進來
void draw(){
  background(51,114,191);
}
void mousePressed(){//2種:play(),stop()
  if(player.isPlaying()){
    player.pause();
    player.rewind();
  }
  else{
    player.play();
  }
}
```
![image](https://user-images.githubusercontent.com/71545492/120740077-157e6980-c525-11eb-87b5-75297866d4ed.png)


```c
function setup() {
  createCanvas(400,200);
  textSize(40);
}
function draw() {
  background(41,109,207);
  let s = second();
  text(s,100,100);
}
```
![week15-6](https://user-images.githubusercontent.com/71545492/120741997-bae70c80-c528-11eb-9fce-6ed732142093.png)
