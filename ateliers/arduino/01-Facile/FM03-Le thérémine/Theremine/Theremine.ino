// Ce programme code un theremine
// Le son change lorsque l'on déplace sa main pour cacher le capteur de lumiere

int PIN_BUZZER = 8;
int dureeNote = 10;

void setup() {
  // Initialise la communication. Indique la vitesse de l'echange
  Serial.begin(9600);
}

void loop() {
  // lit la valeur sur le pin AO
  int lumiere = analogRead(A0);
  // S'il se bloque sur l'ordinateur, on peut lire la valeur
  Serial.println(lumiere);
  // la valeur de lumiere change selon l'endroit, on suppose qu'elle est entre 400 et 1000 
  // nous voulons que l'instrument joue une frequence entre 120 Hz et 800 Hz
  // map traduit converti les valeurs 400-100 0 en valeurs 120-800
  int frequence = map(lumiere, 400, 1000, 120, 800);
  // joue la note
  tone(PIN_BUZZER, frequence, dureeNote);
  // une très courte pause donne un meilleur résultat
  delay(1);        
}
