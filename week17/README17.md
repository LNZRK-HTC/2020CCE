## 第十七周正課

```c
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
```
![week17-1](https://user-images.githubusercontent.com/71545492/122496754-d8cf6980-d01e-11eb-8e59-292d74a70504.png)


```c
void setup(){//設定,只做一次
  size(400,200);
  textSize(40);
}
String line="";
String Q="world";
void draw(){//每秒60次
  background(0);
  text("Q: "+Q,100,100);
  text("You:"+line,100,150);
}
void mousePressed(){
  line=line+"a";
}
```
![week17-2](https://user-images.githubusercontent.com/71545492/122496761-dcfb8700-d01e-11eb-86ac-290721ecbf6e.png)


```c
void setup(){//設定,只做一次
  size(400,200);
  textSize(40);
}
String line="";
String Q="world";
void draw(){//每秒60次
  background(0);
  text("Q: "+Q,100,100);
  text("A:"+line,100,150);
}
void keyPressed(){
  line=line+"key";
}
```
![week17-3](https://user-images.githubusercontent.com/71545492/122496768-dff67780-d01e-11eb-971a-6b9edeab7bfd.png)

```c
void setup(){//設定,只做一次
  size(400,200);
  textSize(40);
}
String line="";
String Q="world";
void draw(){//每秒60次
  background(0);
  text("Q: "+Q,100,100);
  text("A:"+line,100,150);
}
void keyPressed(){
  int len = line.length();
  if(key>='a' && key<='z')line =line + key;
  if(key>='A' && key<='Z')line =line + key;
  if(key == BACKSPACE)line = line.substring(0,len-1);
}
```
