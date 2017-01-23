#include "header.h"

void ambil(){//ambil data
	FILE * fsumber3;
	FILE * fsumber4;
	fsumber3= fopen("tbentuk.txt", "r");
	fsumber4 = fopen("tgerak.txt", "r");
	
	char data[100][100];//varible untuk menampung data
	int j;
	int i=0;
	
	fscanf(fsumber3, "%s", &data[i]);//proses ambil data pertama dari t bentuk
	while(data[i][0]!='#'){//tanda dummy sebagai batas akhir
		// printf("%s ->%d\n",data[i],i);
		i++;
		fscanf(fsumber3, "%s\n", &data[i]);//proses ambil data
	}
	m=0;
	for(j=0;j<i;j=j+2){//masukan data yang telah di ambil data tbentuk ke variable baru
		bentuk[m].hh=data[j][0];
		bentuk[m].bb=data[j+1][0];
		m++;
	}
	
	for(j=0;j<m;j++){//data di tbentuk telah masuk kesatu variable cek ajaa
		printf("%c , %c\n", bentuk[j].bb, bentuk[j].hh);
	}
	printf("berhasil\n");
	
	fclose(fsumber3);

	i=0;
	fscanf(fsumber4, "%s", &data[i]);//proses ambil data pertama dari tgerak
	while(data[i][0]!='#'){//tanda dummy sebagai batas akhir
		// printf("%s ->%d\n",data[i],i);
		i++;
		fscanf(fsumber4, "%s\n", &data[i]);//proses ambil data
	}
	
	n=0;// variable untuk indeks untuk gerak
	for(j=0;j<i;j=j+4){
		gerak[n].kode=data[j][0];//data  kode
		strcpy(xx[n],data[j+1]);//data x tampung dulu ke xx lalu nati ke x kan
		///////////////////////////////////////////konversi string to integer
		gerak[n].x=atoi(xx[n]);//x=kolom
		////////////////////////////////////////////////////
		strcpy(yy[n],data[j+2]);
		//////////////////////////////////////////////konversi string to integer
		gerak[n].y=atoi(yy[n]);//y=baris
		////////////////////////////////////////////////////////////////
		strcpy(gerak[n].r,data[j+3]);//data rotate
		n++;
	}
	for(j=0;j<n;j++){
		printf("%c , %d, %d , %s\n", gerak[j].kode, gerak[j].x, gerak[j].y ,gerak[j].r);//data di tbentuk telah masuk kesatu variable cek ajaa
	}
	printf("berhasil\n");
	fclose(fsumber4);
}

void simulasi(){
	// printf("%d, %d", m,n);
	system("cls");//tampil di layar kosong
	
	int i,j;
	int status=0;
	char sym;
	for(i=0;i<n;i++){// n adalah banyak data pada tgerak
		if(gerak[i].kode=='A'){
		// printf("A");
		// printf("%s\n", gerak[i].r);
		// wait(3);
		sym='*';
			for(j=0;j<m;j++){// m adalah banyak data pada tbentuk
				if(gerak[i].kode==bentuk[j].bb){
					sym=bentuk[j].hh;//simpan karaktek huruf yang akan tampil untuk kode bentuk A
				}
			}
			///////////////////////////////////////////////////////////////
			if(strcmp(gerak[i].r,"0")==0){//jika data rotate 0 derjat
				anol(i,sym);//lempar untuk menampilkan bentuk dengan kode bentuk A 0 derjat
				status=0;//status untuk masuk ke derjat 90 derjat
			}else{
				if(status==0){
					aka(i,sym);//lempar untuk menampilkan bentuk dengan kode bentuk A 90 derjat
					status=1;//status untuk masuk ke derjat 180 derjat
				}else if(status==1){
					aba(i,sym);//lempar untuk menampilkan bentuk dengan kode bentuk A 180 derjat
					status=2;//status untuk masuk ke derjat 270 derjat
				}else if(status==2){
					aki(i,sym);//lempar untuk menampilkan bentuk dengan kode bentuk A 270 derjat
					status=3;//status untuk masuk ke derjat 0 derjat
				}else{
					anol(i,sym);//lempar untuk menampilkan bentuk dengan kode bentuk A 0 derjat
					status=0;//status untuk masuk ke derjat 90 derjat
				}
			}
		}else if(gerak[i].kode=='B'){////////////////////////////////////////////////////////////////////////
		// printf("B");
		// printf("%s\n", gerak[i].r);
		// wait(3);
		sym='*';
			for(j=0;j<m;j++){
				if(gerak[i].kode==bentuk[j].bb){
					sym=bentuk[j].hh;//simpan karaktek huruf yang akan tampil untuk kode bentuk B
				}
			}
			/////////////////////////////////////
			if(strcmp(gerak[i].r,"0")==0){
				bnol(i,sym);
				status=0;
			}else{
				if(status==0){
					bka(i,sym);
					status=1;
				}else if(status==1){
					bnol(i,sym);
					status=2;
				}else if(status==2){
					bka(i,sym);
					status=3;
				}else{
					bnol(i,sym);
					status=0;
				}
			}
		}else if(gerak[i].kode=='C'){////////////////////////////////////////////////////////////////////////
		// printf("C");
		// printf("%s\n", gerak[i].r);
		// wait(3);
		sym='*';
			for(j=0;j<m;j++){
				if(gerak[i].kode==bentuk[j].bb){
					sym=bentuk[j].hh;//simpan karaktek huruf yang akan tampil untuk kode bentuk C
				}
			}
			/////////////////////////////////////
			if(strcmp(gerak[i].r,"0")==0){
				cnol(i,sym);
				status=0;
			}else{
				if(status==0){
					cka(i,sym);
					status=1;
				}else if(status==1){
					cba(i,sym);
					status=2;
				}else if(status==2){
					cki(i,sym);
					status=3;
				}else{
					cnol(i,sym);
					status=0;
				}
			}
		}else if(gerak[i].kode=='D'){////////////////////////////////////////////////////////////////////////
		// printf("D");
		// printf("%s\n", gerak[i].r);
		// wait(3);
		sym='*';
			for(j=0;j<m;j++){
				if(gerak[i].kode==bentuk[j].bb){
					sym=bentuk[j].hh;//simpan karaktek huruf yang akan tampil untuk kode bentuk D
				}
			}
			/////////////////////////////////////
			if(strcmp(gerak[i].r,"0")==0){
				dnol(i,sym);
				status=0;
			}else{
				if(status==0){
					dka(i,sym);
					status=1;
				}else if(status==1){
					dba(i,sym);
					status=2;
				}else if(status==2){
					dki(i,sym);
					status=3;
				}else{
					dnol(i,sym);
					status=0;
				}
			}
		}else if(gerak[i].kode=='E'){////////////////////////////////////////////////////////////////////////
		// printf("E");
		// printf("%s\n", gerak[i].r);
		// wait(3);
		sym='*';
			for(j=0;j<m;j++){
				if(gerak[i].kode==bentuk[j].bb){
					sym=bentuk[j].hh;//simpan karaktek huruf yang akan tampil untuk kode bentuk E
				}
			}
			/////////////////////////////////////
			if(strcmp(gerak[i].r,"0")==0){
				enol(i,sym);
				status=0;
			}else{
				if(status==0){
					eka(i,sym);
					status=1;
				}else if(status==1){
					enol(i,sym);
					status=2;
				}else if(status==2){
					eka(i,sym);
					status=3;
				}else{
					enol(i,sym);
					status=0;
				}
			}
		}else if(gerak[i].kode=='F'){////////////////////////////////////////////////////////////////////////
		// printf("F");
		// printf("%s\n", gerak[i].r);
		// wait(3);
		sym='*';
		for(j=0;j<m;j++){
				if(gerak[i].kode==bentuk[j].bb){
					sym=bentuk[j].hh;//simpan karaktek huruf yang akan tampil untuk kode bentuk F
				}
			}
			/////////////////////////////////////
				fnol(i,sym);
		}

	}
}
	
