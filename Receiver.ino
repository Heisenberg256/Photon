int i=0,y=0;
String val;
void setup() {
  Serial.begin(9600);
}

void loop() {
  int sensorVal = analogRead(A0);
  //Serial.println(sensorVal);
  delay(10);
  if(sensorVal < 500)
  {
     i++;
  }
  else
  {
    y++;
  }
  //Serial.println(sensorVal);
  //Serial.println(i);
  if(i > 60 && i < 80)
  {
    regdigit(1);
    delay(250);
    i=0;
    y=0;
  }
  if (i > 10 && i < 30 && y > 70 && y < 90)
  {
    regdigit(0);
    i=0;
    y=0;
  }
  /*if(y > 120)
    y=0;*/
}

void regdigit(int num)
{
  //Serial.println(num);
  val.concat(String(num));
 Serial.println(val);
}