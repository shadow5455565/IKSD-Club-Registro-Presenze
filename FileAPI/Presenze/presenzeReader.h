//Header file of presenzeReader.cpp

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
