#include <Engiro.h>
#include "wiring_private.h"
Engiro Engiro;

unsigned int voltage = 0;
float current = 0;

void setup() {
  // put your setup code here, to run once:

  Engiro.Led1_On();
  
  Debug.begin(115200);
  Engiro.Uart_Initialize();
  Debug.println("START\n");
}

void loop() {
  // put your main code here, to run repeatedly:
  voltage = (Engiro.AnalogCurrentRead()*8);
  Debug.print(voltage);
  Debug.print("mV     ");
  current = (voltage/1200);
  Debug.print(current);
  Debug.println("mA");
  delay(1000);
}