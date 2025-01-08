#define LED D4
#define button D6 
int temp=0;// temporary variable to check whether button is pressed or not 
const int buttonPin=13;
const int pushPin=2;
void setup()
{
  pinMode(LED_BUILTIN,OUTPUT);
  pinMode(pushPin,INPUT);
}

void loop()
{
  temp=digitalRead(pushPin);
  if (temp==HIGH)
  {
   digitalWrite(LED_BUILTIN,HIGH);
   delay(1000);
  }
  else
  {
    digitalWrite(LED_BUILTIN,LOW);
    delay(1000);
}
}