/*
	Program that reads from a text file which days a member of the IKSD Club 
	(from now identified as Club, The Club, IT Knowledge Squad, IKSD, I.K.S.D. Club),
	which is part of I.I.S. S. Ten. Vas. A. Badoni, Lecco, Via Rivolta, is present at The Club
    
	Copyright (C) 2018  Luca Cuccovillo, Raul Radu .

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <https://www.gnu.org/licenses/>.
*/

#include "stdafx.h"
#include "config.h"

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

//Function that reads from a default file "namesurnameid.dat" in directory "/Presenze/"
//@param int* n is a pointer to a variable containing the number of the elements in the array.
//@param const char* fileDir is the path of the file to be opened.
//@ret	returns a pointer to an array containing the presences of the user.
Presenza* initializePresenze(int* n, const char* fileDir){
	FILE* userPr;
	fopen_s(&userPr, fileDir, "r");
	Presenza* newArr = (Presenza*)malloc(sizeof(Presenza));
	*n = 0;

	//Inizializza il file se inesistente.
	if (userPr == NULL) {
		fopen_s(&userPr, fileDir, "w+");
		fprintf(userPr, APP_NAME);
		fclose(userPr);
		return newArr;
	}
	fscanf_s(userPr, APP_NAME);
	
	while (!feof(userPr)) {
		(*n)++;
		newArr = (Presenza*) realloc(newArr, *n);
		fscanf_s(userPr, "%d/%d/%d %c\n", &newArr[(*n) - 1].data.d, &newArr[(*n) - 1].data.m, &newArr[(*n) - 1].data.a, &newArr[(*n) - 1].presenza);
	}

	fclose(userPr);
	return newArr;
}

int main()
{
	int n, i;
	Presenza* presenze = initializePresenze(&n, "./test.dat");
	for (i = 0; i < n; i++)
		printf_s("%02d/%02d/%d %c\n", presenze[i].data.d, presenze[i].data.m, presenze[i].data.a, presenze[i].presenza);
	system("PAUSE");
    return 0;
}