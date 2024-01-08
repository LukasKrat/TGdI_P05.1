// *********************************************************************
// A6_pwm.c										Version 05.01.2021_S hpw
// LED-Dimmer
// Dokumentation bcm2835:
// https://www.airspayce.com/mikem/bcm2835/index.html
// *********************************************************************

#include <stdio.h>						    // Header fuer Ein-/Ausgaben
#include <bcm2835.h>					    // Header fuer Broadcom

#define	PIN				RPI_BPLUS_GPIO_J8_12							// PWM-Pin
#define	PWM_CHANNEL		0												// PWM-Channel
#define	PWM_RANGE		1024											// PWM-Range
#define SPEED			1												// Geschwindigkeit

int main(void){
	if(bcm2835_init()==0) return 1;										// Library initalisieren

	// PWM Funktionalität an Pin freischalten

	// PWM Frequenz einstellen

	// PWM Modus einstellen und starten

	// PWM Range einstellen

	// In Schleife
		// PWM Duty einstellen
		// Pause

	if(bcm2835_close()==0) return 1;									// Library schließen
	return 0;								// Programmende
}
