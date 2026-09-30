int pot;
int pinsensor1 = 32;
int ldr;
int pinsensor2 = 33;

void setup(){

  Serial.begin(115200);
  pinMode(pinsensor1, INPUT);
  pinMode(pinsensor2, INPUT);
  Serial.println(pot);
  Serial.println(ldr);
}

void loop(){
Serial.print("POTENTIO : ");
  pot = analogRead(pinsensor1);
  Serial.println(pot);

Serial.print("LDR : ");
  ldr = analogRead(pinsensor2);
  Serial.println(ldr);
delay(500);
}
