#include "header.h"
void wait(float x){
    time_t start;
    time_t current;
    time(&start);
    do
        time(&current);
    while (difftime(current,start) < x);
}


/** Prosedur untuk menset warna berdasarkan indeks yang dikirim */
//SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14 );
void setcolor ( unsigned short color ) {
	HANDLE hCon = GetStdHandle( STD_OUTPUT_HANDLE );
	SetConsoleTextAttribute( hCon, color );
}
/** http://stefanusdiptya.wordpress.com/2009/07/13/edit-warna-text-atau-background-di-c/ */

void luas(){//untuk mengisi veriable pan untuk panjang layar dan l untuk lebar layar
	printf("masukan luas panjang dan lebar\n");
	printf("Panjang :");
	scanf("%d",&pan);
	printf("Lebar :");
	scanf("%d",&l);
	if(pan!=0 || l!=0){//karena panjang dan lebar layar selalu +1
		pan=pan+1;
		l=l+1;
	}
}

void dbentuk(){//untuk menjalankan aksi dari pilihan menu 1 untuk melihat dan menambah data tbentuk.txt
	FILE * fsumber1;//deklarasi variable untuk sequential file
	fsumber1 = fopen("tbentuk.txt", "r");// ambil file
	
	char data[100][100];//variable untuk menampung data
	int j;
	int i=0;
	
	fscanf(fsumber1, "%s", &data[i]);//proses mengambil data pertama
	while(data[i][0]!='#'){//tanda dummy sebagai akhir
		// printf("%s ->%d\n",data[i],i);
		i++;
		fscanf(fsumber1, "%s\n", &data[i]);// proses mengambil data
	}
	// printf("%d\n", i);
	// tampilan  data sebelumnya
	printf("Isi Bentuk Saat ini\n");
	printf("-----------------------\n");
	printf("|huruf   |kode bentuk |\n");
	printf("-----------------------\n");
	for(j=0;j<i;j=j+2){
		printf("|%s       |%s           |\n", data[j],data[j+1]);//menampilkan hasil data yang telah diambil
	}
	printf("-----------------------\n");
	fclose(fsumber1);
	
	
	char x;
	char h,b;
	printf("ingin mengisi :");//pilihan untuk menambah data
	scanf(" %c", &x);
	if(x=='Y' || x=='y'){
		
	FILE * fsumber2;
	fsumber2 = fopen("tbentuk.txt", "w");// menggunkan write otomatis akan menghapus semua data yang telah ada
	
	for(j=0;j<i;j=j+2){//batas sampai i berdasarkan perulangan diatas
		fprintf(fsumber2,"%s %s\n", data[j],data[j+1]);//tuliskan kembali ke file tbentuk.txt
	}
		//minta masukan data dari user
		printf("Huruf : ");
		scanf(" %c", &h);
		printf("Bentuk : ");
		scanf(" %c", &b);
		fprintf(fsumber2,"%c %c\n", h,b);//tuliskan ke dalam tbentuk.txt
		fprintf(fsumber2,"## ##");//tuliskan kembali dummy
		
	fclose(fsumber2);
	}else{
		system("cls");
	}
}

void dgerak(){//untuk menjalankan aksi dari pilihan menu 1 untuk melihat dan menambah data tgerak.txt
	FILE * fsumber1;//deklarasi variable untuk sequential file
	fsumber1 = fopen("tgerak.txt", "r");//ambil file
	
	char data[100][100];//variable untuk menampung data
	int j;
	int i=0;
	
	fscanf(fsumber1, "%s", &data[i]);//proses mengambil data pertama
	while(data[i][0]!='#'){//tanda dummy sebagai akhir
		// printf("%s ->%d\n",data[i],i);
		i++;
		fscanf(fsumber1, "%s\n", &data[i]);// proses mengambil data
	}
	// printf("%d\n", i);
	// tampilan  data sebelumnya
	printf("Isi Gerak Saat ini\n");
	printf(" ------------------------------------------\n");
	printf("|Kode Bentuk|Koor Kolom|Koor Baris|Putaran |\n");
	printf(" ------------------------------------------\n");
	for(j=0;j<i;j=j+4){
		printf("|%2s         |%2s        |%2s        |%3s     |\n", data[j],data[j+1],data[j+2],data[j+3]);//menampilkan hasil data yang telah diambil
	}
	printf(" ------------------------------------------\n");
	fclose(fsumber1);
	
	
	char x;
	char a;
	int b,c,d;
	printf("ingin mengisi :");//pilihan untuk menambah data
	scanf(" %c", &x);
	if(x=='Y' || x=='y'){
		
	FILE * fsumber2;
	fsumber2 = fopen("tgerak.txt", "w");// menggunkan write otomatis akan menghapus semua data yang telah ada
	
	for(j=0;j<i;j=j+4){//batas sampai i berdasarkan perulangan diatas
		fprintf(fsumber2,"%s %s %s %s\n", data[j],data[j+1],data[j+2],data[j+3]);//tuliskan kembali ke file tgerak.txt
	}
	//minta masukan data dari user
		printf("Kode Bentuk : ");
		scanf(" %c", &a);
		printf("Koor Kolom : ");
		scanf(" %d", &b);
		printf("Koor Baris : ");
		scanf(" %d", &c);
		printf("Rotasi : ");
		scanf(" %d", &d);
		
		fprintf(fsumber2,"%c %d %d %d\n", a,b,c,d);//tuliskan ke dalam tbentuk.txt
		fprintf(fsumber2,"## ## ## ##");//tuliskan kembali dummy
		
	fclose(fsumber2);
	}else{
		system("cls");
		main();
	}
}

