#include "header.h"

anol(int i,char sym){//posisi kode bentuk a dengan kondisi normal
	int a=0,b=0;
		a=gerak[i].x;
		b=gerak[i].y;//baris
			int p,q,r,s,p1,q1,r1,s1;
			//kondisi a 0 derjat
			p=b;
			q=b+1;
			r=b+1;
			s=b+1;
			p1=a+1;
			q1=a;
			r1=a+1;
			s1=a+2;
			int k,u,z;
		if(gerak[i+1].kode=='A'){//cek apakah data tgerak berikutnya A untuk batas rotate
			for(z=gerak[i].y;z<gerak[i+1].y;z++){
				for(k=0;k<pan;k++){
					for(u=0;u<l;u++){//kolom
						if((k==p && u==p1)||(k==q && u==q1)||(k==r && u==r1)||(k==s && u==s1)){//cek koor untuk print objek
							setcolor(3);//untuk warna objek A
							printf("%c",sym);
						}else{
							setcolor(7);
							// papan[k][u]='-';
							printf("-");
						}
					}	
					printf("\n");
				}
				p++;q++;r++;s++;//turun untuk koor objek
				wait(1);
				system("cls");
			}
		}else{//jika tidak maka objek turun sampai akhir
			for(z=gerak[i].y;z<pan;z++){
				for(k=0;k<pan;k++){
					for(u=0;u<l;u++){//kolom
						if((k==p && u==p1)||(k==q && u==q1)||(k==r && u==r1)||(k==s && u==s1)){
							setcolor(3);
							printf("%c",sym);
						}else{
							setcolor(7);
							// papan[k][u]='-';
							printf("-");
						}
					}	
					printf("\n");
				}
				p++;q++;r++;s++;
				wait(1);
				system("cls");
			}
		}
}

aka(int i,char sym){//posisi kode bentuk a dengan kondisi 90 derjat
	int a=0,b=0;
		a=gerak[i].x;
		b=gerak[i].y;
			int p,q,r,s,p1,q1,r1,s1;
			//kondisi a 90 derjat
			p=b;
			q=b+1;
			r=b+1;
			s=b+2;
			p1=a+1;
			q1=a+1;
			r1=a+2;
			s1=a+1;
		int k,u,z;
		if(gerak[i+1].kode=='A'){//cek apakah data tgerak berikutnya A untuk batas rotate
			for(z=gerak[i].y;z<gerak[i+1].y;z++){
				for(k=0;k<pan;k++){
					for(u=0;u<l;u++){//kolom
						if((k==p && u==p1)||(k==q && u==q1)||(k==r && u==r1)||(k==s && u==s1)){
							setcolor(3);
							printf("%c",sym);
						}else{
							setcolor(7);
							// papan[k][u]=' ';
							printf("-");
						}
					}		
					printf("\n");
				}
				p++;q++;r++;s++;
				wait(1);
				system("cls");
			}
		}else{
			for(z=gerak[i].y;z<pan;z++){
				for(k=0;k<pan;k++){
					for(u=0;u<l;u++){//kolom
						if((k==p && u==p1)||(k==q && u==q1)||(k==r && u==r1)||(k==s && u==s1)){
							setcolor(3);
							printf("%c",sym);
						}else{
							setcolor(7);
							// papan[k][u]='-';
							printf("-");
						}
					}	
					printf("\n");
				}
				p++;q++;r++;s++;
				wait(1);
				system("cls");
			}
		}
}

aba(int i, char sym){//posisi kode bentuk a dengan kondisi 180 derjat
	int a=0,b=0;
		a=gerak[i].x;
		b=gerak[i].y;
			int p,q,r,s,p1,q1,r1,s1;
			//kondisi a 180 derjat
			p=b+1;
			q=b+1;
			r=b+1;
			s=b+2;
			p1=a;
			q1=a+1;
			r1=a+2;
			s1=a+1;
		int k,u,z;
		if(gerak[i+1].kode=='A'){
			for(z=gerak[i].y;z<gerak[i+1].y;z++){
				for(k=0;k<pan;k++){
					for(u=0;u<l;u++){//kolom
						if((k==p && u==p1)||(k==q && u==q1)||(k==r && u==r1)||(k==s && u==s1)){
							setcolor(3);
							printf("%c",sym);
						}else{
							setcolor(7);
							// papan[k][u]=' ';
							printf("-");
						}
					}		
					printf("\n");
				}
				p++;q++;r++;s++;
				wait(1);
				system("cls");
			}
		}else{
			for(z=gerak[i].y;z<pan;z++){
				for(k=0;k<pan;k++){
					for(u=0;u<l;u++){//kolom
						if((k==p && u==p1)||(k==q && u==q1)||(k==r && u==r1)||(k==s && u==s1)){
							setcolor(3);
							printf("%c",sym);
						}else{
							setcolor(7);
							// papan[k][u]='-';
							printf("-");
						}
					}	
					printf("\n");
				}
				p++;q++;r++;s++;
				wait(1);
				system("cls");
			}
		}
}

aki(int i, char sym){//posisi kode bentuk a dengan kondisi 270 derjat
	int a=0,b=0;
		a=gerak[i].x;
		b=gerak[i].y;
			int p,q,r,s,p1,q1,r1,s1;
			//kondisi a 270 derjat
			p=b;
			q=b+1;
			r=b+1;
			s=b+2;
			p1=a+1;
			q1=a;
			r1=a+1;
			s1=a+1;
		int k,u,z;
		if(gerak[i+1].kode=='A'){
			for(z=gerak[i].y;z<gerak[i+1].y;z++){
				for(k=0;k<pan;k++){
					for(u=0;u<l;u++){//kolom
						if((k==p && u==p1)||(k==q && u==q1)||(k==r && u==r1)||(k==s && u==s1)){
							setcolor(3);
							printf("%c",sym);
						}else{
							setcolor(7);
							// papan[k][u]=' ';
							printf("-");
						}
					}		
					printf("\n");
				}
				p++;q++;r++;s++;
				wait(1);
				system("cls");
			}
		}else{
			for(z=gerak[i].y;z<pan;z++){
				for(k=0;k<pan;k++){
					for(u=0;u<l;u++){//kolom
						if((k==p && u==p1)||(k==q && u==q1)||(k==r && u==r1)||(k==s && u==s1)){
							setcolor(3);
							printf("%c",sym);
						}else{
							setcolor(7);
							// papan[k][u]='-';
							printf("-");
						}
					}	
					printf("\n");
				}
				p++;q++;r++;s++;
				wait(1);
				system("cls");
			}
		}
}






bnol(int i,char sym){//posisi kode bentuk b dengan kondisi normal, 180 derjat
	int a=0,b=0;
		a=gerak[i].x;
		b=gerak[i].y;//baris
			int p,q,r,p1,q1,r1;
			//kondisi b 0,180 derjat
			p=b;
			q=b+1;
			r=b+2;
			p1=a+1;
			q1=a+1;
			r1=a+1;
			int k,u,z;
		if(gerak[i+1].kode=='B'){
			for(z=gerak[i].y;z<gerak[i+1].y;z++){
				for(k=0;k<pan;k++){
					for(u=0;u<l;u++){//kolom
						if((k==p && u==p1)||(k==q && u==q1)||(k==r && u==r1)){
							setcolor(2);
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
		}else{
			for(z=gerak[i].y;z<pan;z++){
				for(k=0;k<pan;k++){
					for(u=0;u<l;u++){//kolom
						if((k==p && u==p1)||(k==q && u==q1)||(k==r && u==r1)){
							setcolor(2);
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

bka(int i,char sym){//posisi kode bentuk b dengan kondisi 90, 270 derjat
	int a=0,b=0;
		a=gerak[i].x;
		b=gerak[i].y;
			int p,q,r,p1,q1,r1;
			//kondisi b 90,270 derjat
			p=b+1;
			q=b+1;
			r=b+1;
			p1=a+1;
			q1=a+2;
			r1=a+3;
		int k,u,z;
		if(gerak[i+1].kode=='B'){
			for(z=gerak[i].y;z<gerak[i+1].y;z++){
				for(k=0;k<pan;k++){
					for(u=0;u<l;u++){//kolom
						if((k==p && u==p1)||(k==q && u==q1)||(k==r && u==r1)){
							setcolor(2);
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
							setcolor(2);
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





cnol(int i,char sym){//posisi kode bentuk c dengan kondisi normal
	int a=0,b=0;
		a=gerak[i].x;
		b=gerak[i].y;//baris
			int p,q,r,s,p1,q1,r1,s1;
			//kondisi c 0 derjat
			p=b;
			q=b+1;
			r=b+1;
			s=b+1;
			p1=a+2;
			q1=a;
			r1=a+1;
			s1=a+2;
			int k,u,z;
		if(gerak[i+1].kode=='C'){
			for(z=gerak[i].y;z<gerak[i+1].y;z++){
				for(k=0;k<pan;k++){
					for(u=0;u<l;u++){//kolom
						if((k==p && u==p1)||(k==q && u==q1)||(k==r && u==r1)||(k==s && u==s1)){
							setcolor(4);
							printf("%c",sym);
						}else{
							setcolor(7);
							// papan[k][u]='-';
							printf("-");
						}
					}	
					printf("\n");
				}
				p++;q++;r++;s++;
				wait(1);
				system("cls");
			}
		}else{
			for(z=gerak[i].y;z<pan;z++){
				for(k=0;k<pan;k++){
					for(u=0;u<l;u++){//kolom
						if((k==p && u==p1)||(k==q && u==q1)||(k==r && u==r1)||(k==s && u==s1)){
							setcolor(4);
							printf("%c",sym);
						}else{
							setcolor(7);
							// papan[k][u]='-';
							printf("-");
						}
					}	
					printf("\n");
				}
				p++;q++;r++;s++;
				wait(1);
				system("cls");
			}
		}
}

cka(int i,char sym){//posisi kode bentuk c dengan kondisi 90 derjat
	int a=0,b=0;
		a=gerak[i].x;
		b=gerak[i].y;
			int p,q,r,s,p1,q1,r1,s1;
			//kondisi c 90 derjat
			p=b;
			q=b+1;
			r=b+2;
			s=b+2;
			p1=a+1;
			q1=a+1;
			r1=a+1;
			s1=a+2;
		int k,u,z;
		if(gerak[i+1].kode=='C'){
			for(z=gerak[i].y;z<gerak[i+1].y;z++){
				for(k=0;k<pan;k++){
					for(u=0;u<l;u++){//kolom
						if((k==p && u==p1)||(k==q && u==q1)||(k==r && u==r1)||(k==s && u==s1)){
							setcolor(4);
							printf("%c",sym);
						}else{
							setcolor(7);
							// papan[k][u]=' ';
							printf("-");
						}
					}		
					printf("\n");
				}
				p++;q++;r++;s++;
				wait(1);
				system("cls");
			}
		}else{
			for(z=gerak[i].y;z<pan;z++){
				for(k=0;k<pan;k++){
					for(u=0;u<l;u++){//kolom
						if((k==p && u==p1)||(k==q && u==q1)||(k==r && u==r1)||(k==s && u==s1)){
							setcolor(4);
							printf("%c",sym);
						}else{
							setcolor(7);
							// papan[k][u]='-';
							printf("-");
						}
					}	
					printf("\n");
				}
				p++;q++;r++;s++;
				wait(1);
				system("cls");
			}
		}
}

cba(int i, char sym){//posisi kode bentuk c dengan kondisi 180 derjat
	int a=0,b=0;
		a=gerak[i].x;
		b=gerak[i].y;
			int p,q,r,s,p1,q1,r1,s1;
			//kondisi c 180 derjat
			p=b+1;
			q=b+1;
			r=b+1;
			s=b+2;
			p1=a;
			q1=a+1;
			r1=a+2;
			s1=a;
		int k,u,z;
		if(gerak[i+1].kode=='C'){
			for(z=gerak[i].y;z<gerak[i+1].y;z++){
				for(k=0;k<pan;k++){
					for(u=0;u<l;u++){//kolom
						if((k==p && u==p1)||(k==q && u==q1)||(k==r && u==r1)||(k==s && u==s1)){
							setcolor(4);
							printf("%c",sym);
						}else{
							setcolor(7);
							// papan[k][u]=' ';
							printf("-");
						}
					}		
					printf("\n");
				}
				p++;q++;r++;s++;
				wait(1);
				system("cls");
			}
		}else{
			for(z=gerak[i].y;z<pan;z++){
				for(k=0;k<pan;k++){
					for(u=0;u<l;u++){//kolom
						if((k==p && u==p1)||(k==q && u==q1)||(k==r && u==r1)||(k==s && u==s1)){
							setcolor(4);
							printf("%c",sym);
						}else{
							setcolor(7);
							// papan[k][u]='-';
							printf("-");
						}
					}	
					printf("\n");
				}
				p++;q++;r++;s++;
				wait(1);
				system("cls");
			}
		}
}

cki(int i, char sym){//posisi kode bentuk c dengan kondisi 270 derjat
	int a=0,b=0;
		a=gerak[i].x;
		b=gerak[i].y;
			int p,q,r,s,p1,q1,r1,s1;
			//kondisi c 270 derjat
			p=b;
			q=b;
			r=b+1;
			s=b+2;
			p1=a;
			q1=a+1;
			r1=a+1;
			s1=a+1;
		int k,u,z;
		if(gerak[i+1].kode=='C'){
			for(z=gerak[i].y;z<gerak[i+1].y;z++){
				for(k=0;k<pan;k++){
					for(u=0;u<l;u++){//kolom
						if((k==p && u==p1)||(k==q && u==q1)||(k==r && u==r1)||(k==s && u==s1)){
							setcolor(4);
							printf("%c",sym);
						}else{
							setcolor(7);
							// papan[k][u]=' ';
							printf("-");
						}
					}		
					printf("\n");
				}
				p++;q++;r++;s++;
				wait(1);
				system("cls");
			}
		}else{
			for(z=gerak[i].y;z<pan;z++){
				for(k=0;k<pan;k++){
					for(u=0;u<l;u++){//kolom
						if((k==p && u==p1)||(k==q && u==q1)||(k==r && u==r1)||(k==s && u==s1)){
							setcolor(4);
							printf("%c",sym);
						}else{
							setcolor(7);
							// papan[k][u]='-';
							printf("-");
						}
					}	
					printf("\n");
				}
				p++;q++;r++;s++;
				wait(1);
				system("cls");
			}
		}
}




