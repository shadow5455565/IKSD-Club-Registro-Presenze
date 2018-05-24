//Header file of presenzeReader.cpp

#include "stdafx.h"

typedef unsigned char Byte;

//Date format dd/mm/aaaa;
typedef struct {
	int d;
	int m;
	int a;
}Date; 

typedef struct {
	Date data;
	Byte presenza;
}Presenza;


int dateCmp(Date d1, Date d2);
Presenza* initializePresenze(int* n, const char* fileDir);
void savePresenze(Presenza* presenze, int* n);
int searchPresenza(Presenza* presenze, int n, Date data);
void deletePresenza(Presenza* presenze, int *n, int pos);
void modPresenza(Presenza* presenze, int* n, int pos, Presenza modificatons);
int test();
