

int latch = A1; //pin to latch
int cs = A2; //clockpin
int data = A0; //pin to pass the information
int dPins[4] = {13, 12, A5, A4};  //pins that control the digits, the go in that order, 4-3-2-1

const byte digits[10] = {  //It indicates which pins have to be on and off to display each number
  B00111111,  // 0
  B00000110,  // 1
  B01011011,  // 2
  B01001111,  // 3
  B01100110,  // 4
  B01101101,  // 5
  B01111101,  // 6
  B0000111,  // 7
  B01111111,  // 8
  B01101111,   // 9
};


void setup() {
 	//Serial.begin(115200);
 	pinMode(latch, OUTPUT);
 	pinMode(cs, OUTPUT);
 	pinMode(data, OUTPUT);
 	pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(A5, OUTPUT);
  pinMode(A4, OUTPUT);   
}
void loop() {
 	//Count from 0 to 9 on each digit
//First digit
	digitalWrite(13, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(A5, HIGH);
  analogWrite(A4, 0);
  analogWrite(latch, 0);
  shiftOut(data, cs,MSBFIRST, digits[3]);
 	analogWrite(latch, 255);

  delay(5);

//Secon digit
	digitalWrite(13, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(A5, 0);
  analogWrite(A4, 255);
  analogWrite(latch, 0);
 	shiftOut(data, cs, MSBFIRST, digits[0]);
  analogWrite(latch, 255);
  delay(5);

//Third digit
  digitalWrite(13, HIGH);
  digitalWrite(12, LOW);
  digitalWrite(A5, HIGH);
  analogWrite(A4, 255);
  analogWrite(latch, 0);
 	shiftOut(data, cs, MSBFIRST, digits[0]);
 	analogWrite(latch, 255);
  delay(5);

//Four digit
digitalWrite(13, LOW);
  digitalWrite(12, HIGH);
  digitalWrite(A5, HIGH);
  analogWrite(A4, 255);
  analogWrite(latch, 0);
 	shiftOut(data, cs, MSBFIRST, digits[0]);
 	analogWrite(latch, 255);
  delay(5);
 	
}