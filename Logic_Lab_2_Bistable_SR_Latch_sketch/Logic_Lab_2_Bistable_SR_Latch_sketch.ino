// Title: Lab-1 XOR Gate_V3
// Description: 
// Code to programme Arduino NANO 33 IoT and perform the following:
//
// - Output the values to the input pin(s) of latch via designated TEST pin(s)
// - Read the output of the latch via chosen LOGIC pin
// - Send a signal to the output

// Author: Kenneth Johnson
// Date: 09/10/2022


#define TEST_S 14 //output
#define TEST_R 15 //output
#define LOGIC_S 16 //input
#define LOGIC_R 17 //input
#define VERIFY_S 18 //output
#define VERIFY_R 19 //output

void setup() {
  Serial.begin(9600); //initialise serial communication at 9600 bits per second
  pinMode (TEST_S, OUTPUT); //set pin to output
  pinMode (TEST_R, OUTPUT); //set pin to output
  pinMode (LOGIC_S, INPUT); //set pin to input
  pinMode (LOGIC_R, INPUT); //set pin to input
  pinMode (VERIFY_S, OUTPUT); //set pin to output
  pinMode (VERIFY_R, OUTPUT); //set pin to output
}


//loop routine
void loop() {

    digitalWrite(TEST_S, LOW); //set pin 14 to 0
    digitalWrite(TEST_R, LOW); //set pin 15 to 0
    int LOGICstate_TA = digitalRead(TEST_S);
    int LOGICstate_TB = digitalRead(TEST_R);
    int LOGICstate_A = digitalRead(LOGIC_S); // read logic state and store in variable
    int LOGICstate_B = digitalRead(LOGIC_R);
    if(LOGICstate_A == LOW && LOGICstate_B == LOW){ //if logic state is 0
      digitalWrite(VERIFY_S, HIGH); //set verification pin to 1
      digitalWrite(VERIFY_R, LOW); //set verification pin to 0
      Serial.print(LOGICstate_TA);
      Serial.print("\t");
      Serial.print(LOGICstate_TB);
      Serial.print("\t");
      Serial.print(LOGICstate_A); //print the logic state to serial monitor 
      Serial.print("\t");
      Serial.print(LOGICstate_B); 
      Serial.println();        
    }
    

    delay(3000); //delay by approx 3 seconds before proceeding 

    digitalWrite(TEST_S, LOW); //set pin 14 to 0
    digitalWrite(TEST_R, HIGH); //set pin 15 to 0
    int LOGICstate_TC = digitalRead(TEST_S);
    int LOGICstate_TD = digitalRead(TEST_R);
    int LOGICstate_C = digitalRead(LOGIC_S); // read logic state and store in variable
    int LOGICstate_D = digitalRead(LOGIC_R);
    if(LOGICstate_C == LOW && LOGICstate_D == HIGH){ //if logic state is 0
      digitalWrite(VERIFY_S, LOW); //set verification pin to 1
      digitalWrite(VERIFY_R, HIGH); //set verification pin to 0
      Serial.print(LOGICstate_TC);
      Serial.print("\t");
      Serial.print(LOGICstate_TD);
      Serial.print("\t");
      Serial.print(LOGICstate_C); //print the logic state to serial monitor 
      Serial.print("\t");
      Serial.print(LOGICstate_D); 
      Serial.println();           
    }
    

    delay(3000); //delay by approx 3 seconds before proceeding 

    digitalWrite(TEST_S, HIGH); //set pin 14 to 0
    digitalWrite(TEST_R, LOW); //set pin 15 to 0
    int LOGICstate_TE = digitalRead(TEST_S);
    int LOGICstate_TF = digitalRead(TEST_R);
    int LOGICstate_E = digitalRead(LOGIC_S); // read logic state and store in variable
    int LOGICstate_F = digitalRead(LOGIC_R);
    if(LOGICstate_E == HIGH && LOGICstate_F == LOW){ //if logic state is 0
      digitalWrite(VERIFY_S, HIGH); //set verification pin to 1
      digitalWrite(VERIFY_R, LOW); //set verification pin to 0
      Serial.print(LOGICstate_TE);
      Serial.print("\t");
      Serial.print(LOGICstate_TF);
      Serial.print("\t");
      Serial.print(LOGICstate_E); //print the logic state to serial monitor 
      Serial.print("\t");
      Serial.print(LOGICstate_F); 
      Serial.println();        
    }

    delay(3000); //delay by approx 3 seconds before proceeding 

    digitalWrite(TEST_S, HIGH); //set pin 14 to 0
    digitalWrite(TEST_R, HIGH); //set pin 15 to 0
    int LOGICstate_TG = digitalRead(TEST_S);
    int LOGICstate_TH = digitalRead(TEST_R);
    int LOGICstate_G = digitalRead(LOGIC_S); // read logic state and store in variable
    int LOGICstate_H = digitalRead(LOGIC_R);
    if(LOGICstate_G == HIGH && LOGICstate_H == HIGH){ //if logic state is 0
      digitalWrite(VERIFY_S, HIGH); //set verification pin to 1
      digitalWrite(VERIFY_R, HIGH); //set verification pin to 0
      Serial.print(LOGICstate_TG);
      Serial.print("\t");
      Serial.print(LOGICstate_TH);
      Serial.print("\t");
      Serial.print(LOGICstate_G); //print the logic state to serial monitor 
      Serial.print("\t");
      Serial.print(LOGICstate_H); 
      Serial.println();          
    }

    delay(3000); //delay by approx 3 seconds before proceeding 

 
  }




