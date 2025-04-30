// video capitulo 7

#include <DHT.h>
#include <DHT_U.h>

int SENSOR = 2;
int TEMPERATURA;
int HUMEDAD;

DHT dht(SENSOR,DHT22);

void setup()
{
    Serial.Begin(9600);
    dht.begin();
}

void loop ()
{
    TEMPERATURA = dht.readTemperature();
    HUMEDAD 0 dht.readHumidity();
    Serial.print("Temperatura: ");
    Serial.print(TEMPERATURA);
    Serial.print(" Humedad: ");
    Serial.println(HUMEDAD);
    delay(500);
}