int button = 1;
// BUTTON PIN NUMBER

int D1 = 13;
int D2 = 12;
int D3 = 11;
int D4 = 7;
int D5 = 10;
int D6 = 9;
int D7 = 8;
// LEDs PIN NUMBER

long randomNum;
int push;


void setup() {
  // put your setup code here, to run once:
  pinMode(button , INPUT);
  pinMode(D1 , OUTPUT);
  pinMode(D2 , OUTPUT);
  pinMode(D3 , OUTPUT);
  pinMode(D4 , OUTPUT);
  pinMode(D5 , OUTPUT);
  pinMode(D6 , OUTPUT);
  pinMode(D7 , OUTPUT);
  // STATES

  randomSeed (analogRead(0));

}

void loop() {
  // put your main code here, to run repeatedly:
  push = digitalRead (button);

  if (push == LOW) {
    
    randomNum = random (1,7);

    if (randomNum == 1) {
      picker ();
      LED1();
      delay (1500);
      // put the delay here or in the function
    }
    if (randomNum == 2) {
      picker ();
      STOP();
      LED2();
      delay (1500);
    }
    if (randomNum == 3) {
      picker ();
      STOP();
      LED3();
      delay (1500);
    }
    if (randomNum == 4) {
      picker ();
      STOP();
      LED4();
      delay (1500);
    }
    if (randomNum == 5) {
      picker ();
      STOP();
      LED5();
      delay (1500);
    }
    if (randomNum == 6) {
      picker ();
      STOP();
      LED6();
      delay (1500);
    }

    STOP();
    delay(500);
    
  }

  else {

   digitalWrite (D1 , LOW);
   digitalWrite (D2 , LOW);
   digitalWrite (D3 , LOW);
   digitalWrite (D4 , LOW);
   digitalWrite (D5 , LOW);
   digitalWrite (D6 , LOW);
   digitalWrite (D7 , LOW);
    
  }

}

void picker () {
  LED1 ();
  delay (100);
  LED2 ();
  delay (100);
  LED3 ();
  delay (100);
  LED4 ();
  delay (100);
  LED5 ();
  delay (100);
  LED6 ();
  delay (100);
}

void STOP() {
   digitalWrite (D1 , LOW);
   digitalWrite (D2 , LOW);
   digitalWrite (D3 , LOW);
   digitalWrite (D4 , LOW);
   digitalWrite (D5 , LOW);
   digitalWrite (D6 , LOW);
   digitalWrite (D7 , LOW);
   delay (500);
}

void LED1 () {
   digitalWrite (D1 , LOW);
   digitalWrite (D2 , LOW);
   digitalWrite (D3 , LOW);
   digitalWrite (D4 , HIGH);
   digitalWrite (D5 , LOW);
   digitalWrite (D6 , LOW);
   digitalWrite (D7 , LOW);
}

void LED2 () {
   digitalWrite (D1 , HIGH);
   digitalWrite (D2 , LOW);
   digitalWrite (D3 , LOW);
   digitalWrite (D4 , LOW);
   digitalWrite (D5 , LOW);
   digitalWrite (D6 , LOW);
   digitalWrite (D7 , HIGH);
}

void LED3 () {
   digitalWrite (D1 , HIGH);
   digitalWrite (D2 , LOW);
   digitalWrite (D3 , LOW);
   digitalWrite (D4 , HIGH);
   digitalWrite (D5 , LOW);
   digitalWrite (D6 , LOW);
   digitalWrite (D7 , HIGH);
}

void LED4 () {
   digitalWrite (D1 , HIGH);
   digitalWrite (D2 , LOW);
   digitalWrite (D3 , HIGH);
   digitalWrite (D4 , LOW);
   digitalWrite (D5 , HIGH);
   digitalWrite (D6 , LOW);
   digitalWrite (D7 , HIGH);
}

void LED5 () {
   digitalWrite (D1 , HIGH);
   digitalWrite (D2 , LOW);
   digitalWrite (D3 , HIGH);
   digitalWrite (D4 , HIGH);
   digitalWrite (D5 , HIGH);
   digitalWrite (D6 , LOW);
   digitalWrite (D7 , HIGH);
}

void LED6 () {
   digitalWrite (D1 , HIGH);
   digitalWrite (D2 , HIGH);
   digitalWrite (D3 , HIGH);
   digitalWrite (D4 , LOW);
   digitalWrite (D5 , HIGH);
   digitalWrite (D6 , HIGH);
   digitalWrite (D7 , HIGH);
}
