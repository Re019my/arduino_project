#define BROCHE 10
unsigned long duree_reception;
int message, poids, one_bit;

void setup() {
  pinMode (BROCHE, INPUT);
  Serial.begin (9600);
}

void loop() {
 duree_reception = pulseIn (BROCHE, HIGH, 4000000);

 if ((duree_reception/100000)==3)
 {
   message = 0;
   poids = 1;
   for (int i = 0; i<8; i++)
   {
     duree_reception = pulseIn (BROCHE, HIGH, 4000000);
     one_bit = (duree_reception/100000)-1;
     message = message + one_bit * poids;
     poids = poids * 2;
   }
 }
 Serial.println(message); 
}

