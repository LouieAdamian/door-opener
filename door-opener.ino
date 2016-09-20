#include "Due.h"
#include "MifareClassic.h"
#include "MifareUltralight.h"
#include "Ndef.h"
#include "NdefMessage.h"
#include "NdefRecord.h"
#include "NfcAdapter.h"
#include "NfcDriver.h"
#include "NfcTag.h"
#include "SPI.h"
#include "PN532_SPI.h"
#include "snep.h"


void setup() {
  Serial.begin(9600);

}

void loop() {

}
void readP2P(){
  if (msgSize > 0) {
          NdefMessage msg  = NdefMessage(ndefBuf, msgSize);
          msg.print();
          Serial.println("\nSuccess");
      } else {
          Serial.println("Failed");
      }
      delay(3000);


}
void readTag(){

}
