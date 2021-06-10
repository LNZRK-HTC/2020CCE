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
