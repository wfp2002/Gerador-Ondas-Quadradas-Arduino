#define coarse A0
#define generator 8

int frequency;



void setup()
{
Serial.begin(9600);
pinMode(coarse, INPUT);
pinMode(generator, OUTPUT);
}

void loop()
{
frequency = (analogRead(coarse)*10);
Serial.println(frequency);
tone(generator, frequency);
delay(1000);
}
