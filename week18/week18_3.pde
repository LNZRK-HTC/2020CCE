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
