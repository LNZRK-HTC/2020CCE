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
