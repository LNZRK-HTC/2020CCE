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
void draw(){

}
