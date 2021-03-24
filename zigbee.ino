
Void setup()
{
Serial.begin(9600); // baurdrate is set to 9600
}
Void loop()
{
While(serial.available())
{
Serial.write(serial.read());
}
}
