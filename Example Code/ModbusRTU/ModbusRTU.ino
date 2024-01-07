#include <Engiro.h>
Engiro Engiro;

unsigned char i;
char serialData[50];
unsigned char DO_Trigger[8] = {0x0B, 0x06, 0x00, 0x01, 0x00, 0x1F, 0x99, 0x68};

void setup() {
  Modbus.begin(9600);
  Debug.begin(115200);
  Engiro.Uart_Initialize();
  Debug.println("START\n");      
}


void loop() {
  Debug.println("Read DO.");
  Engiro.Modbus_Transmit_Enable();
  delay(10);

  for (i=0; i<8; i++) {
    Modbus.write(DO_Trigger[i]);  
    Modbus.flush();
  }

  Engiro.Modbus_Receive_Enable();
  Debug.setTimeout(500);

  if (Modbus.available()){
    int len = Modbus.readBytes(serialData, 50);

    if (len > 0) {     
      for (i=8; i<len; i++) {
        Debug.write(serialData[i]);
      }
    }    
  }

  delay(5000);      // Delay 5 sec
}
