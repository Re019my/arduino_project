int n;
int k;

void setup()
{
    Serial.begin(9600);
}

void loop()
{
    if(Serial.available())
    {
    n = Serial.parseInt();
    for (k=0; k<n; k++) 
    {
    int r = n%k;
    int (r==0);
    Serial.print(r);
    Serial.print(" est le reste de ");
    Serial.print(n);
    Serial.print("/");
    Serial.println(k);
    }
    }
}
