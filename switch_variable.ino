void setup()
{
    int a, b, tmp ;

    Serial.begin(9600);
    
    //Initialisation de deux variales entieres 
    a = 1984 ;
    b = 1515 ;

    //Echange des valeurs a et b
    tmp = b ;
    b = a ;
    a = tmp ;

    //Affichage des valeurs des variables apres echange
    Serial.print("a = ");
    Serial.println(a);
    Serial.print("b = ");
    Serial.println(b);
}

void loop()
{

}
