#include <MsTimer2.h> 
int a=0;
void fun()
{
 a=0;
}
void onTimer()
{
  int b,c;
  if(a>99)
  {
    a=0;
  }
 if(a>0)
 { b=a%10;
 c=(a/10)%10;
 digitalWrite(5,(b&0x1)); 
 digitalWrite(6,((b>>1)&0x1));
 digitalWrite(7,((b>>2)&0x1));
 digitalWrite(8,((b>>3)&0x1));
 digitalWrite(9,(c&0x1));
 digitalWrite(10,((c>>1)&0x1));
 digitalWrite(11,((c>>2)&0x1));
  digitalWrite(12,((c>>3)&0x1));}
 if(a==0)
 {
  digitalWrite(5,(a&0x1)); 
 digitalWrite(6,((a>>1)&0x1));
 digitalWrite(7,((a>>2)&0x1));
 digitalWrite(8,((a>>3)&0x1));}
   attachInterrupt( digitalPinToInterrupt(2), fun, CHANGE);
  a++;
  } 
 
void setup()
   {
  pinMode(12,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(2,OUTPUT);
 MsTimer2::set(500,onTimer);
 MsTimer2::start(); 
         
}

void loop() {
  
}