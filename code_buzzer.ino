int buzzer =2;// Borne de sortie

void setup()

{

pinMode(buzzer,OUTPUT);// Définir la sortie du buzzer

}

void loop()

{

int i;// Définir 1 variable pour faire des boucles





for(i=0; i<80; i++)// Premier son à une fréquence

{

digitalWrite(buzzer, HIGH);// Faire du bruit

delay(1000);// Attendre 10ms

digitalWrite(buzzer, LOW);// Silencendelay(10);// Attendre 10ms

delay(1000);// Attendre 10ms

}

for(i=0; i<40; i++)// Deuxième son à une autre fréquence

{

delay(20);// Attendre 20msndigitalWrite(buzzer,LOW);// Silence

delay(20);// Attendre 20msn}

}



}
