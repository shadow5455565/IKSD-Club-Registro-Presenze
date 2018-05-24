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

Presenza* initializePresenze(int* n, const char* fileDir);
