/*
  Maak een programma dat de volgende geluidsassociatie weergeeft op basis van de input van de gebruiker.

  Loudness in Decibels (dB)    Perception
  ==========================================
  50 or lower                  Quiet
  51-70                        Intrusive
  71-90                        Annoying
  91-110                       Very annoying
  above 110                    Uncomfortable
  ==========================================

  Je stelt de volgende vraag aan de gebruiker:
  Geef het geluidsniveau (dB) in:

  Het antwoord van het programma moet 1 van de 5 percepties zijn op basis van de classificatie in de linkse kolom.
*/

#include <stdio.h>

int main( void ) {
	
	int geluidsniveau = 0;
	int quiet = 50;
	int intrusive = 70;
	int annoying = 90;
	int veryAnnoying = 110;

	printf( "Geef het geluidsniveau (dB) in: " );
	(void)scanf( "%d", &geluidsniveau );

	if( geluidsniveau <= quiet ) {
		printf( "Quiet\n" );
	} else if( geluidsniveau <= intrusive ) {
		printf( "Intrusive\n" );
	} else if( geluidsniveau <= annoying ) {
		printf( "Annoying\n" );
	} else if( geluidsniveau <= veryAnnoying ) {
		printf( "Very annoying\n" );
	} else {
		printf( "Uncomfortable\n" );
	}

	return 0;
}