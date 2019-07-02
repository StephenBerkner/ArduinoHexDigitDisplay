const int A_Pin = 13;
const int B_Pin = 12;
const int C_Pin = 11;
const int D_Pin = 10;
const int E_Pin = 9;
const int F_Pin = 8;
const int G_Pin = 7;


void setup() {
  // put your setup code here, to run once:
  pinMode(A_Pin, OUTPUT);
  pinMode(B_Pin, OUTPUT);
  pinMode(C_Pin, OUTPUT);
  pinMode(D_Pin, OUTPUT);
  pinMode(E_Pin, OUTPUT);
  pinMode(F_Pin, OUTPUT);
  pinMode(G_Pin, OUTPUT);
}

void outputDigit(int digit){
  if (digit == 0) {
    //pins that are not activated
    digitalWrite(G_Pin, HIGH);

    //pins that are activated
    digitalWrite(A_Pin, LOW);
    digitalWrite(B_Pin, LOW);
    digitalWrite(D_Pin, LOW);
    digitalWrite(C_Pin, LOW);
    digitalWrite(E_Pin, LOW);
    digitalWrite(F_Pin, LOW);
    
    
  } else if (digit == 1){
    //pins that are not activated
    digitalWrite(A_Pin, HIGH);
    digitalWrite(D_Pin, HIGH);
    digitalWrite(E_Pin, HIGH);
    digitalWrite(F_Pin, HIGH);
    digitalWrite(G_Pin, HIGH);
    
    //pins that are activated
    digitalWrite(B_Pin, LOW);
    digitalWrite(C_Pin, LOW);

    
  } else if (digit == 2) {
    //pins that are not activated
    digitalWrite(C_Pin, HIGH);
    digitalWrite(F_Pin, HIGH);

    //pins that are activated
    digitalWrite(A_Pin, LOW);
    digitalWrite(B_Pin, LOW);
    digitalWrite(D_Pin, LOW);
    digitalWrite(E_Pin, LOW);
    digitalWrite(G_Pin, LOW);
  
  } else if (digit == 3){
    //pins that are not activated
    digitalWrite(E_Pin, HIGH);
    digitalWrite(F_Pin, HIGH);

    //pins that are activated
    digitalWrite(A_Pin, LOW);
    digitalWrite(B_Pin, LOW);
    digitalWrite(D_Pin, LOW);
    digitalWrite(C_Pin, LOW);
    digitalWrite(G_Pin, LOW);
    
  } else if (digit == 4){
    //pins that are not activated
    digitalWrite(A_Pin, HIGH);
    digitalWrite(E_Pin, HIGH);
    digitalWrite(D_Pin, HIGH);
   
    //pins that are activated
    
    digitalWrite(B_Pin, LOW);
    digitalWrite(C_Pin, LOW);
    digitalWrite(F_Pin, LOW);
    digitalWrite(G_Pin, LOW);
    
  } else if (digit == 5){
    //pins that are not activated
    digitalWrite(B_Pin, HIGH);
    digitalWrite(E_Pin, HIGH);

    //pins that are activated
    digitalWrite(A_Pin, LOW);
    digitalWrite(C_Pin, LOW);
    digitalWrite(D_Pin, LOW);
    digitalWrite(F_Pin, LOW);
    digitalWrite(G_Pin, LOW);
    
  } else if (digit == 6){
    //pins that are not activated
    digitalWrite(B_Pin, HIGH);
    
    //pins that are activated
    digitalWrite(A_Pin, LOW);
    digitalWrite(C_Pin, LOW);
    digitalWrite(D_Pin, LOW);
    digitalWrite(E_Pin, LOW);
    digitalWrite(F_Pin, LOW);
    digitalWrite(G_Pin, LOW);
    
    
  } else if (digit == 7) {
    //pins that are not activated
    digitalWrite(D_Pin, HIGH);
    digitalWrite(E_Pin, HIGH);
    digitalWrite(F_Pin, HIGH);
    digitalWrite(G_Pin, HIGH);

    //pins that are activated
    digitalWrite(A_Pin, LOW);
    digitalWrite(B_Pin, LOW);
    digitalWrite(C_Pin, LOW);
   
    
    
  } else if (digit == 8) {
    //there are no pins that are not activated for this digit

    //pins that are activated
    digitalWrite(A_Pin, LOW);
    digitalWrite(B_Pin, LOW);
    digitalWrite(C_Pin, LOW);
    digitalWrite(D_Pin, LOW);
    digitalWrite(E_Pin, LOW);
    digitalWrite(F_Pin, LOW);
    digitalWrite(G_Pin, LOW);
    
  } else if (digit == 9){
    //pins that are not activated
    digitalWrite(E_Pin, HIGH);

    //pins that are activated
    digitalWrite(A_Pin, LOW);
    digitalWrite(B_Pin, LOW);
    digitalWrite(C_Pin, LOW);
    digitalWrite(D_Pin, LOW);
    digitalWrite(F_Pin, LOW);
    digitalWrite(G_Pin, LOW);
    
  }
}

void loop() {
  // put your main code here, to run repeatedly:

  for (int i = 0; i < 10; i++){
    outputDigit(i);
    delay(1000);
  }
 
}
