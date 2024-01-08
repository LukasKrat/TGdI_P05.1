// *********************************************************************
// A5_lm75.c									Version 05.01.2021_S hpw
// Frostwarner
// Dokumentation bcm2835:
// https://www.airspayce.com/mikem/bcm2835/index.html
// *********************************************************************
#include <stdio.h>						    // Header fuer Ein-/Ausgaben
#include <bcm2835.h>					    // Header fuer Broadcom

#define		PIN				RPI_BPLUS_GPIO_J8_12						// LED-Pin
#define		I2C_ADR			0x48										// Adresse LM75

int main(void){
	if(bcm2835_init()==0) return 1;										// Library initalisieren

	// Pin als output einstellen

	// I2C initalisieren
	
	// I2C Adresse einstellen
	
	// I2C Mode einstellen

	// In Schleife
		// Daten lesen und ausgeben
		// LED an- bzw. ausschalten
		// Pause

	// I2C-Pins auf Standard

	if(bcm2835_close()==0) return 1;									// Library schließen
	return 0;								// Programmende
}
