//Pinos digitais
const int ledPin1 = PA5; 
const int ledPin2 = PA6; 
const int ledPin3 = PA7;
const int ledPin4 = PB6; 
const int ledPin5 = PB7; 
const int ledPin6 = PC14;
const int buttonPin = PA8;  

int numero = 0;

void setup() {
  // set the digital pin as output:
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
  pinMode(ledPin4, OUTPUT);
  pinMode(ledPin5, OUTPUT);
  pinMode(ledPin6, OUTPUT);
  pinMode(buttonPin, INPUT);

  //Semente aleatória a partir da entrada analógica A4
  randomSeed(analogRead(A4)); 
}

void loop() {
  
  if(digitalRead(buttonPin)){

    digitalWrite(ledPin1, LOW);
    digitalWrite(ledPin2, LOW);
    digitalWrite(ledPin3, LOW);
    digitalWrite(ledPin4, LOW);
    digitalWrite(ledPin5, LOW);
    digitalWrite(ledPin6, LOW);
    
    //Gera número entre 1 e 6
    numero = random(1, 6);

    if(numero == 1){
      digitalWrite(ledPin1, HIGH);
        
    }else if(numero == 2){
      digitalWrite(ledPin1, HIGH);
      digitalWrite(ledPin2, HIGH);
      
    }else if(numero == 3){
      digitalWrite(ledPin1, HIGH);
      digitalWrite(ledPin2, HIGH);
      digitalWrite(ledPin3, HIGH);
      
    }else if(numero == 4){
      digitalWrite(ledPin1, HIGH);
      digitalWrite(ledPin2, HIGH);
      digitalWrite(ledPin3, HIGH);
      digitalWrite(ledPin4, HIGH);
      
    }else if(numero == 5){
      digitalWrite(ledPin1, HIGH);
      digitalWrite(ledPin2, HIGH);
      digitalWrite(ledPin3, HIGH);
      digitalWrite(ledPin4, HIGH);
      digitalWrite(ledPin5, HIGH);
    }else{
      digitalWrite(ledPin1, HIGH);
      digitalWrite(ledPin2, HIGH);
      digitalWrite(ledPin3, HIGH);
      digitalWrite(ledPin4, HIGH);
      digitalWrite(ledPin5, HIGH);
      digitalWrite(ledPin6, HIGH);
    }
  }
  delay(150);
  
   
}
