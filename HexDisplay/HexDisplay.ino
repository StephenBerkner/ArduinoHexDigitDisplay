// Designed for the Arduino Uno R3 and RL-D5621
// The datasheet can be found here: http://www.led-opt.com.ua/pdf/digital/RL-D56.pdf

// The chip is common anode with the anode for digit 1 on pin 14
// and the anode for digit 2 on pin 15.

// Segment  | Cathode Pin
//    A     |     7
//    B     |     6
//    C     |     4
//    D     |     1
//    E     |     3
//    F     |     8
//    G     |     9
//    DP    |     2

// The arrangement of the LED's on the display is as follows:
//
//      A
//     ---
// F /   / B
//   --- G
// E /   / C
//  ---   __
//   D   /DP/
//       --


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
 
  //outputs every number from 0 to 9 with a 1 second delay between numbers
  for (int i = 0; i < 10; i++){
    outputDigit(i);
    delay(1000);
  }
 
}
