/********************************************************
 * Final Project -- lista de datos con Email . *
 * *
 * Author: Israel Prado, Rafa Marí and Andre Dorantes. *
 * *
 * Purpose: To make some modifications and run the program. *
 * *
 * Usage: *
 * When you want a intermitent light, Press the button *
 ********************************************************/
const int BOTON = 9; // We declarate a variable that it will have the pin 9
void setup() //declarate input/output pins
{
  pinMode(13, OUTPUT);//Output for a Green Led
  pinMode(12, OUTPUT); //Output for a Green Led
  pinMode(11, OUTPUT); //Output for a Green Led
  pinMode(BOTON,INPUT); //Input for a boton

}
void loop() //the instructions come here
{
  int val; // the variable of if
  val=digitalRead(BOTON); // only it will take 0 or 1 because it depends on the digital read
  if (val==HIGH){ //if it has 1 or high
  digitalWrite(12, HIGH); //Yellow LED
  delay(500); 
  digitalWrite(12, LOW);
  delay(500); //it turn of and on every 0.5 seconds of space and it will make a void main till the Push get down
}
else{
  digitalWrite(13, HIGH); //if the if did not identify the push, we come here and turn on the green led for 10 seconds
  delay(10000); 
  digitalWrite(13, LOW);
  delay(500); 
  digitalWrite(13, HIGH);
  delay(500); 
  digitalWrite(13, LOW);
  delay(500); 
  digitalWrite(13, HIGH);
  delay(500); 
  digitalWrite(13, LOW);
  delay(500); 
  digitalWrite(13, HIGH);
  delay(500); 
  digitalWrite(13, LOW);
  delay(500); 
  digitalWrite(13, HIGH);
  delay(500); 
  digitalWrite(13, LOW); //when passed 10 second, it will turn off and on 4 times and the turn off, in addition, Yellow turn on
  digitalWrite(12, HIGH); //Yellow
  delay(3000); 
  digitalWrite(12, LOW); //when passed the 3 seconds, it will turn off and the Red turn on
  digitalWrite(11, HIGH); //RED
  delay(10000); 
  digitalWrite(11, LOW); //when passed the process, it will return to void loop and make again the operation
} //variable = 0 
}
