#include <Servo.h>

Servo myservo;  
int pos = 0;    
void setup() {
  myservo.attach(9); 
}

void loop() {
  for (pos = 0; pos <= 90; pos += 1) { // Går från 0 grader till 90 grader istället för 180 grader
    // Läggs till med 1 grad
    myservo.write(pos);
    delay(15);                      
  }
  for (pos = 180; pos >= 0; pos -= 1) { // Går från 180 grader till 0 grader
    myservo.write(pos);
    delay(15);                       
  }
}
