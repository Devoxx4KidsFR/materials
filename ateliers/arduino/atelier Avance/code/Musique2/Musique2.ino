// Programme Musique
// ce programme joue un pmorceau de musique

int buzzer = 8;

int blanche = 2;
int noire = 4;
int croche = 8;

int notes[] = { 262,196,196,220,196,0,247,262 };
int durees[] = { noire, croche, croche, noire, noire, noire, noire, noire };

void setup() {
  for (int note = 0; note < 8; note++) {
    float duree = dureeNote( durees[note] );
    tone(buzzer, notes[note], duree);
    delay(duree * 1.4);
    noTone(buzzer);
  }
}

void loop() {
}

