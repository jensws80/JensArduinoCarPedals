// Jens Arduino Pedals
// This car simulator pedals program have gas, brake and clutch to connect to usb port.
// No extra drives need to be installed in windows to get this to work.
//
// For more information how to connect and get this to work go too www.jensws.com/pedals
//
// NOTE: This file is for use with Arduino Leonardo and  Arduino Micro only.
//       Arduino Micro only.
//
// To get this program to work you need MHeironimus GPLv3 joystick libary from
// https://github.com/MHeironimus/ArduinoJoystickLibrary version-1.0
//
// by Jens Söderström jensws.com
// 2016-11-01
//--------------------------------------------------------------------


#include <Joystick.h>

// Variable
int gas = A0;
int brake = A1; 
int clutch = A2;
int gasValue = 0;
int gasValuebyte = 0;
int brakeValue = 0;
int brakeValuebyte1 = 0;
int brakeValuebyte2 = 0;
int clutchValue = 0;
int clutchValuebyte1 = 0;
int clutchValuebyte2 = 0;

// init joystick libary
void setup() {
  Joystick.begin();
}

void loop() {
  
  // Gas
  gasValue = analogRead(gas);
  if (gasValue >= 1) {
  gasValuebyte = gasValue / 4 ;
   }
   else
   {
    gasValuebyte = 0 ;
   }
  Joystick.setThrottle(gasValuebyte);
  delay(1); 

  // Brake
  brakeValue = analogRead(brake);
  if (brakeValue >= 1) {
    brakeValuebyte1 = brakeValue / 4;
    brakeValuebyte2 = brakeValuebyte1 - 127;
  
   }
   else
   {
    brakeValuebyte2 = -127;
   }
  Joystick.setYAxis(brakeValuebyte2);
  delay(1); 

  // Clutch
  clutchValue = analogRead(clutch);
  if (clutchValue >= 1) {
  clutchValuebyte1 = clutchValue / 4;
  clutchValuebyte2 = clutchValuebyte1 - 127;
  
   }
   else
   {
    clutchValuebyte2 = -127;
   }
   Joystick.setZAxis(clutchValuebyte2);
  delay(1); 
}
