// Programme Univac
// Compte en base 2 et allume les LED correspondantes
 

int NOMBRE_DE_LEDS = 4;
int PIN_BASE = 10;
int nombre = 1;

// Cette partie n'est faite qu'une fois quand on appuie sur le bouton RESET de l'Arduino
void setup () {    
  for (int i=0; i<NOMBRE_DE_LEDS; i++) {
    pinMode (PIN_BASE + i, OUTPUT);     
  }
  Serial.begin(9600);
  
  afficheUnNombre(5); // indique un nombre entre 0 et 15
} 

// Cette partie est faite en boucle tant que l'on n'arrete pas l'arduino

void loop() {
}

void afficheUnNombre(int nombre) {
  int val = nombre;
  int reste = 0;
  for (int i=0; i<NOMBRE_DE_LEDS; i++) {
    reste = val % 2;
    Serial.println(reste);
    val = val >> 1;  // divise par 2
    digitalWrite(PIN_BASE + i, reste * HIGH);
  }  
}

