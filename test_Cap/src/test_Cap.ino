/*
 * Project test_Cap
 * Description:
 * Author:
 * Date:
 */


 
// const int LEDRED = 5;
// const int DURATION =19 ;
// int j;

// void setup(){
//   pinMode(LEDRED,OUTPUT);
// }
// void loop (){
//   for (j=0; j <= 255; j++) {
//     analogWrite(LEDRED, j);
//     delay (DURATION); 
//   }
  
//   for (j=255; j >= 0; j--) {
//     analogWrite(LEDRED, j);
//     delay (DURATION);
//   }
// }



#include "RH_ASK.h" 
#include "SPI.h"// Not actually used but needed to compile
RH_ASK driver;
void setup()
{
 Serial.begin(9600); // Debugging only

if (!driver.init())
 Serial.println("init failed");
}
void loop()
{
 const char *msg = "Hello World!";
 driver.send((uint8_t *)msg, strlen(msg));
 driver.waitPacketSent();
 delay(1000);
}
