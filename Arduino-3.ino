//video capitulo 5

int TRIG = 10;
int ECO = 9;
int LED = 3;
int DURACION;
int DISTANCIA;

void setup()
{
    pinMode(TRIG,OUTPUT);
    pinMode(ECO,INPUT);
    pinMode(LED,OUTPUT);
    Serial.Begin(9600);
}

void loop()
{
    digitalWrite(TRIG,HIGH);
    delay(1);
    digitalWrite(TRIG,LOW);
    DURACION = pilseIn(ECO,HIGH);
    DISTANCIA = DURACION / 58.2;
    Serial.println(DISTANCIA);
    delay(200);
    if(DISTANCIA <= 20 && DISTANCIA >= 0) //Si la distancia delobjeto al sensor es <= 20cm el les se enciende.
    {
        digitalWrite(LED,HIGH);
        delay(DISTANCIA * 10);
        digitalWrite(LED,LOW);
    }
}