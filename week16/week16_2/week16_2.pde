void setup(){//設定，只做一次
  size(400,200);
}
void draw(){//畫,每秒60次
  background(57,255,127);//RGB三色
  fill(225);
  ellipse(100,100,180,180);
  fill(225,0,0);
  float stop=mouseX/50.0;
  text(stop,200,100);
  arc(100,100,180,180,0,stop);
}//  畫圓 圓心 寬 高
