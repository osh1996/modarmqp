

#include <Servo.h>

const int j0Pin=4;
const int j1Pin=5;
const int j2Pin=6;

Servo j0;
Servo j1;
Servo j2;

void setup()
{
  // start serial port at 9600 bps:
  Serial.begin(9600);
  j0.attach(j0Pin,1000,2000);
  j1.attach(j1Pin,1000,2000);
  j2.attach(j2Pin,1000,2000);
//  establishContact();  // send a byte to establish contact until receiver responds
}

void loop()
{
  while (Serial.available() > 0) {

    // look for the next valid integer in the incoming serial stream:
    int val_j0 = Serial.parseInt();
    // do it again:
    int val_j1 = Serial.parseInt();
    // do it again:
    int val_j2 = Serial.parseInt();

    j0.write(val_j0);
    j1.write(val_j1);
    j2.write(val_j2);

    /*
    Serial.println();
    Serial.print(val_j0);
    Serial.print("\t");
    Serial.print(val_j1);
    Serial.print("\t");
    Serial.print(val_j2);
    Serial.print("\t");
    */
    //char* sendStr;
    //sprintf(sendStr, "%d %d %d", red, green, blue);
    //Serial.print(sendStr);
    
  }
}

void establishContact() {
  while (Serial.available() <= 0) {
    Serial.print('A');   // send a capital A
    delay(300);
  }
  
}

