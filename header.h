#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include <windows.h>

/*Saya FERDILA RAHMI bersumpah demi Tuhan tidak melakukan kecurangan yang dispesifikasikan pada tugas besar Alpro 2 pada saat mengerjakan Tugas Besar Alpro 2.*/

typedef struct{
	char bb;
	char hh;
}bbentuk;//untuk menampung data tbentuk ketika simulasi 

typedef struct{
	char kode;
	int x;
	int y;
	char r[100];//untuk menampung data tgerak ketika simulasi
}ggerak;

char papan[100][100];
int pan,l,m,n;// pan dan l adalah luas layar, n dam m adalah banyak data pada tgerak dan tbentuk


	char xx[100][100];//menampung x dari tgerak nanti akan di konversi ke integer
	char yy[100][100];//menampung y dari tgerak nanti akan di konversi ke integer
	
	// int mm;
	// int nn;
	
bbentuk bentuk[100]; 
ggerak gerak[100];
