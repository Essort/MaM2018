
int buttonState1 = 0;
int buttonState2 = 0;
int buttonState3 = 0;
int buttonState4 = 0;
int buttonState5 = 0;
int buttonState6 = 0;
int buttonState7 = 0;


//gombok 
const int buttonP1 = 2;
const int buttonP2 = 3;
const int buttonP3 = 4;
const int buttonP4 = 5;
const int buttonP5 = 6;
const int buttonP6 = 7;
const int buttonP7 = A0;

//led
const int ledPin = 13;



void setup() {
  // put your setup code here, to run once:
  Serial.begin (9600);

  pinMode(ledPin, OUTPUT);
  
  //bemenetek //TODO meg kell oldani, ha analóg!
  pinMode(buttonP1, INPUT_PULLUP);
  pinMode(buttonP2, INPUT_PULLUP);
  pinMode(buttonP3, INPUT_PULLUP);
  pinMode(buttonP4, INPUT_PULLUP);
  pinMode(buttonP5, INPUT_PULLUP);
  pinMode(buttonP6, INPUT_PULLUP);

}

void loop() {
  // put your main code here, to run repeatedly:
  buttonState1 = digitalRead(buttonP1);
  buttonState2 = digitalRead(buttonP2);
  buttonState3 = digitalRead(buttonP3);
  buttonState4 = digitalRead(buttonP4);
  buttonState5 = digitalRead(buttonP5);
  buttonState6 = digitalRead(buttonP6);
  buttonState7 = analogRead(buttonP7);

  Serial.print(buttonState1); //- sebesség 1 
  Serial.print(":");
  Serial.print(buttonState2); //- sebesség 2 
  Serial.print(":");
  Serial.print(buttonState3); //- sebesség 3
  Serial.print(":");
  Serial.print(buttonState4); //- irány 0 előre 1 hátra
  Serial.print(":");
  Serial.print(buttonState5); //- vészleállítás
  Serial.print(":");
  Serial.print(buttonState6); //- szervó csapkodás
  Serial.print(":");
  Serial.print(buttonState7); //- PWM
  Serial.print(";");
  

  //delay(100);
  delay(150);

}