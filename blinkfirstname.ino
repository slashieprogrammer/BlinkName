int led1 = D7;

void setup() 
{

  pinMode(led1, OUTPUT);

}


void loop() {
  
  // Y:	-.--
  
  digitalWrite(led1, HIGH);
  delay(1000);
  
  digitalWrite(led1, LOW);
  delay(500);
  
  digitalWrite(led1, HIGH);
  delay(500);
  
  digitalWrite(led1, LOW);
  delay(500);
  
   digitalWrite(led1, HIGH);
  delay(1000);
  
  digitalWrite(led1, LOW);
  delay(500);
  
  digitalWrite(led1, HIGH);
  delay(1000);
  
  digitalWrite(led1, LOW);
  delay(500);
  
  //rest
  
  digitalWrite(led1, LOW);
  delay(2000);
  
  // A:.-
  
  digitalWrite(led1, HIGH);
  delay(500);
  
  digitalWrite(led1, LOW);
  delay(500);
  
  digitalWrite(led1, HIGH);
  delay(1000);
  
  digitalWrite(led1, LOW);
  delay(500);
  
   //rest
  
  digitalWrite(led1, LOW);
  delay(2000);
  
  // N: -.
  
  digitalWrite(led1, HIGH);
  delay(1000);
  
  digitalWrite(led1, LOW);
  delay(500);
  
  digitalWrite(led1, HIGH);
  delay(500);
  
  digitalWrite(led1, LOW);
  delay(500);
  
  //rest
  
  digitalWrite(led1, LOW);
  delay(2000);
  
  // G: 	--.
   digitalWrite(led1, HIGH);
  delay(1000);
  
  digitalWrite(led1, LOW);
  delay(500);
  
  digitalWrite(led1, HIGH);
  delay(1000);
  
  digitalWrite(led1, LOW);
  delay(500);
  
  digitalWrite(led1, HIGH);
  delay(500);
  
  digitalWrite(led1, LOW);
  delay(500);
  
   //rest
  
  digitalWrite(led1, LOW);
  delay(2000);


}
