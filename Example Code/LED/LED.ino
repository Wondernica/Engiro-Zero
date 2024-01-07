#include <Engiro.h>
Engiro Engiro;


int val = 0;

void setup() {
  // put your setup code here, to run once:  
  Debug.begin(115200);
  Engiro.Uart_Initialize();
  Debug.println("START\n");      
}

void loop() {
  // put your main code here, to run repeatedly:
  Engiro.Led1_On();     // Turn on LED 1
  delay(500);           // Delay 500ms
  Engiro.Led1_Off();    // Turn off LED 1
  delay(500);           // Delay 500ms
  Engiro.Led2_On();     // Turn on LED 2
  delay(500);           // Delay 500ms
  Engiro.Led2_Off();    // Turn off LED 2
  delay(500);           // Delay 500ms
}
