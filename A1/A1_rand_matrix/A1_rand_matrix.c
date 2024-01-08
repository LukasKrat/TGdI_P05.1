// *********************************************************************
// A1_rand_matrix.c								Version 05.01.2021_S hpw
// Matrix und Vektor mit Zufallswerten erzeugen und ausgeben
// *********************************************************************
#include <stdio.h>	// Header fuer Ein-/Ausgaben
#include <stdlib.h> // Header fuer Allgemeine Funktionen
#include <time.h>	// Header fuer Datum und Zeit

#define ZEILEN 4
#define SPALTEN 4
void createMatrix(int r, int c, int matrix[r][c])
{
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			matrix[i][j] = (rand() % 64) - 32;
		}
	}
}

void createVector(int r, int vector[r])
{
	for (int i = 0; i < r; i++)
	{
		vector[i] = (rand() % 64) - 32;
	}
}

void printMatrix(int r, int c, int matrix_a[r][c]) {
	for (int i = 0; i < ZEILEN; i++)
	{
		for (int j = 0; j < SPALTEN; j++)
		{
			printf("%4d ", matrix_a[i][j]);
		}
		puts("");
	}
}

void printVector(int r, int vector[r]) {
	for (int i = 0; i < r; i++)
	{
		
			printf("%4d\n", vector[i]);
	}
}

int main(void)
{

	int matrix_a[ZEILEN][SPALTEN];
	int vektor_a[ZEILEN];
	int vektor_b[ZEILEN];

	createMatrix(ZEILEN, SPALTEN, matrix_a);

	createVector(ZEILEN, vektor_a);
	createVector(ZEILEN, vektor_b);

	printMatrix(ZEILEN, SPALTEN, matrix_a);
	puts("");
	printVector(ZEILEN, vektor_a);
	puts("");
	printVector(ZEILEN, vektor_b);


	return 0; // Programmende
}