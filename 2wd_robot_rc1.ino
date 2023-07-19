#define speedL 5
#define IN1 6
#define IN2 7
#define IN3 8
#define IN4 9
#define speedR 10
char reading ;


 
void setup()
{
  Serial.begin(9600);
    pinMode(IN1, OUTPUT);
    pinMode(IN2, OUTPUT);
    pinMode(IN3, OUTPUT);
	pinMode(IN4, OUTPUT);
 	pinMode(speedL, INPUT);
   	pinMode(speedR, INPUT);

}

void loop()
{
  
  if (Serial.available()>0){
  reading  = Serial.read();
    switch(reading){
    case 'f':
 digitalWrite(IN1, HIGH);
 digitalWrite(IN2, LOW); 
 digitalWrite(IN3, HIGH); 
 digitalWrite(IN4, LOW);
 analogWrite(speedL,159);
 analogWrite(speedR,159);
      break;
      case 'b' :
 digitalWrite(IN1, LOW);
 digitalWrite(IN2, HIGH); 
 digitalWrite(IN3, LOW); 
 digitalWrite(IN4, HIGH);
 analogWrite(speedL,159);
 analogWrite(speedR,159);
      break;
    case 's' :
 digitalWrite(IN1, LOW);
 digitalWrite(IN2, LOW); 
 digitalWrite(IN3, LOW); 
 digitalWrite(IN4, LOW);
 analogWrite(speedL,0);
 analogWrite(speedR,0);
      break;
     case 'r' :
 digitalWrite(IN1, HIGH);
 digitalWrite(IN2, LOW); 
 digitalWrite(IN3, LOW); 
 digitalWrite(IN4, LOW);
 analogWrite(speedL,159);
 analogWrite(speedR,0);
      break;
      case 'l' :
 digitalWrite(IN1, LOW);
 digitalWrite(IN2, LOW); 
 digitalWrite(IN3, HIGH); 
 digitalWrite(IN4, LOW);
 analogWrite(speedL,0);
 analogWrite(speedR,159);
      break;
      
     


        
    }
  }
  
}
