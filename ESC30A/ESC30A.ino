/* Rafael Lozano Rolon
 * Talos electronics 
 * Conexiones
 * señal pin 10
 * BEC 5V/GND
 */

#include <Servo.h>
#define pin_esc 10
Servo esc; 
  

void setup() {
  esc.attach(pin_esc);
  esc.writeMicroseconds(1000);//Es necesario iniciar con 1 ms para activar el ESC
  delay(1000);//Esperar 1 segundo           

}

void loop() {
  int val = analogRead(A0);//leer el valor del potenciometro     
  val = map(val, 0, 1023, 1000, 2000);//convertir el valor de 0-1023 a valores de 1000 a 2000   
  esc.writeMicroseconds(val);//el valor convertido equivale a de 1ms a 2ms y sera la velocidad
  delay(15);                          
}
