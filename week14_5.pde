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
