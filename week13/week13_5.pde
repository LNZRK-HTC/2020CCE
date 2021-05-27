void setup(){//只做一次設定
  size(1024,400);
}
void draw(){//每秒狂做60次
  if(mousePressed)background(250,250,180);
  else background(15,162,249);
  textSize(50);
  text(a,100,100);
}
int a=0;//外部變數
  void mousePressed(){//按下去時，會呼叫這個函式
    a++;
 }
