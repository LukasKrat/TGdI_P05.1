// *********************************************************************
// A2_matrix_vektor.c							Version 05.01.2021_S hpw
// Matrix-Vektor Multiplikation mit Zeitausgabe
// *********************************************************************
#include <stdio.h>						    // Header fuer Ein-/Ausgaben
#include <stdlib.h>						    // Header fuer Allgemeine Funktionen
#include <time.h>						    // Header fuer Datum und Zeit

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

void multiplyMatrix(int r1, int c1, int r2, int c2, int m1[][c1], int m2[][c2])
{
    int result[r1][c2];
 
    printf("Resultant Matrix is:\n");
 
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            result[i][j] = 0;
 
            for (int k = 0; k < r2; k++) {
                result[i][j] += m1[i][k] * m2[k][j];
            }
 
            printf("%5d\t", result[i][j]);
        }
 
        printf("\n");
    }
}

void matrix_x_vector_new(int n1,
                         int n2,
                         int vector[n1],
                         int matrix[n1][n2],
                         int result_vector[n1])
{
	clock_t start_t, end_t;
	double total_t;
			
	int resultC = 0;

	//printf("Matrix: %dx%d:", n1, n2);

    int i, j; // i = row; j = column;
    //int iteration = 1;
	//printf("\nProduct Matrix of [x]*[y]\n");
    // Load up A[n][n]

	start_t = clock();

    for (i = 0; i<n2; i++)
    {
        for (j = 0; j<n1; j++)
        {
			
            //result_vector[j] += matrix[j][i] * vector[i];
			resultC += matrix[j][i] * vector[i];
			//resultC += result_vector[j];
            //printf("%4i", result_vector[j]);
			//printf("%d;%d;%d;%d;%f\n",n1,n2,n1,iteration,total_t);
	    }
        //printf("\n");
    }

	end_t = clock();
	total_t = (double)(end_t - start_t) / CLOCKS_PER_SEC;
	printf("%f\n", total_t);
	
	//printf("Vector: \n");
    // Print Vector from Product[n][n]

    // for (i = 0; i<n1; i++)
    // {
    //      printf("%4i\n", result_vector[i]);
    // }
}

int main(void)
{

	// int matrix_a[ZEILEN][SPALTEN] = {0};
	// int matrix_b[ZEILEN][SPALTEN] = {0};
	// int matrix_result[ZEILEN][SPALTEN] = {0};
	// int vektor_a[ZEILEN] = {0};
	// int vektor_b[ZEILEN] = {0};

	//createMatrix(ZEILEN, SPALTEN, matrix_a);
	//createMatrix(ZEILEN, SPALTEN, matrix_b);

	//createVector(ZEILEN, vektor_a);
	//createVector(ZEILEN, vektor_b);

	//printMatrix(ZEILEN, SPALTEN, matrix_a);
	//puts("");
	//printMatrix(ZEILEN, SPALTEN, matrix_b);
	//puts("");
	//printVector(ZEILEN, vektor_a);
	//puts("");
	//printVector(ZEILEN, vektor_b);

	//multiplyMatrix(ZEILEN, SPALTEN, ZEILEN, SPALTEN, matrix_a, matrix_b);

	for (int i = 2; i < 201; i++) {	
		int matrix_a[i][i];
		//int matrix_b[i][i] = {0};
		int matrix_result[i][i];
		//int vektor_a[i] = {0};
		int vektor_b[i];
		createMatrix(i, i, matrix_a);
		createVector(i, vektor_b);
		matrix_x_vector_new(i, i, vektor_b, matrix_a, matrix_result);
	}
	return 0; // Programmende
}