Int sensor =7;
Int gas_value;
Void setup()
{
pinMode(sensor INPUT);
Serial_begin(9600);
}
Void loop()
{
gas_value = digitalRead(sensor);
Serial_println(gas_value)
}
