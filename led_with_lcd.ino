
  #include <LiquidCrystal.h>
const int rs = 8, en = 9, d4 = 10, d5 = 11, d6 = 12, d7 = 13;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
int a=0;
void setup() 
{
  
    lcd.begin(16, 2);
    lcd.clear();
     lcd.setCursor(0, 0);  
       lcd.print("visiter count");
     lcd.setCursor(0, 1);
       lcd.print("monitoring system");
       delay(2000);

  pinMode(2,INPUT);
  pinMode(3,INPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
}

void loop() 
{
  


  if(digitalRead(2))
  {
    a++;
    delay(500);
  }
  if(digitalRead(3))
  {
    a--;
    delay(500);
  }
  
  lcd.clear();
     lcd.setCursor(0, 0);  
       lcd.print("a:");
       lcd.print(a);
       delay(500);
  

  if(a>0 && a<5){
    digitalWrite(4,HIGH);
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
    digitalWrite(7,LOW);
  
  }
  else if(a>5 && a<10){
    digitalWrite(4,HIGH);
    digitalWrite(5,HIGH);
    digitalWrite(6,LOW);
    digitalWrite(7,LOW);
  
  }
  else if(a>10 && a<15){
    digitalWrite(4,HIGH);
    digitalWrite(5,HIGH);
    digitalWrite(6,HIGH);
    digitalWrite(7,LOW);
  }
  else if(a>15 && a<20){
    digitalWrite(4,HIGH);
    digitalWrite(5,HIGH);
    digitalWrite(6,HIGH);
    digitalWrite(7,HIGH);

  }
  else{
    digitalWrite(4,LOW);
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
    digitalWrite(7,LOW);
  }

}






