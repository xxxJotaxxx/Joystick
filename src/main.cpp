#include <Arduino.h>

const int Z = 3;
const int Y = 1;
const int X = 0;

void setup()
{
    pinMode(Z, INPUT);
    digitalWrite(Z, HIGH);
    Serial.begin(9600);
}

void loop()
{
    Serial.print("Boton:  ");
    Serial.print(digitalRead(Z));
    Serial.print("\n");
    Serial.print("Eje X: ");
    Serial.print(analogRead(X));
    Serial.print("\n");
    Serial.print("Eje Y: ");
    Serial.println(analogRead(Y));
    Serial.print("\n\n");
    delay(1000);
}