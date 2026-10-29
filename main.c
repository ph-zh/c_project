/*
  Zorg ervoor dat een gebruiker een reeks van 6 gehele getallen kan ingeven
  en daarbij de volgende bewerkingen worden uitgevoerd: som, verschil, vermenigvuldiging, macht en deling.

  Schrijf een aparte functie voor elke bewerking:
  - som()
  - verschil()
  - deling()
  - vermenigvuldiging()
  - macht()

  Voorbeeld:
  ----------
  Geef een reeks van 6 gehele getallen: 5 6 3 1 2 5
  De berekening som( verschil( vermenigvuldiging( macht( deling(5, 6), 3), 1), 2), 5) = 3.578704

}
*/

float deling (float a, float b) {
  return a / b;
}

float som (float a, float b) {
  return a + b;
}

float verschil (float a, float b) {
  return a - b;
}

float vermenigvuldiging (float a, float b) {
  return a * b;
}

float macht (float a, float b) {
  float result = 1;
  for (int i = 0 ; i < b; i ++) {
    result *= a;
  }
  return result;
}

#include <stdio.h>

int main( void )
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int e = 0;
	int f = 0;
	float resultaat = 0;

	printf( "Geef een reeks van 6 gehele getallen: " );
	(void)scanf( "%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);

  /*
    resultaat = deling(a, b);
  printf("%f\n", resultaat);

  resultaat = macht(resultaat, c);
  printf("%f\n", resultaat);

  resultaat = vermenigvuldiging(resultaat, d);
  printf("%f\n", resultaat);

  resultaat = verschil(resultaat, e);
  printf("%f\n", resultaat);

  resultaat = som(resultaat, f);
  printf("%f\n", resultaat);
  */


	resultaat = som( verschil( vermenigvuldiging( macht( deling( a, b ), c ), d ), e ), f );

	printf( "De berekening som( verschil( vermenigvuldiging( macht( deling(%d, %d), %d), %d), %d), %d) = %f\n", a, b, c, d, e, f, resultaat );
	return 0;
}
