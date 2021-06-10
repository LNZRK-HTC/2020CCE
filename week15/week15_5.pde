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
