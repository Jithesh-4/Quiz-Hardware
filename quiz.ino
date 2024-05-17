#include <LiquidCrystal.h>
const int beeps=4;
const int yes =2;
const int no = 3;
int count =0;
int ystatus=0;
int nstatus=0;
// initialize the library by associating any needed LCD interface pin
// with the arduino pin number it is connected to
const int rs = 13, en = 12, d4 = 11, d5 = 10, d6 = 9, d7 = 8;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
long time;
long duration;
int distance;
//String dis;

void setup() {
  // set up the LCD's number of columns and rows:
  pinMode(yes,INPUT);
  pinMode(no,INPUT);
  pinMode(beeps,OUTPUT);
  
  
  lcd.begin(16, 2);
  // Print a message to the LCD.
  lcd.print(" William Goudie ");
  lcd.setCursor(0,1);
  lcd.print(" Quiz Corner    ");
  Serial.begin(9600);
pinMode(trigPin, OUTPUT);
pinMode(echoPin,  INPUT);
delay(2000);

}

void loop() {
  lcd.clear();
  ystatus=digitalRead(yes);
  nstatus=digitalRead(no);
  lcd.setCursor(0,1);
  lcd.print(" Shall we begin?");
  while(ystatus==HIGH)
  {
      ystatus=digitalRead(yes);
  nstatus=digitalRead(no);

    }
  if(ystatus==LOW)
  {
    lcd.clear();
    lcd.setCursor(0,0);

  lcd.print("Lets Start");
  delay(2000);
  }
  lcd.setCursor(0, 0);
  lcd.print("IS THE SUN A    ");
  lcd.setCursor(0, 1);
  lcd.print("STAR ???        ");
  ystatus=digitalRead(yes);
  nstatus=digitalRead(no);
   while((ystatus==HIGH)&&(nstatus==HIGH))
  {
  ystatus=digitalRead(yes);
  nstatus=digitalRead(no);

    }
    if(ystatus==LOW)
    {
      count=count+10;
      beeps();
    }
    if(nstatus==LOW)
    {
      beeps();
    }
   ques();
  lcd.setCursor(0, 0);
  lcd.print("DO PENGUINS FLY?");
  lcd.setCursor(0, 1);
  lcd.print("                ");
  ystatus=digitalRead(yes);
  nstatus=digitalRead(no);
   while((ystatus==HIGH)&&(nstatus==HIGH))
  {
  ystatus=digitalRead(yes);
  nstatus=digitalRead(no);

    }
    if(ystatus==LOW)
    {
            beeps();

    }
    if(nstatus==LOW)
    {
     count=count+10;
           beeps();

    }
    ques1();
    lcd.setCursor(0, 0);
  lcd.print("CAN SQUARE HAS  ");
  lcd.setCursor(0, 1);
  lcd.print("3 SIDES?        ");
  ystatus=digitalRead(yes);
  nstatus=digitalRead(no);
   while((ystatus==HIGH)&&(nstatus==HIGH))
  {
  ystatus=digitalRead(yes);
  nstatus=digitalRead(no);

    }
    if(ystatus==LOW)
    {
      count=count+10;
            beeps();

    }
    if(nstatus==LOW)
    {
      beeps();
      
    }
   ques();
    lcd.setCursor(0, 0);
  lcd.print("IS TOMATO A     ");
  lcd.setCursor(0, 1);
  lcd.print("FRUIT ?         ");
  ystatus=digitalRead(yes);
  nstatus=digitalRead(no);
   while((ystatus==HIGH)&&(nstatus==HIGH))
  {
  ystatus=digitalRead(yes);
  nstatus=digitalRead(no);

    }
    if(ystatus==LOW)
    {
    count=count+10;
      beeps();

    }
    if(nstatus==LOW)
    {
      beeps();

    }
    ques1();
    lcd.setCursor(0, 0);
  lcd.print("CAN YOU SEE AIR ");
  lcd.setCursor(0, 1);
  lcd.print("???             ");
  ystatus=digitalRead(yes);
  nstatus=digitalRead(no);
   while((ystatus==HIGH)&&(nstatus==HIGH))
  {
  ystatus=digitalRead(yes);
  nstatus=digitalRead(no);

    }
    if(ystatus==LOW)
    {
            beeps();

    }
    if(nstatus==LOW)
    {
     count=count+10;
      beeps();

    }
   ques();
    lcd.setCursor(0, 0);
  lcd.print("CAN YOU LIVE    ");
  lcd.setCursor(0, 1);
  lcd.print("WITHOUT SLEEPING");
  ystatus=digitalRead(yes);
  nstatus=digitalRead(no);
   while((ystatus==HIGH)&&(nstatus==HIGH))
  {
  ystatus=digitalRead(yes);
  nstatus=digitalRead(no);

    }
    if(ystatus==LOW)
    {
    count=count+10;
      beeps();

    }
    if(nstatus==LOW)
    {
      beeps();

    }
  delay(2000);


  ques1();
    lcd.setCursor(0, 0);
  lcd.print("IS CHOCOLATE A  ");
  lcd.setCursor(0, 1);
  lcd.print("VEGETABLE ???   ");
  ystatus=digitalRead(yes);
  nstatus=digitalRead(no);
   while((ystatus==HIGH)&&(nstatus==HIGH))
  {
  ystatus=digitalRead(yes);
  nstatus=digitalRead(no);

    }
    if(ystatus==LOW)
    {
     count=count+10;
      beeps();
 
    }
    if(nstatus==LOW)
    {
      beeps();
     
    }
   ques();
    lcd.setCursor(0, 0);
  lcd.print("CAN YOU HEAR    ");
  lcd.setCursor(0, 1);
  lcd.print("SOUND IN SPACE ?");
  ystatus=digitalRead(yes);
  nstatus=digitalRead(no);
   while((ystatus==HIGH)&&(nstatus==HIGH))
  {
  ystatus=digitalRead(yes);
  nstatus=digitalRead(no);

    }
    if(ystatus==LOW)
    {
    count=count+10;
      beeps();

    }
    if(nstatus==LOW)
    {
      beeps();

    }
    ques1();
    lcd.setCursor(0,0);
  lcd.print("Goudie didnot do");
  lcd.setCursor(0,1);
  lcd.print("anySocial Reform");
  ystatus=digitalRead(yes);
  nstatus=digitalRead(no);
   while((ystatus==HIGH)&&(nstatus==HIGH))
  {
  ystatus=digitalRead(yes);
  nstatus=digitalRead(no);

    }
    if(ystatus==LOW)
    {
      beeps();
 
    }
    if(nstatus==LOW)
    {
    count=count+10;
      beeps();

    }
    ques();
    lcd.setCursor(0, 0);
  lcd.print("IS THUNDER      ");
  lcd.setCursor(0, 1);
  lcd.print("HOTTER THAN SUN?");
  ystatus=digitalRead(yes);
  nstatus=digitalRead(no);
   while((ystatus==HIGH)&&(nstatus==HIGH))
  {
  ystatus=digitalRead(yes);
  nstatus=digitalRead(no);

    }
    if(ystatus==LOW)
    {
    count=count+10;
      beeps();

    }
    if(nstatus==LOW)
    {
      beeps();

    }

   ques();
    lcd.setCursor(0, 0);
  lcd.print("IF FIRE A SOLID ");
  lcd.setCursor(0, 1);
  lcd.print("???             ");
  ystatus=digitalRead(yes);
  nstatus=digitalRead(no);
   while((ystatus==HIGH)&&(nstatus==HIGH))
  {
  ystatus=digitalRead(yes);
  nstatus=digitalRead(no);

    }
    if(ystatus==LOW)
    {
    count=count+10;
      beeps();

    }
    if(nstatus==LOW)
    {
      beeps();

    }
   lcd.setCursor(0, 0);
  lcd.print("THANKS FOR THE   ");
  lcd.setCursor(0, 1);
  lcd.print(" RESPONSES       ");
  delay(1000);

  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print(" YOUR SCORE IS      ");
  lcd.setCursor(0, 1);
  lcd.print("..                  ");
  beeps();
  beeps();
  lcd.setCursor(0, 1);
  lcd.print("....                ");
  beeps();
  beeps();
  lcd.setCursor(0, 1);
  lcd.print("......              ");
  beeps();
  beeps();
  lcd.setCursor(0, 1);
  lcd.print("........            ");
  beeps();
  beeps();
  lcd.setCursor(0, 1);
  lcd.print("..........          ");
  beeps();
  beeps();
  lcd.setCursor(0, 1);
  lcd.print("............        ");
  beeps();
  beeps();
  lcd.print("..............      ");
  beeps();
  beeps();

  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print(" CONGRATS YOUR  ");
  lcd.setCursor(0, 1);
  lcd.print("SCORE IS:");
  lcd.setCursor(10, 1);
  lcd.print(count);

  lcd.setCursor(12, 1);
  lcd.print("/100 ");
  
  void ques()
  {
     lcd.setCursor(0,0);
  lcd.print("Good! Let's move");
  lcd.setCursor(0,1);
  lcd.print("to next question");
    delay(2000);
  }
  void ques1()
  {
     lcd.setCursor(0,0);
  lcd.print("Fine! Let me ask");
  lcd.setCursor(0,1);
  lcd.print("you nxt question");
    delay(2000);
  }
  void beeps(){
    digitalWrite(beep,HIGH);
    delay(200);
    digitalWrite(beep,LOW);
    delay(200);
    
  }
  
