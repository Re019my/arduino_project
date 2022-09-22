int n;

void setup(){
    Serial.begin(9600);
}

void loop(){
    if (Serial.available()){
        n = Serial.parseInt ();
        n = sq(n);
        Serial.println(n);
    }
}