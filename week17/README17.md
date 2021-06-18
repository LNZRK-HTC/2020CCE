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
String Q="hello";
void draw(){//每秒60次
  background(0);
  text("Q: "+Q,100,100);
  text("You:"+line,100,150);
}
void mousePressed(){
  line=line+"a";
}
```
![week17-2](https://user-images.githubusercontent.com/71545492/122503603-539e8180-d02b-11eb-9bff-40cb6eb95c10.png)


```c
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
```
![week17-3](https://user-images.githubusercontent.com/71545492/122503598-50a39100-d02b-11eb-8884-66572bbd6da8.png)

```c
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
  int len = line.length();
  if(key>='a' && key<='z')line =line + key;
  if(key>='A' && key<='Z')line =line + key;
  if(key == BACKSPACE)line = line.substring(0,len-1);
}
```
![week17-4](https://user-images.githubusercontent.com/71545492/122503589-4c777380-d02b-11eb-84b0-e56f7c62413f.png)

```c
void setup(){//設定,只做一次
  size(400,200);
  textSize(40);
}
String line="";
String Q="hello";
void draw(){//每秒60次
  background(0);
  int len = line.length();text(len,100,50);
  text(len ,100 ,50);
  text("Q: "+Q,100,100);
  text("A:"+line,100,150);
}
void keyPressed(){
  int len = line.length();
  if(key>='a' && key<='z')line =line + key;
  if(key>='A' && key<='Z')line =line + key;
  if(key == BACKSPACE && len>0)line = line.substring(0,len-1);
}
```
![week17-5](https://user-images.githubusercontent.com/71545492/122500592-aaa15800-d025-11eb-8c9a-10c39317350f.png)

![week17-5-2](https://user-images.githubusercontent.com/71545492/122503612-5bf6bc80-d02b-11eb-95bd-9be132314552.png)


```c
void setup(){//設定,只做一次
  size(400,200);
  textSize(40);
}
String line="";
String Q="hello";
void draw(){//每秒60次
  background(0);
  text("Score:"+score,100,50);
  text("Q: "+Q,100,100);
  text("A:"+line,100,150);
}
int score=0;
void keyPressed(){
  int len = line.length();
  if(key>='a' && key<='z')line =line + key;
  if(key>='A' && key<='Z')line =line + key;
  if(key == BACKSPACE && len>0)line = line.substring(0,len-1);
  if(key == ENTER){
    if(line.equals(Q)==true){
      score++;
    }else score --;
  }
}
```
![week17-6](https://user-images.githubusercontent.com/71545492/122503550-3bc6fd80-d02b-11eb-98c7-8624472d768b.png)
