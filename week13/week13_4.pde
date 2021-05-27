void setup(){//只做一次設定
  size(1024,400);
}
void draw(){//每秒狂做60次
  background(15,162,249);
  textSize(50);
  int h=hour();//小時
  int m=minute();//分鐘
  int s=second();//秒
  text("Now:" + h + ":" + m + ":" + s  , 100,100);//現在時間
    //  字串    數  字串  數  字串 數字
}
