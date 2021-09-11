int analogPin= 3;//potentiometer wiper(middle terminal)
//connected to analog pin3 
int val=0; // variable to store the value read
void setup(){
  serial.begin(9600);//setup serial
  pinMode(LED_BUILTIN,OUTPUT);
}
void loop(){
  val= analogRead(analogPin);//read the input pin
  //serial.println(val); //debug value
  delay(50);
  if (value>300){
    serial.println("its over 300");
    digitalWrite(LED_BUILTIN,HIGH);
  }
  else{
    serial.println("its under 300");
    digitalWrite(LED_BUILTIN,LOW);
  }
}
