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
