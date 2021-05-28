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
  int temp=a[i1]; a[i1]=a[i2]; a[i2]=temp;
}//交換
```
![week14-3](https://user-images.githubusercontent.com/71545492/119924372-09832c80-bfa6-11eb-9fd5-02e6d676e9cc.png)


```c
//int a[]={1,2,3,4,5,6,7,8,9,10...寫到49，這樣寫太長
int []a= new int[49];//Java的陣列宣告好
void setup(){
  size(400,200);
  textSize(30);
  for(int i=0;i<49;i++)
  a[i]=i+1;//人類:1//電腦:0
}
void draw(){
  background(#2C9CF0);
  for(int i=0;i<6;i++){//49只秀6個數
    text(a[i],i*50,100);
  }//大樂透，抽獎時會掉下球，49球挑6球
}
void mousePressed(){
  for(int i=0;i<1000;i++){
    int i1=(int)random(49);
    int i2=(int)random(49);
    int temp=a[i1]; a[i1]=a[i2]; a[i2]=temp;
  }
}//交換
```
![week14-4](https://user-images.githubusercontent.com/71545492/119924343-fec89780-bfa5-11eb-956e-f62aa6fbb923.png)

```c
//int a[]={1,2,3,4,5,6,7,8,9,10...寫到49，這樣寫太長
int []a= new int[49];//Java的陣列宣告好
void setup(){
  size(400,200);
  textSize(30);//電腦0
  for(int i=0;i<49;i++) a[i]=i+1; //人類:1 丟入號碼球
  for(int i=0;i<1000;i++){//大作弊，抽獎
    int i1=(int)random(49);
    int i2=(int)random(49);
    int temp=a[i1]; a[i1]=a[i2]; a[i2]=temp;
  }
}

int N=0;
void draw(){
    background(#2C9CF0);
    for(int i=0;i<N;i++)
    {
      fill(255); ellipse(50+i*50,100,40,40);
      textAlign(CENTER,CENTER);//文字對齊:中,中
      fill(0); text(a[i],50+i*50,100);
    }//大樂透抽獎時，會掉下球，49球挑6球
}

void mousePressed(){
  N++;//其實數字早就決定了，我們只是慢慢印出來，讓人以為你是慢慢抽
}
```
![WEEK14-5](https://user-images.githubusercontent.com/71545492/119928672-a0ec7d80-bfae-11eb-8621-62941da2d1e9.png)
