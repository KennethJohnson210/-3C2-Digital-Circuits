// Title: Lab-1 XOR Gate
// Description: 
//  Code to programme Arduino NANO 33 IoT and perform the following:
//
//  -Output the values of the relevant truth table to the input pin(s) of CD4070BE logic gate
//  -Read the output of the logic gate via the chosen LOGIC pin
//  -Send a signal to the output LED via the VERIFY pin based on the gate output compared to the
//   expected output.

// Author: Kenneth Johnson
// Date: 05/10/2022


#define TEST_A 14 //output
#define TEST_B 15 //output
#define LOGIC 16 //input
#define VERIFY 17 //output

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); //initialise serial communication at 9600 bits per second
  pinMode (TEST_A, OUTPUT); //set pin to output
  pinMode (TEST_B, OUTPUT); //set pin to output
  pinMode (LOGIC, INPUT); //set pin to input
  pinMode (VERIFY, OUTPUT); //set pin to output
}

//loop routine
void loop() {

    digitalWrite(TEST_A, LOW); //set pin 14 to 0
    digitalWrite(TEST_B, LOW); //set pin 15 to 0
    int LOGICstate_A = digitalRead(LOGIC); // read logic state and store in variable

    if(LOGICstate_A == LOW ){ //if logic state is 0
      digitalWrite(VERIFY, LOW); //set verification pin to 0
      Serial.println(LOGICstate_A); //print the logic state to serial monitor         
    }
    delay(3000); //delay by 3 seconds before proceeding 
    
        
    digitalWrite(TEST_A, LOW); //set pin 14 to 0
    digitalWrite(TEST_B, HIGH); //set pin 15 to 1
    int LOGICstate_B = digitalRead(LOGIC); // read logic state and store in variable

    if(LOGICstate_B == HIGH){ //if logic state is 1
      digitalWrite(VERIFY, HIGH); //set verification pin to 1
      Serial.println(LOGICstate_B); //print the logic state to serial monitor      
    }
    delay(3000); //delay by 3 seconds before proceeding 

    digitalWrite(TEST_A, HIGH); //set pin 14 to 1
    digitalWrite(TEST_B, LOW); //set pin 15 to 0
    int LOGICstate_C = digitalRead(LOGIC); // read logic state and store in variable

    if(LOGICstate_C == HIGH ){ // if logic state is 1
      digitalWrite(VERIFY, HIGH); //set verification pin to 1
      Serial.println(LOGICstate_C); //print the logic state to serial monitor    
    }
    delay(3000); //delay by 3 seconds before proceeding

    digitalWrite(TEST_A, HIGH); //set pin 14 to 1
    digitalWrite(TEST_B, HIGH); //set pin 15 to 1
    int LOGICstate_D = digitalRead(LOGIC); // read logic state and store in variable

    if(LOGICstate_D == LOW ){ //if logic state is 0
      digitalWrite(VERIFY, LOW); //set verification pin to 0
      Serial.println(LOGICstate_D);  //print the logic state to serial monitor        
    }
    delay(3000); //delay by 3 seconds before proceeding
 
  }



