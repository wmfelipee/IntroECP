
void setup()
{
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(2, INPUT_PULLUP);
}

void loop()
{
  int i, contador, bit;
  
  if(digitalRead(2) == HIGH){
    for(i = 8; i <= 11; i++){
     digitalWrite(i, HIGH);
     delay(1000);
     digitalWrite(i, LOW);
     delay(1000);
   }
   for(i = 10; i > 8; i--){
     digitalWrite(i, HIGH);
     delay(1000);
     digitalWrite(i, LOW);
     delay(1000);
    }
  }
  else {
    for(contador = 0; contador <= 15; contador++){
      for(bit = 0; bit <= 3; bit++){
        digitalWrite(11 - bit, bitRead(contador, bit));
      }
      delay(1000);
    }
    for(i = 8; i <= 11; i++){
    digitalWrite(i, LOW);
    }
  	delay(1000);
  }
}