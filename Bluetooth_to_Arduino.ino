//By Alfredo Uriel
#include <SoftwareSerial.h>
SoftwareSerial MySerial(10, 11);  // RX   y    TX

char dato1; //0-255
char dato2;  //0-255


void setup() {
Serial.begin(9600);
MySerial.begin(9600);
MySerial.println("CONECTADO");


}

void loop() {

  //Recibe datos a partir del bluetooth y lo imprime en el monitor serial
while (MySerial.available()){
dato1 = MySerial.read();
Serial.print(dato1);
Serial.println();
}

  //Manda datos a partir del monitor serial y lo imprime en el dispositivo conectado con el modulo bluetooth
while (Serial.available()){
dato2 = Serial.read();
MySerial.print(dato2);
}
}
