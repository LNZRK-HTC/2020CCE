void setup(){//設定,只做一次
  size(400,200);
  textSize(40);
}
String line="";
String Q="hello";
void draw(){//每秒60次
  background(0);
  text("Q: "+Q,100,100);
  text("A:"+line,100,150);
}
void keyPressed(){
  line=line+key;
}
