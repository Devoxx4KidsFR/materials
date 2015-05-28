// Programme JouerDesNotes
// Ce programme joue plusieurs notes

int PIN_BUZZER = 8;

float BLANCHE = dureeNote(2);
float NOIRE = dureeNote(4);
float CROCHE = dureeNote(8);;

int DO3 = 264;
int RE3 = 297;
int MI3 = 330;

// Cette partie n'est faite qu'une fois quand on appuie sur le bouton RESET de l'Arduino
void setup () {      
  // mesure 1  
  tone(PIN_BUZZER, DO3, CROCHE);
  delay(CROCHE * 1.4);
  noTone(PIN_BUZZER);
  
  tone(PIN_BUZZER, DO3, CROCHE);
  delay(CROCHE * 1.4);
  noTone(PIN_BUZZER);
  
  tone(PIN_BUZZER, DO3, CROCHE);
  delay(CROCHE * 1.4);
  noTone(PIN_BUZZER);
  
  tone(PIN_BUZZER, RE3, CROCHE);
  delay(CROCHE * 1.4);
  noTone(PIN_BUZZER);

  tone(PIN_BUZZER, MI3, NOIRE);
  delay(NOIRE * 1.4);
  noTone(PIN_BUZZER);

  tone(PIN_BUZZER, RE3, NOIRE);
  delay(NOIRE * 1.4);
  noTone(PIN_BUZZER);

  // mesure 2
  tone(PIN_BUZZER, DO3, CROCHE);
  delay(CROCHE * 1.4);
  noTone(PIN_BUZZER);

  tone(PIN_BUZZER, MI3, CROCHE);
  delay(CROCHE * 1.4);
  noTone(PIN_BUZZER);

  tone(PIN_BUZZER, RE3, CROCHE);
  delay(CROCHE * 1.4);
  noTone(PIN_BUZZER);

  tone(PIN_BUZZER, RE3, CROCHE);
  delay(CROCHE * 1.4);
  noTone(PIN_BUZZER);

  tone(PIN_BUZZER, DO3, BLANCHE);
  delay(BLANCHE * 1.4);
  noTone(PIN_BUZZER);

}

// Cette partie est faite en boucle tant que l'on n'arrete pas l'arduino
void loop () {
}

float dureeNote (int fractionMesure) {
    return 1500 / fractionMesure;
}


