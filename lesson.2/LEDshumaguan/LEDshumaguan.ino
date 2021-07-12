
int a;

void setup() {
  Serial.begin(9600);
 pinMode(7,OUTPUT);
 pinMode(8,OUTPUT);
 pinMode(9,OUTPUT);
 pinMode(10,OUTPUT);
 pinMode(11,OUTPUT);
 pinMode(12,OUTPUT);
 pinMode(13,OUTPUT);
 while (Serial.read()>=0){}
}

void loop() {
  if(Serial.available()>0)
  {
    a=Serial.available();
    if(a==0)
    {
      digitalWrite(10,HIGH);//共阳极数码管
      digitalWrite(7,LOW);
       digitalWrite(8,LOW);
        digitalWrite(9,LOW);
         digitalWrite(11,LOW);
          digitalWrite(12,LOW);
           digitalWrite(13,LOW);
      }
    if(a==8)
    {
      digitalWrite(10,LOW);
      digitalWrite(7,LOW);
       digitalWrite(8,LOW);
        digitalWrite(9,LOW);
         digitalWrite(11,LOW);
          digitalWrite(12,LOW);
           digitalWrite(13,LOW);
      }
    }

}
