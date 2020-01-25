/* *********************************************************************
 *  name - Rohit Maurya
 *  Date - 25/01/2020
 *  Dis - 
**********************************************************************/
#define VRx A0//gpio pin A0 
#define VRy D2 // gpio pin 4

void setup() {

Serial.begin(9600);

pinMode(VRx, INPUT);
pinMode(VRy, INPUT);

Serial.println(" JoyStick Testing");
}

int x_axis, y_axis;


void loop() {

  x_axis = analogRead(VRx);
  y_axis = analogRead(VRy);

  Serial.print("x_axis = " + String(x_axis) );
  Serial.print("\t" );
  Serial.println("y_axis = " + String(y_axis) );
  
  delay(200);// delay for 200 msec

}// End loop
