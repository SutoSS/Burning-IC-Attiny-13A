#define OK 1 //pin push button Up pada attiny
#define relay 4 //pin relay pada attiny
#define led 0 //pin led pada attiny
int a = 0;

void setup()
{
  pinMode(OK, INPUT_PULLUP);
  pinMode(relay, OUTPUT);
  pinMode(led, OUTPUT); 
}

void loop()
{
  if(digitalRead(OK) == LOW && a==0)
  { 
   delay(50);
   while(digitalRead(OK) == LOW){}
   digitalWrite(relay, HIGH);
   digitalWrite(led, HIGH);
   a=1;
  }
  else if(digitalRead(OK) == LOW && a ==1)
  {
   delay(50);
   while(digitalRead(OK) == LOW){}
   digitalWrite(relay, LOW);
   digitalWrite(led, LOW);
   a=0;
  }
}
