#include<iostream>
#include<locale.h>

using namespace std;

int main () {
	
	setlocale(LC_ALL , "Turkish") ;
	
	cout<<"*************************************************MATR�S HESAP MAK�NES�**************************************************"<<endl;
	cout<<"                                             (��k�� yapmak i�in 0 yaz�n�z)" <<endl<<endl<<endl;
	
	while(true) {
	
	
	setlocale(LC_ALL , "Turkish");
	
	int a,b,c,d,e,f,g;
	
	cout<<"��LEMLER"<<endl<<endl;
	
	cout<<"1 --> TOPLAMA"<<endl;
	cout<<"2 --> �IKARMA"<<endl;
	cout<<"3 --> �ARPMA"<<endl;

	cout<<endl<<endl;
	cout<<"YAPMAK �STED���N�Z ��LEM� SE��N�Z : ";
	cin>>e;
	
	cout<<endl;
	
	if(e == 0) {
		
		cout<<"Sistemden ��k�� yap�l�yor..." ;
		
		break;
	}
	
	cout<<"1. MATR�S"<<endl<<endl;
	
	cout<<"matrisimizin sat�r b�y�kl���n� giriniz : ";
	cin>>a;
	
	cout<<"matrisimizin s�tun b�y�kl���n� giriniz : ";
	cin>>b;
	
	int matris[a][b];
	
	cout<<endl;

	for(int i=0;i<a;i++){
		for(int j=0;j<b;j++){
			
			cout<<endl;
			cout<<"matrisimizin "<<i+1<<". sat�r "<<j+1<<". s�tundaki eleman�n� giriniz : ";
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
	
	cout<<"2. MATR�S"<<endl<<endl;
	
	cout<<"matrisimizin sat�r b�y�kl���n� giriniz : ";
	cin>>c;
	
	cout<<"matrisimizin s�tun b�y�kl���n� giriniz : ";
	cin>>d;
	
	int matris2[c][d];
	
	cout<<endl;
	
	for(int k=0;k<c;k++){
		for(int l=0;l<d;l++){
			
			cout<<endl;
			cout<<"matrisimizin "<<k+1<<". sat�r "<<l+1<<". s�tundaki eleman�n� giriniz : ";
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
				
			cout<<"G�R�LEN �K� MATR�S�N SATIR VE S�TUN B�Y�KL��� E��T DE��LD�R";
			
			
			
			}
		
		}	
	}	
	
	cout<<"SONU�"<<endl<<endl;
	
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
					
					cout<<"G�R�LEN �K� MATR�S�N� SATIR VE S�TUN B�Y�KL��� E��T DE��LD�R";
					
					
				}
			}
		}
		
		cout<<"SONU� : "<<endl<<endl;
		
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
					
				cout<<"G�R�LEN B�R�NC� MATR�S�N S�TUN SAYISI �K�NC� MATR�S�N SATIR SAYISINA E��T DE��LD�R";
			
			
			}
				}
			}
			
			
		}
		
		cout<<"SONU� "<<endl<<endl;
		
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
	
	
	
	
