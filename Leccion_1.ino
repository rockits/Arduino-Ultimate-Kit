/* 

Leccion 1 - Hello World

Guia de Inicio Arduino Ultimate Kit de Rockits
2015 Derechos Reservados Rockits/Raul Goycoolea

*/

int val;// Define variable val

int ledpin=13;// Define digital interface 13

void setup()
{
  Serial.begin(9600);              // Establecer la velocdidad de la interface serie en 9600 bauds
  pinMode(ledpin,OUTPUT);          // Establecer el Pin digital 13 en modo de salida
}

void loop() 

{
  val=Serial.read();               // Leer el comando o caracteres enviados desde la computadora al Arduino 
  if(val=='R')                     // Determinar si el comando o caracter es una 'R°
  digitalWrite(ledpin,HIGH);       // Encender el LED en el pin digital 13
  delay(500);
  digitalWrite(ledpin,LOW);        // Apagar el LED en el pin digital 13
  delay(500);
  Serial.println("Hello World!");  // Enviar el texto "Hello World° a lac computadora por la interface Serial.

  
}

