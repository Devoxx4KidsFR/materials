// Programme Clignote
// Allume la LED pendant 1 seconde, puis l'eteint 1 seconde, et recommence.
// Ce qui commence par // est un commentaire, l'Arduino ne l'execute pas
 
int ledRouge = 8;
int ledOrange = 9;
int ledVerte = 13;

long dernierTemps = 0;
long periode = 1000;
int ledOn = 0;

// Cette partie n'est faite qu'une fois quand on appuie sur le bouton RESET de l'Arduino
void setup () {                
  prepareLED (ledRouge);
  prepareLED (ledOrange);
  prepareLED (ledVerte);
}

// Cette partie est faite en boucle tant que l'on n'arrete pas l'arduino

void loop() {
  unsigned long maintenant = millis();
  if(maintenant - dernierTemps > periode) {
    dernierTemps = maintenant;   
    ledOn = (ledOn + 1) % 3;
    digitalWrite(ledRouge,  LOW); // 0==ledOn);
    digitalWrite(ledOrange,  LOW); // 1==ledOn);
    digitalWrite(ledVerte, HIGH); //2==ledOn);
  }
}
