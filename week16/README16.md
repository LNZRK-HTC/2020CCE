## 第十六周正課

```c
void setup(){//設定，只做一次
  size(400,200);
}
void draw(){//畫,每秒60次
  background(57,255,127);//RGB三色
  ellipse(50,50,80,80);
}
```
![week16-1](https://user-images.githubusercontent.com/71545492/121619282-efb01200-ca9a-11eb-9a48-d7e1e441031b.png)

```c
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
```
![week16-2](https://user-images.githubusercontent.com/71545492/121619293-f2126c00-ca9a-11eb-8c7a-2df59403346e.png)
