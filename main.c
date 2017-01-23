#include "header.h"

int main(){
	int menu;
	//tampilan pilihan menu
	printf("Menu :\n");
	printf("1. Tambah Bentuk\n");
	printf("2. Tambah Gerak\n");
	printf("3. Masukan Panjang dan Lebar Layar\n");
	printf("4. Simulasi Lite Tetris\n");
	printf("5. Keluar\n");
	
	printf("Pilih Menu :\n");
	
	scanf("%d", &menu);
	// action untuk setip menu yang dipilih
	switch(menu){
		case 1:	{
				dbentuk();//proses data dbentuk.txt di file mesin.c
				system("cls");
				main();
				}break;
		case 2:	{
				dgerak();//proses data dgerak.txt di file mesin.c
				system("cls");
				main();
				}break;
		case 3:	{
				luas();//lempar ke prosedur luas di file mesin.c
				printf("[Proses]");
				wait(2);
				printf(".");
				wait(2);
				printf(".");
				wait(2);
				printf("\nTersimpan!!");
				wait(3);
				system("cls");
				main();
				}break;
		case 4:	{
				if(pan==0 || l==0){// syarat jika leber dan belum terisi
				luas();//lempar ke prosedur luas di file mesin.c
				ambil();//lempar ke prosedur ambil di file mesin.c
				simulasi();//lempar ke prosedur ambil di file simulasi.c
				wait(3);//lempar ke prosedur ambil di file mesin.c
				system("cls");
				main();
				}
				else{//berarti panjang dan lebar telah diisi
				ambil();
				simulasi();
				wait(3);
				system("cls");
				main();
				}
				}break;
		case 5:	{
				system("exit");
				}break;
		default: system("cls");//jika menu yang dimasukan tidak terdaftar
				 main();
	}

return 0;
}

