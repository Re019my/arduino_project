int i;
int n;
void setup()
{
    Serial.begin(9600);
}

void loop()
{
    for (i=0 ; i<10 ; i++){
        for (n=0 ; n<10 ; n++){
    Serial.print(i);
    Serial.print("*");
    Serial.print(n);
    Serial.print("=");
    Serial.println(i*n);
        }
    }
}
