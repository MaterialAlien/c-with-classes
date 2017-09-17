#include "stdafx.h" //# ative para compilar no Visual Studio
#include <cstdlib>
#include <stdio.h>
#include <stdlib.h>
#include <random>
#include <time.h>

// no CodeBlocks, inclua a seguinte op��o em "compiler options": -std=c++11
// O caminho completo para isso � o seguinte:
// V� no menu Settings > Compiler > compiler settings > compiler flags
// Procure e marque a op��o: have g++ follow the c++11iso c++ language standard [-std=c++11]

// *** Tamanho do array (escolha o n�mero que desejar, desde que seja v�lido)
#define SIZE 10000

// *** Descomente uma das op��es seguintes (CRESCENTE, DECRESCENTE OU ALEAT�RIO).
// *** N�o esque�a de comentar as outras!
// *** A op��o ALEATORIO s� funciona com compiladores que seguem o C++ 11
// #define CRESCENTE
//#define DECRESCENTE
#define ALEATORIO

// *** Descomente se desejar ver o array antes de ser ordenado:
#define VER_ANTES

// *** Algoritmo quicksort tradicional (1o elemento � o piv�)
void quicksort(int *vetor, int i, int f);

int particiona(int *vetor, int esq, int dir);

// *** Troca dois elementos de lugar
void swap(int *n1, int *n2);

int main()
{
	int *vetor = (int*)malloc(SIZE * sizeof(int));
	int k;

#ifdef ALEATORIO
	std::normal_distribution<double> distrib;
	std::default_random_engine engine;
#endif

	if (vetor != NULL) {

#ifdef ALEATORIO
		printf("\nGerando array de entrada (nao ordenado) de %d elementos...\n\n", SIZE);
#elif defined CRESCENTE
		printf("\nUsando array crescente de %d elementos...\n\n", SIZE);
#else
		printf("\nUsando array decrescente de %d elementos...\n\n", SIZE);
#endif
		for (k = 0; k < SIZE; k++) {
#ifdef ALEATORIO
			vetor[k] = abs(distrib(engine)*(SIZE / 10) + 1);
#elif defined CRESCENTE
			vetor[k] = k + 1;
#else
			vetor[k] = SIZE - (k + 1);
#endif

#ifdef VER_ANTES
			printf("%9d ", vetor[k]);
#endif
		}
		printf("Array pronto.\n", vetor[k]);
		system("pause");

		printf("\n\nOrdenando array...");
		quicksort(vetor, 0, SIZE - 1);

		printf("\n\nArray Ordenado:\n\n");
		for (k = 0; k<SIZE; k++)
			printf("%9d ", vetor[k]);
	}
	else printf("\n\nErro ao alocar array");

	printf("\n\n");
	system("pause");
}

void swap(int *n1, int *n2) {
	int troca = *n1;
	*n1 = *n2;
	*n2 = troca;
}

void quicksort(int *vetor, int i, int f) {
	int p;
	if (f>i) {
		p = particiona(vetor, i, f);
		quicksort(vetor, i, p - 1);
		quicksort(vetor, p + 1, f);
	}
}

int particiona(int *vetor, int esq, int dir) {
	int i = esq + 1, j = dir, pivo = esq;
	while (j>i) {
		while (vetor[i]<vetor[pivo] && i<dir) i++;
		while (vetor[j] >= vetor[pivo] && j>esq) j--;

		if (i<j && vetor[i]>vetor[j])
			swap(&vetor[i], &vetor[j]);
	}
	if (vetor[j]<vetor[pivo])
		swap(&vetor[pivo], &vetor[j]);
	return j;
}
