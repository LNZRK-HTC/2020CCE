## 第十四周正課

```c
void setup(){//設定 只做一次
  float ans = random(60);//亂數取<60的數
  textSize(30);
  text(ans,0,30);
}
```
![week14-1](https://user-images.githubusercontent.com/71545492/119921479-a773f880-bfa0-11eb-90f0-79c0d9923b94.png)


```c
//Q1:數字有小數點怎麼辦?A:整數無條件捨去
//Q2:沒有互動 A:用mousePressed互動!
void setup(){
  size(300,200);
  textSize(30);
}
int ans=0;
void draw(){//畫圖每秒畫60次 60fps
  background(#2C9CF0);
  //int ans =(int)random(60);//強制轉型casting
  text(ans,30,30);//跳太快了
}
void mousePressed(){
  ans=(int)random(60);
}
```
![week14-2](https://user-images.githubusercontent.com/71545492/119921486-aba01600-bfa0-11eb-92a6-6c47cd3b2126.png)


```c
//int a[]={1,2,3,4,5,6,7,8,9,10};//C,C++
int []a={1,2,3,4,5,6,7,8,9,10};//Java
void setup(){
  size(400,200);
  textSize(30);
}
void draw(){
  background(#2C9CF0);
  for(int i=0;i<10;i++)
  {
    text(a[i],i*40,100);
  }
}
void mousePressed(){
  int i1=(int)random(10);
  int i2=(int)random(10);
  int temp=a[i2]; a[i1]=a[i2]; a[i2]=temp;
}//交換
```
![week14-3](https://user-images.githubusercontent.com/71545492/119921512-b9559b80-bfa0-11eb-98c8-8c5911ce07aa.png)
