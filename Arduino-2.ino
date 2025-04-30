// video capitulo 4
//Primer codigo
int LED = 3;
int Brillo;

void setup()
{
    pinMode(LED,OUTPUT);
}

void loop()
{
    for(Brillo = 0;Brillo < 256; Brillo++)  // Brillo de el led ira aumetando hasta llegar al maximo.
    {
        analogWrite(LED,Brillo);
        delay(15;)
    }

    for(Brillo = 255;Brillo >= 0; Brillo--)  //Cunado el brillo este al maximo este ira disminuyendo hasta apagarse.
    {
        analogWrite(LED,Brillo);
        delay(15;)
    }
}
//Segundo codigo
int LED = 3;
int Brillo;
int POT = 0;

void setup()
{
    pinMode(LED,OUTPUT);  //las entradas analogicas no requieren de inicializacion.
}

void loop()
{
    Brillo = analogRead(POT) / 4;
    analogWrite(LED,Brillo);
}