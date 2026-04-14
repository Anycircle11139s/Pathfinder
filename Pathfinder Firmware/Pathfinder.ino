int BUT1 = D0;
int BUT2 = D1;
int BUT3 = D2;
int LED1 = D3;
int LED2 = D4;
int LED3 = D5;

void setup() {
  pinMode(BUT1, INPUT_PULLUP); //Pullup so it will read low when pressed and high when not pressed
  pinMode(BUT2, INPUT_PULLUP);
  pinMode(BUT3, INPUT_PULLUP);

  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);

  randomSeed(analogRead(0));

  digitalWrite(LED1, HIGH);
}

void loop() {
  if (digitalRead(BUT1) == LOW) {
    
    long randDelay = random(50, 1000); 
    
    delay(randDelay);
    
    delay(500); 

    if (randDelay < 150) {
      for (int i = 0; i < 5; i++) {
        digitalWrite(LED1, HIGH); digitalWrite(LED2, HIGH); digitalWrite(LED3, HIGH);
        delay(100);
        digitalWrite(LED1, LOW); digitalWrite(LED2, LOW); digitalWrite(LED3, LOW);
        delay(100);
      }
    }

    digitalWrite(LED1, HIGH);
    digitalWrite(LED2, LOW);
    digitalWrite(LED3, LOW);
    
    while(digitalRead(BUT1) == LOW); 
  }
}

