#include <Makeblock.h>
#include <SoftwareSerial.h>
#include <Wire.h>

MeBluetooth bluetooth4(PORT_4);
int _ABVAR_1_btRead = 0 ;

void setup()
{
  bluetooth4.begin(9600);
  Serial.begin(9600);
}

void loop()
{
  if(bluetooth4.available()){
    _ABVAR_1_btRead= bluetooth4.read();
    if(_ABVAR_1_btRead>-1){

    }
  }
  Serial.print(_ABVAR_1_btRead);
  Serial.println();
}


