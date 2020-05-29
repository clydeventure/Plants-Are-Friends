#include <LedControl.h>

int DIN = 12;
int CS =  11;
int CLK = 10;

const int hygrometer = A0;	//Hygrometer sensor analog pin output at pin A0 of Arduino
//Variables 
int value;

LedControl lc=LedControl(DIN,CLK,CS,0);

void setup(){
 lc.shutdown(0,false);       //The MAX72XX is in power-saving mode on startup
 lc.setIntensity(0,2);      // Set the brightness to maximum value
 lc.clearDisplay(0);         // and clear the display
 Serial.begin(9600);
}

void loop(){ 

    byte smile[8]=   {0x3C,0x42,0xA5,0x81,0xA5,0x99,0x42,0x3C};
    byte neutral[8]= {0x3C,0x42,0xA5,0x81,0xBD,0x81,0x42,0x3C};
    byte frown[8]=   {0x3C,0x42,0xA5,0x81,0x99,0xA5,0x42,0x3C};
    int sensorValue1 = analogRead(A0);
    Serial.println(sensorValue1);
  
  if (sensorValue1 >= 750){
    printByte(frown);
  }
  else if (sensorValue1 >= 650 && sensorValue1 < 749){
    printByte(neutral);
  }
  else {
    printByte(smile);
  }
  
    delay(1000); // Sensor will read moisture level every 10 seconds
    // When the plant is watered well the sensor will read a value 380~400, I will keep the 400 
	// value but if you want you can change it below. 
	
}


void printByte(byte character [])
{
  int i = 0;
  for(i=0;i<8;i++)
  {
    lc.setRow(0,i,character[i]);
  }
}

