#include <Engiro.h>
#include "wiring_private.h"
Engiro Engiro;

int val = 0;
int voltage = 0;

void setup() {
  // put your setup code here, to run once:

  Engiro.Led1_On();
  
  Debug.begin(9600);
  Engiro.Uart_Initialize();
  Debug.println("START\n");
}

void loop() {
  // put your main code here, to run repeatedly:
  val = Engiro.AnalogVoltageRead();
  voltage = val * 0.002368;
  Debug.println(voltage);
  delay(1000);
}