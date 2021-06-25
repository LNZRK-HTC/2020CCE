String []face={"Spade","Heart","Dimand","Club"};
String []Num={"A","2","3","4","5","6","7","8","9","10","J","Q","K"};
void setup(){
size(600,200);
for(int i=0; i<52; i++){
int f = i/13;
int num = i%13+1;
text(face[f]+num, num*40, 50+50*f);
}
}
void drawCard(int i){
int f = i/13, num = i%13;
fill(255); rect(0,0,100,150);
if( f==1 || f==2 ) fill(255,0,0);
else fill(0);
textAlign(CENTER,CENTER);
textSize(20); text( face[f], 50,50);
textSize(40); text( Num[num], 50, 100);
}
void draw(){
drawCard( 13 );
}
