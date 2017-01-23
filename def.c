#include "header.h"

dnol(int i,char sym){//posisi kode bentuk c dengan kondisi normal
	int a=0,b=0;
		a=gerak[i].x;
		b=gerak[i].y;//baris
			int p,q,r,p1,q1,r1;
			//kondisi d 0 derjat
			p=b;
			q=b+1;
			r=b+1;
			p1=a;
			q1=a;
			r1=a+1;
			int k,u,z;
		if(gerak[i+1].kode=='D'){//cek apakah data tgerak berikutnya D untuk batas rotate
			for(z=gerak[i].y;z<gerak[i+1].y;z++){
				for(k=0;k<pan;k++){
					for(u=0;u<l;u++){//kolom
						if((k==p && u==p1)||(k==q && u==q1)||(k==r && u==r1)){
							setcolor(5);//untuk warna objek D
							printf("%c",sym);
						}else{
							setcolor(7);
							// papan[k][u]='-';
							printf("-");
						}
					}	
					printf("\n");
				}
				p++;q++;r++;//turun untuk koor objek
				wait(1);
				system("cls");
			}
		}else{//jika tidak maka objek turun sampai akhir
			for(z=gerak[i].y;z<pan;z++){
				for(k=0;k<pan;k++){
					for(u=0;u<l;u++){//kolom
						if((k==p && u==p1)||(k==q && u==q1)||(k==r && u==r1)){
							setcolor(5);
							printf("%c",sym);
						}else{
							setcolor(7);
							// papan[k][u]='-';
							printf("-");
						}
					}	
					printf("\n");
				}
				p++;q++;r++;
				wait(1);
				system("cls");
			}
		}
}

dka(int i,char sym){//posisi kode bentuk c dengan kondisi 90 derjat
	int a=0,b=0;
		a=gerak[i].x;
		b=gerak[i].y;
			int p,q,r,p1,q1,r1;
				//kondisi d 90 derjat
			p=b;
			q=b;
			r=b+1;
			p1=a;
			q1=a+1;
			r1=a;
		int k,u,z;
		if(gerak[i+1].kode=='D'){
			for(z=gerak[i].y;z<gerak[i+1].y;z++){
				for(k=0;k<pan;k++){
					for(u=0;u<l;u++){//kolom
						if((k==p && u==p1)||(k==q && u==q1)||(k==r && u==r1)){
							setcolor(5);
							printf("%c",sym);
						}else{
							setcolor(7);
							// papan[k][u]=' ';
							printf("-");
						}
					}		
					printf("\n");
				}
				p++;q++;r++;
				wait(1);
				system("cls");
			}
		}else{
			for(z=gerak[i].y;z<pan;z++){
				for(k=0;k<pan;k++){
					for(u=0;u<l;u++){//kolom
						if((k==p && u==p1)||(k==q && u==q1)||(k==r && u==r1)){
							setcolor(5);
							printf("%c",sym);
						}else{
							setcolor(7);
							// papan[k][u]='-';
							printf("-");
						}
					}	
					printf("\n");
				}
				p++;q++;r++;
				wait(1);
				system("cls");
			}
		}
}

dba(int i, char sym){//posisi kode bentuk c dengan kondisi 180 derjat
	int a=0,b=0;
		a=gerak[i].x;
		b=gerak[i].y;
			int p,q,r,p1,q1,r1;
				//kondisi d 180 derjat
			p=b;
			q=b;
			r=b+1;
			p1=a;
			q1=a+1;
			r1=a+1;
		int k,u,z;
		if(gerak[i+1].kode=='D'){
			for(z=gerak[i].y;z<gerak[i+1].y;z++){
				for(k=0;k<pan;k++){
					for(u=0;u<l;u++){//kolom
						if((k==p && u==p1)||(k==q && u==q1)||(k==r && u==r1)){
							setcolor(5);
							printf("%c",sym);
						}else{
							setcolor(7);
							// papan[k][u]=' ';
							printf("-");
						}
					}		
					printf("\n");
				}
				p++;q++;r++;
				wait(1);
				system("cls");
			}
		}else{
			for(z=gerak[i].y;z<pan;z++){
				for(k=0;k<pan;k++){
					for(u=0;u<l;u++){//kolom
						if((k==p && u==p1)||(k==q && u==q1)||(k==r && u==r1)){
							setcolor(5);
							printf("%c",sym);
						}else{
							setcolor(7);
							// papan[k][u]='-';
							printf("-");
						}
					}	
					printf("\n");
				}
				p++;q++;r++;
				wait(1);
				system("cls");
			}
		}
}

dki(int i, char sym){//posisi kode bentuk c dengan kondisi 270 derjat
	int a=0,b=0;
		a=gerak[i].x;
		b=gerak[i].y;
			int p,q,r,p1,q1,r1;
				//kondisi d 270 derjat
			p=b;
			q=b+1;
			r=b+1;
			p1=a+1;
			q1=a;
			r1=a+1;
		int k,u,z;
		if(gerak[i+1].kode=='D'){
			for(z=gerak[i].y;z<gerak[i+1].y;z++){
				for(k=0;k<pan;k++){
					for(u=0;u<l;u++){//kolom
						if((k==p && u==p1)||(k==q && u==q1)||(k==r && u==r1)){
							setcolor(5);
							printf("%c",sym);
						}else{
							setcolor(7);
							// papan[k][u]=' ';
							printf("-");
						}
					}		
					printf("\n");
				}
				p++;q++;r++;
				wait(1);
				system("cls");
			}
		}else{
			for(z=gerak[i].y;z<pan;z++){
				for(k=0;k<pan;k++){
					for(u=0;u<l;u++){//kolom
						if((k==p && u==p1)||(k==q && u==q1)||(k==r && u==r1)){
							setcolor(5);
							printf("%c",sym);
						}else{
							setcolor(7);
							// papan[k][u]='-';
							printf("-");
						}
					}	
					printf("\n");
				}
				p++;q++;r++;
				wait(1);
				system("cls");
			}
		}
}




enol(int i,char sym){//posisi kode bentuk c dengan kondisi normal, 180 derjat
	int a=0,b=0;
		a=gerak[i].x;
		b=gerak[i].y;//baris
			int p,q,p1,q1;
			//kondisi e 0,180 derjat
			p=b;
			q=b+1;
			p1=a;
			q1=a;
			int k,u,z;
		if(gerak[i+1].kode=='E'){
			for(z=gerak[i].y;z<gerak[i+1].y;z++){
				for(k=0;k<pan;k++){
					for(u=0;u<l;u++){//kolom
						if((k==p && u==p1)||(k==q && u==q1)){
							setcolor(6);
							printf("%c",sym);
						}else{
							setcolor(7);
							// papan[k][u]='-';
							printf("-");
						}
					}	
					printf("\n");
				}
				p++;q++;
				wait(1);
				system("cls");
			}
		}else{
			for(z=gerak[i].y;z<pan;z++){
				for(k=0;k<pan;k++){
					for(u=0;u<l;u++){//kolom
						if((k==p && u==p1)||(k==q && u==q1)){
							setcolor(6);
							printf("%c",sym);
						}else{
							setcolor(7);
							// papan[k][u]='-';
							printf("-");
						}
					}	
					printf("\n");
				}
				p++;q++;
				wait(1);
				system("cls");
			}
		}
}

eka(int i,char sym){//posisi kode bentuk c dengan kondisi 90, 270 derjat
	int a=0,b=0;
		a=gerak[i].x;
		b=gerak[i].y;
			int p,q,r,p1,q1,r1;
			//kondisi e 90,270 derjat
			p=b+1;
			q=b+1;
			p1=a;
			q1=a+1;
		int k,u,z;
		if(gerak[i+1].kode=='E'){
			for(z=gerak[i].y;z<gerak[i+1].y;z++){
				for(k=0;k<pan;k++){
					for(u=0;u<l;u++){//kolom
						if((k==p && u==p1)||(k==q && u==q1)){
							setcolor(6);
							printf("%c",sym);
						}else{
							setcolor(7);
							// papan[k][u]=' ';
							printf("-");
						}
					}		
					printf("\n");
				}
				p++;q++;r++;
				wait(1);
				system("cls");
			}
		}else{
			for(z=gerak[i].y;z<pan;z++){
				for(k=0;k<pan;k++){
					for(u=0;u<l;u++){//kolom
						if((k==p && u==p1)||(k==q && u==q1)||(k==r && u==r1)){
							setcolor(6);
							printf("%c",sym);
						}else{
							setcolor(7);
							// papan[k][u]='-';
							printf("-");
						}
					}	
					printf("\n");
				}
				p++;q++;r++;
				wait(1);
				system("cls");
			}
		}
}



fnol(int i, char sym){//posisi kode bentuk c dengan kondisi normal,90,180,270 derjat
int a=0,b=0;
		//kondisi f 0,90,180,270 derjat
		a=gerak[i].x;
		b=gerak[i].y;
		int k,u,z;
		if(gerak[i+1].kode=='F'){
			for(z=gerak[i].y;z<gerak[i+1].y;z++){
				for(k=0;k<pan;k++){
					for(u=0;u<l;u++){//kolom
						if((k==b && u==a)){
							setcolor(8);
							printf("%c",sym);
						}else{
							setcolor(7);
							// papan[k][u]=' ';
							printf("-");
						}
					}		
					printf("\n");
				}
				b++;
				wait(1);
				system("cls");
			}
		}else{
			for(z=gerak[i].y;z<pan;z++){
				for(k=0;k<pan;k++){
					for(u=0;u<l;u++){//kolom
						if((k==b && u==a)){
							setcolor(8);
							printf("%c",sym);
						}else{
							setcolor(7);
							// papan[k][u]='-';
							printf("-");
						}
					}	
					printf("\n");
				}
				b++;
				wait(1);
				system("cls");
			}
		}
}

