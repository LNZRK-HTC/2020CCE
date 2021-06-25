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

/*
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
*/
