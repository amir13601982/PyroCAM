
bool rec = false;

void setup() {
Serial.begin (500000);
 delay(1000);
}

void loop() {
  
  switch (Serial.read()) {  // Once receives "f" start sending data to GUI, stop sending once receives "s"
    case 'f':
      rec = true; 
      break;

    case 's':
      rec = false; 
      break;
  }
  if (rec == true)
  {
    int a = analogRead(A0);
     delay(20);
     int b = analogRead(A1);
      delay(20);
    Serial.print ("a$"); // print a$
  if (a < 1000){
    Serial.print ("0");
    Serial.print (a);  
  }else if (a < 100){
    Serial.print ("00");
    Serial.print (a);
   
  }  
  else {
    Serial.print (a);
   
  }
  if (b < 1000){
    Serial.print ("0");
    Serial.print (b);
    Serial.print ("\n");
  }else if (b<100){
     Serial.print ("00");
    Serial.print (b);
     Serial.print ("\n");
  }
  else {
    Serial.print (b);
    Serial.print ("\n");
  }   
    delay(10);
  }
}
