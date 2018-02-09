/*
 Digital Electronics & Circuit Lab02
  Author: Sayed Mohammed Tasmimul Huda
  Khulna Univarsity of Engineering and Technology
*/

#define ip1 2    //input pin1 for circuit
#define ip2 3    // input pin2 fpr circuit

#define LED1 4   //NOT GATE1 OUTPUT FOR NAND GATE
#define LED2 5   //NOT GATE2 OUTPUT FOR NAND GATE

#define LED3 6   //AND GATE1 OUTPUTy FOR NAND GATE
#define LED4 7   //AND  GATE2 OUTPUT FOR NAND GATE

#define LED5 8   //OR GATE1 OUTPUT FOR NAND GATE
#define LED6 9   //OR GATE2 OUTPUT FOR NOR GATE

#define LED7 10  //X-OR GATE1 OUTPUT FOR NOR GATE
#define LED8 11  //X-OR  GATE2 OUTPUT FOR NOR GATE

#define LED9 12  //X-NOR GATE1 OUTPUT FOR NOR GATE
#define LED10 13 //X-NOR GATE2 OUTPUT FOR NOR GATE
 

void setup()
{
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(LED1,INPUT);
  pinMode(LED2,INPUT);
  pinMode(LED3,INPUT);
  pinMode(LED4,INPUT);
  pinMode(LED5,INPUT);
  pinMode(LED6,INPUT);
  pinMode(LED7,INPUT);
  pinMode(LED8,INPUT);
  pinMode(LED9,INPUT);
  pinMode(LED10,INPUT);
  
}

void loop()
{
  Serial.begin(9600);
  delay(100);
  //delay(15000);
  
  int L1=digitalRead(4);
  int L2=digitalRead(5);
  int L3=digitalRead(6);
  int L4=digitalRead(7);
  int L5=digitalRead(8);
  int L6=digitalRead(9);
  int L7=digitalRead(10);
  int L8=digitalRead(11);
  int L9=digitalRead(12);
  int L10=digitalRead(13);
  
  Serial.println(' ');
  Serial.print("input1=0 input2=0");
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  
  Serial.println(' ');
  Serial.print("NOT GATE1: ");
  if(digitalRead(4)==HIGH)
  Serial.print("ON");
  else if(digitalRead(4)==LOW)
  Serial.print("OFF");
  Serial.println(' ');
  Serial.print("AND GATE1: ");
  if(digitalRead(6)==HIGH)
  Serial.print("ON");
  else if(digitalRead(6)==LOW)
  Serial.print("OFF");
  Serial.println(' ');
  Serial.print("OR GATE1: ");
  if(digitalRead(8)==HIGH)
  Serial.print("ON");
  else if(digitalRead(8)==LOW)
    Serial.print("OFF");
  Serial.println(' ');
   Serial.print("X-OR GATE1: ");
  if(digitalRead(10)==HIGH)
  Serial.print("ON");
  else if(digitalRead(10)==LOW)
    Serial.print("OFF"); 
  Serial.println(' ');
  Serial.print("X-NOR GATE1: ");
  if(digitalRead(12)==HIGH)
  Serial.print("ON");
  else if(digitalRead(12)==LOW)
  Serial.print("OFF");
  Serial.println(' ');

  Serial.println(' ');
  Serial.print("NOT GATE2: ");
  if(digitalRead(5)==HIGH)
  Serial.print("ON");
  else if(digitalRead(5)==LOW)
  Serial.print("OFF");
  Serial.println(' ');
  Serial.print("AND GATE2: ");
  if(digitalRead(7)==HIGH)
  Serial.print("ON");
  else if(digitalRead(7)==LOW)
  Serial.print("OFF");
  Serial.println(' ');
  Serial.print("OR GATE2: ");
  if(digitalRead(9)==HIGH)
  Serial.print("ON");
  else if(digitalRead(9)==LOW)
  Serial.print("OFF");
  Serial.println(' ');
 
  Serial.print("X-OR GATE2: ");
  if(digitalRead(11)==HIGH)
  Serial.print("ON");
  else if(digitalRead(11)==LOW)
  Serial.print("OFF");
  Serial.println(' ');
  
  Serial.print("X-NOR GATE2: ");
  if(digitalRead(13)==HIGH)
  Serial.print("ON");
  else if(digitalRead(13)==LOW)
  Serial.print("OFF");
  Serial.println(' ');
  //delay(15000);
  //delay(15000);
  //delay(15000);
  delay(15000);
  delay(1000);

  
  Serial.print("input1=0 input2=1");
  digitalWrite(2,LOW);
  digitalWrite(3,HIGH);
  
  Serial.println(' ');
  Serial.print("NOT GATE1: ");
  if(digitalRead(4)==HIGH)
  Serial.print("ON");
  else if(digitalRead(4)==LOW)
  Serial.print("OFF");
  Serial.println(' ');
  Serial.print("AND GATE1: ");
  if(digitalRead(6)==HIGH)
  Serial.print("ON");
  else if(digitalRead(6)==LOW)
  Serial.print("OFF");
  Serial.println(' ');
  Serial.print("OR GATE1: ");
  if(digitalRead(8)==HIGH)
  Serial.print("ON");
  else if(digitalRead(8)==LOW)
    Serial.print("OFF");
  Serial.println(' ');
   Serial.print("X-OR GATE1: ");
  if(digitalRead(10)==HIGH)
  Serial.print("ON");
  else if(digitalRead(10)==LOW)
    Serial.print("OFF"); 
  Serial.println(' ');
  Serial.print("X-NOR GATE1: ");
  if(digitalRead(12)==HIGH)
  Serial.print("ON");
  else if(digitalRead(12)==LOW)
  Serial.print("OFF");
  Serial.println(' ');

Serial.println(' ');
  Serial.print("NOT GATE2: ");
  if(digitalRead(5)==HIGH)
  Serial.print("ON");
  else if(digitalRead(5)==LOW)
  Serial.print("OFF");
  Serial.println(' ');
  Serial.print("AND GATE2: ");
  if(digitalRead(7)==HIGH)
  Serial.print("ON");
  else if(digitalRead(7)==LOW)
  Serial.print("OFF");
  Serial.println(' ');
  Serial.print("OR GATE2: ");
  if(digitalRead(9)==HIGH)
  Serial.print("ON");
  else if(digitalRead(9)==LOW)
  Serial.print("OFF");
  Serial.println(' ');
 
  Serial.print("X-OR GATE2: ");
  if(digitalRead(11)==HIGH)
  Serial.print("ON");
  else if(digitalRead(11)==LOW)
  Serial.print("OFF");
  Serial.println(' ');
  
  Serial.print("X-NOR GATE2: ");
  if(digitalRead(13)==HIGH)
  Serial.print("ON");
  else if(digitalRead(13)==LOW)
  Serial.print("OFF");
  Serial.println(' ');
  delay(15000);
  //delay(15000);
  //delay(15000);
  delay(15000);

 Serial.print("input1=1 input2=0");
 digitalWrite(2,HIGH);
 digitalWrite(3,LOW);
 
 Serial.println(' ');
  Serial.print("NOT GATE1: ");
  if(digitalRead(4)==HIGH)
  Serial.print("ON");
  else if(digitalRead(4)==LOW)
  Serial.print("OFF");
  Serial.println(' ');
  Serial.print("AND GATE1: ");
  if(digitalRead(6)==HIGH)
  Serial.print("ON");
  else if(digitalRead(6)==LOW)
  Serial.print("OFF");
  Serial.println(' ');
  Serial.print("OR GATE1: ");
  if(digitalRead(8)==HIGH)
  Serial.print("ON");
  else if(digitalRead(8)==LOW)
    Serial.print("OFF");
  Serial.println(' ');
   Serial.print("X-OR GATE1: ");
  if(digitalRead(10)==HIGH)
  Serial.print("ON");
  else if(digitalRead(10)==LOW)
    Serial.print("OFF"); 
  Serial.println(' ');
  Serial.print("X-NOR GATE1: ");
  if(digitalRead(12)==HIGH)
  Serial.print("ON");
  else if(digitalRead(12)==LOW)
  Serial.print("OFF");
  Serial.println(' ');

Serial.println(' ');
  Serial.print("NOT GATE2: ");
  if(digitalRead(5)==HIGH)
  Serial.print("ON");
  else if(digitalRead(5)==LOW)
  Serial.print("OFF");
  Serial.println(' ');
  Serial.print("AND GATE2: ");
  if(digitalRead(7)==HIGH)
  Serial.print("ON");
  else if(digitalRead(7)==LOW)
  Serial.print("OFF");
  Serial.println(' ');
  Serial.print("OR GATE2: ");
  if(digitalRead(9)==HIGH)
  Serial.print("ON");
  else if(digitalRead(9)==LOW)
  Serial.print("OFF");
  Serial.println(' ');
 
  Serial.print("X-OR GATE2: ");
  if(digitalRead(11)==HIGH)
  Serial.print("ON");
  else if(digitalRead(11)==LOW)
  Serial.print("OFF");
  Serial.println(' ');
  
  Serial.print("X-NOR GATE2: ");
  if(digitalRead(13)==HIGH)
  Serial.print("ON");
  else if(digitalRead(13)==LOW)
  Serial.print("OFF");
  Serial.println(' ');
  delay(15000);
  //delay(15000);
  //delay(15000);
  delay(15000);
  //delay(100);

  Serial.print("input1=1 input2=1");
  digitalWrite(2,HIGH);
  digitalWrite(3,HIGH);
  
  Serial.println(' ');
  Serial.print("NOT GATE1: ");
  if(digitalRead(4)==HIGH)
  Serial.print("ON");
  else if(digitalRead(4)==LOW)
  Serial.print("OFF");
  Serial.println(' ');
  Serial.print("AND GATE1: ");
  if(digitalRead(6)==HIGH)
  Serial.print("ON");
  else if(digitalRead(6)==LOW)
  Serial.print("OFF");
  Serial.println(' ');
  Serial.print("OR GATE1: ");
  if(digitalRead(8)==HIGH)
  Serial.print("ON");
  else if(digitalRead(8)==LOW)
    Serial.print("OFF");
  Serial.println(' ');
   Serial.print("X-OR GATE1: ");
  if(digitalRead(10)==HIGH)
  Serial.print("ON");
  else if(digitalRead(10)==LOW)
    Serial.print("OFF"); 
  Serial.println(' ');
  Serial.print("X-NOR GATE1: ");
  if(digitalRead(12)==HIGH)
  Serial.print("ON");
  else if(digitalRead(12)==LOW)
  Serial.print("OFF");
  Serial.println(' ');

Serial.println(' ');
  Serial.print("NOT GATE2: ");
  if(digitalRead(5)==HIGH)
  Serial.print("ON");
  else if(digitalRead(5)==LOW)
  Serial.print("OFF");
  Serial.println(' ');
  Serial.print("AND GATE2: ");
  if(digitalRead(7)==HIGH)
  Serial.print("ON");
  else if(digitalRead(7)==LOW)
  Serial.print("OFF");
  Serial.println(' ');
  Serial.print("OR GATE2: ");
  if(digitalRead(9)==HIGH)
  Serial.print("ON");
  else if(digitalRead(9)==LOW)
  Serial.print("OFF");
  Serial.println(' ');
 
  Serial.print("X-OR GATE2: ");
  if(digitalRead(11)==HIGH)
  Serial.print("ON");
  else if(digitalRead(11)==LOW)
  Serial.print("OFF");
  Serial.println(' ');
  
  Serial.print("X-NOR GATE2: ");
  if(digitalRead(13)==HIGH)
  Serial.print("ON");
  else if(digitalRead(13)==LOW)
  Serial.print("OFF");
  Serial.println(' ');
  delay(15000);
  delay(15000);
  //delay(15000);
  //delay(15000);
  //delay(100);
}

