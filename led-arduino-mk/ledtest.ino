int pin = 4;

void setup()
{
	pinMode(pin,OUTPUT);
}

void loop()
{
	digitalWrite(pin,HIGH);
	delay(200);
	digitalWrite(pin,LOW);
	delay(500);
	digitalWrite(pin,HIGH);
	delay(1000);
	digitalWrite(pin,LOW);
	delay(800);
}
