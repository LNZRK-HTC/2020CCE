void setup(){//設定,只做一次
  size(400,200);
  textSize(40);
}
String line="world";
void draw(){//每秒60次
  background(0);
  text("hello",100,100);
  text(line,100,150);
}
