#include<iostream>
#include<locale.h>

using namespace std;

int main () {
	
	setlocale(LC_ALL , "Turkish") ;
	
	cout<<"*************************************************MATRÝS HESAP MAKÝNESÝ**************************************************"<<endl;
	cout<<"                                             (çýkýþ yapmak için 0 yazýnýz)" <<endl<<endl<<endl;
	
	while(true) {
	
	
	setlocale(LC_ALL , "Turkish");
	
	int a,b,c,d,e,f,g;
	
	cout<<"ÝÞLEMLER"<<endl<<endl;
	
	cout<<"1 --> TOPLAMA"<<endl;
	cout<<"2 --> ÇIKARMA"<<endl;
	cout<<"3 --> ÇARPMA"<<endl;

	cout<<endl<<endl;
	cout<<"YAPMAK ÝSTEDÝÐÝNÝZ ÝÞLEMÝ SEÇÝNÝZ : ";
	cin>>e;
	
	cout<<endl;
	
	if(e == 0) {
		
		cout<<"Sistemden çýkýþ yapýlýyor..." ;
		
		break;
	}
	
	cout<<"1. MATRÝS"<<endl<<endl;
	
	cout<<"matrisimizin satýr büyüklüðünü giriniz : ";
	cin>>a;
	
	cout<<"matrisimizin sütun büyüklüðünü giriniz : ";
	cin>>b;
	
	int matris[a][b];
	
	cout<<endl;

	for(int i=0;i<a;i++){
		for(int j=0;j<b;j++){
			
			cout<<endl;
			cout<<"matrisimizin "<<i+1<<". satýr "<<j+1<<". sütundaki elemanýný giriniz : ";
			cin>>matris[i][j];
		}
	}
	cout<<endl;
	
	for(int i=0;i<a;i++){
		for(int j=0;j<b;j++){
			
			cout<<matris[i][j]<<" ";
		}
		cout<<endl;
	}
	
	cout<<endl;
	
	cout<<"2. MATRÝS"<<endl<<endl;
	
	cout<<"matrisimizin satýr büyüklüðünü giriniz : ";
	cin>>c;
	
	cout<<"matrisimizin sütun büyüklüðünü giriniz : ";
	cin>>d;
	
	int matris2[c][d];
	
	cout<<endl;
	
	for(int k=0;k<c;k++){
		for(int l=0;l<d;l++){
			
			cout<<endl;
			cout<<"matrisimizin "<<k+1<<". satýr "<<l+1<<". sütundaki elemanýný giriniz : ";
			cin>>matris2[k][l];
		}
	}
	
	cout<<endl;
	
	for(int k=0;k<c;k++){
		for(int l=0;l<d;l++){
			
			cout<<matris2[k][l]<<" ";
		}
		cout<<endl;
	}

	cout<<endl<<endl;
	
	
	
	if(e==1){
	
	int matristop[a][b];
	
	for(int i=0;i<a;i++){
		for(int j=0;j<b;j++){
			
			if(a==c&&b==d){
			
			matristop[i][j]=matris[i][j]+matris2[i][j];
			}
			else{
				
			cout<<"GÝRÝLEN ÝKÝ MATRÝSÝN SATIR VE SÜTUN BÜYÜKLÜÐÜ EÞÝT DEÐÝLDÝR";
			
			
			
			}
		
		}	
	}	
	
	cout<<"SONUÇ"<<endl<<endl;
	
	for(int i=0;i<a;i++){
		for(int j=0;j<b;j++){
			
		cout<<matristop[i][j]<<" ";
			
		}
		cout<<endl;
	}
	cout<<endl<<endl<<endl<<endl;
	cout<<"************************************************************************************************************************";
	
	}
	
	
	if(e==2) {
		
		int matriscik[a][b] ;
		
		for(int i=0;i<a;i++){
			for(int j=0;j<b;j++){
				
				if(a==c&&b==d){
					
				matriscik[i][j] = matris[i][j] - matris2[i][j];
				}
				
				else {
					
					cout<<"GÝRÝLEN ÝKÝ MATRÝSÝNÝ SATIR VE SÜTUN BÜYÜKLÜÐÜ EÞÝT DEÐÝLDÝR";
					
					
				}
			}
		}
		
		cout<<"SONUÇ : "<<endl<<endl;
		
		for(int i=0;i<a;i++){
			for(int j=0;j<b;j++){
				
				cout<<matriscik[i][j]<<" ";
								
			}
			cout<<endl;
		} 
		
		cout<<endl<<endl<<endl<<endl;
		cout<<"************************************************************************************************************************";
}
	
	if(e==3){
		
		int matriscap[a][b];
		
		for(int i=0;i<a;i++){
			for(int j=0;j<d;j++){
				
				matriscap[i][j]=0;
				
				for(int k=0;k<b;k++){
				
				if(b==c){
				matriscap[i][j]=matris[i][k]*matris2[k][j]+matriscap[i][j];
			
				
			}
				else{
					
				cout<<"GÝRÝLEN BÝRÝNCÝ MATRÝSÝN SÜTUN SAYISI ÝKÝNCÝ MATRÝSÝN SATIR SAYISINA EÞÝT DEÐÝLDÝR";
			
			
			}
				}
			}
			
			
		}
		
		cout<<"SONUÇ "<<endl<<endl;
		
		for(int i=0;i<a;i++){
			for(int j=0;j<d;j++){
				
				cout<<matriscap[i][j]<<" ";
			}
			cout<<endl;
		}
		cout<<endl<<endl<<endl<<endl;
		cout<<"************************************************************************************************************************";
	}
	
	
	
}

}
	
	
	
	
