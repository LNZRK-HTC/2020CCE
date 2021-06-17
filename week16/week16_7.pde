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
