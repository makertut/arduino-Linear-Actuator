byte mspeed=0;
int RPWM = 5;
int LPWM = 6;

void setup() {
  // put your setup code here, to run once:
   Serial.begin(9600);
   pinMode(2, INPUT_PULLUP);
   pinMode(3, INPUT_PULLUP);

   pinMode(RPWM,OUTPUT);
   pinMode(LPWM,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if( digitalRead(2) == LOW & digitalRead(3) == HIGH  ){
    mspeed = 255;
    analogWrite(RPWM,0);
    analogWrite(LPWM, mspeed);
  }
  else if( digitalRead(2) == HIGH & digitalRead(3) == LOW  ){
    mspeed = 255;
    analogWrite(RPWM,mspeed);
    analogWrite(LPWM, 0);
  }
  else{
     analogWrite(RPWM,0);
    analogWrite(LPWM, 0);
  }
 
}
