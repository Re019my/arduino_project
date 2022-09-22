float n;
float nombre;

void setup(){
    Serial.begin(9600);
}

void loop(){
    if (Serial.available()){
        n = Serial.parseInt ();
        nombre = sq(n);
        Serial.print(n);
        Serial.print(" au carré = ");
        Serial.println(nombre);
    }
}
