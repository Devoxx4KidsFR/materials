// Programme Musique
// Ce programme joue une note

int buzzer = 8;

int blanche = 2;
int noire = 4;
int croche = 8;

// Cette partie n'est faite qu'une fois quand on appuie sur le bouton RESET de l'Arduino
void setup () {                
  prepareBuzzer ();
  int hauteur = 262;
  float duree = dureeNote(noire);
  tone(buzzer, hauteur, duree);
  delay(duree * 1.4);               
}

// Cette partie est faite en boucle tant que l'on n'arrete pas l'arduino
void loop () {
}

