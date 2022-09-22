// C++ code
int led1=7;
int buzzer=6;
float temp=A0;
float val;
int gas=A1;
void setup()
{
  pinMode(led1,OUTPUT);
  pinMode(buzzer,OUTPUT);
  pinMode(temp,INPUT);
  pinMode(gas,INPUT);
  Serial.begin(9600);
  
}

void loop()
{
  val=analogRead(temp);
  float mv=(val/1024.0)*5000;
  float cel=mv/10;
  gas=analogRead(A1);
 if((cel>=27)||((gas)==HIGH))
 {
   digitalWrite(led1,HIGH);
   digitalWrite(buzzer,HIGH);
 }
  else
  {
   digitalWrite(led1,HIGH);
   digitalWrite(buzzer,HIGH);
    
  }
  Serial.print("in DegreeC=");
  Serial.print("");
  Serial.print(cel);
  Serial.print("\t");
  
  Serial.print("gas_sensor=");
  Serial.print("");
  Serial.print(gas);
  delay(1000);
  
}