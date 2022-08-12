#include <Arduino.h>
#include <BluetoothA2DPSink.h>
BluetoothA2DPSink a2dp_sink;
void setup() {
   a2dp_sink.start("MyMusic");  
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(1000); // do nothing
}