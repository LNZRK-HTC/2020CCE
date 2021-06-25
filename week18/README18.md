## 第十八周

```c
import processing.video.*;//開viedo外掛
//裝好Processing Viedo Library就沒有紅色底線
//import processing.sound.*;//以前教過聲音
//import ddf.minim.*;//有些同學的聲音
Capture cam;//視訊capture//global 全域變數
//AudioPlayer player;//以前
//Minim minim;//以前
void setup(){//設定 只做一次
  size(640,680);//視窗大小
  println(Capture.list());
}//會印出你電腦的全部視訊鏡頭
```
![week18-1](https://user-images.githubusercontent.com/71545492/123358082-6110ba00-d59d-11eb-8ed6-5eacfbf19f45.png)

```c
import processing.video.*;//開viedo外掛
Capture cam;//視訊capture//global 全域變數
void setup(){//設定 只做一次
  size(640,680);//視窗大小
  println(Capture.list());
  cam = new Capture(this,"HD WebCam");//初始化
  cam.start();//開啟webcam
}
void draw(){
  if(cam.available())cam.read();//讀視訊
  set(0,0,cam);
}
```
![week18-2](https://user-images.githubusercontent.com/71545492/123358109-6bcb4f00-d59d-11eb-80d5-a697216ce482.png)

```c
import processing.video.*;//開viedo外掛
Capture cam;//視訊capture//global 全域變數
void setup(){//設定 只做一次
  size(640,680);//視窗大小
  println(Capture.list());
  cam = new Capture(this,"HD WebCam");//初始化
  cam.start();//開啟webcam
}
void draw(){
  if(cam.available()){
  cam.read();//讀視訊
}
  set(0,0,cam);
  //saveFrame();//save("image.png");
}
```

```c
import processing.video.*;//開viedo外掛
Movie movie;
void setup(){
  size(640,680);
                    //檔案可在teams下載
  movie = new Movie(this,"video.mov");
  movie.loop();//movie.play();
}
void draw(){
  if(movie.available()){
  movie.read();//讀視訊
}
  set(0,0,movie);
  //saveFrame();//save("image.png");
}
```
![week18-3](https://user-images.githubusercontent.com/71545492/123362146-cd41ec80-d5a2-11eb-85aa-7686fa73aa91.png)

```c
#include <stdio.h>
#include <stdlib.h>//random 亂數
int main()
{
    char face[4][20]={"黑桃","紅心","方塊","梅花"};
    for(int i=0;i<52;i++){
        int f=i/13;
        int num=i%13+1;//0...12==(+1)==>1...13
        printf("%s、%d",face[f],num);
    }
    int n = rand()%52;//c取亂數
    int f = n/13;
    int num = n%13+1;
    printf("%d %s %d\n",n,face[f],num);
    printf("f : %d  num : %d\n",f,num);
}
```
![week18-4](https://user-images.githubusercontent.com/71545492/123366300-9079f380-d5aa-11eb-81de-3e20544de880.png)
