#include <Engiro.h>
#include <SPI.h>
#include <wiring_private.h>
Engiro Engiro;


void setup() {
  // put your setup code here, to run once:

  Debug.begin(115200);
  Engiro.Uart_Initialize();
  Debug.println("START......\n");

  Engiro.Acc_Initialize();
  SPI.beginTransaction(SPISettings(1000000, MSBFIRST, SPI_MODE3));
  SPI.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
  Engiro.Acc_RW_Enable();
  delay(100);
  SPI.transfer(0xA0);
  unsigned char result = SPI.transfer(0x00);
  digitalWrite(5, HIGH);

  Debug.println(result);
  delay(1000);  
}