#include <iostream>
#include <fstream>

using namespace std;

int const n=2000;

int posortowana_rosnaco(int a){
	int i=0, j=0, temp=0, w=0, pot=1;
	int T[4];
	
	for(i=3; i>=0; i--){
		T[i]=a%10;
		a/=10;
	}
	
	for(i=0; i<4; i++){
		for(j=3; j>=1; j--){
			if(T[j]>T[j-1]){
				temp=T[j-1];
				T[j-1]=T[j];
				T[j]=temp;
			}
		}
	}
	
	for(i=0; i<4; i++){
		w+=T[i]*pot;
		pot*=10;
	}
	
	return w;
}

int posortowana_malejaco(int a){
	int i=0, j=0, temp=0, w=0, pot=1;
	int T[4];
	
	for(i=3; i>=0; i--){
		T[i]=a%10;
		a/=10;
	}
	
	for(i=0; i<4; i++){
		for(j=3; j>=1; j--){
			if(T[j]<T[j-1]){
				temp=T[j-1];
				T[j-1]=T[j];
				T[j]=temp;
			}
		}
	}
	
	for(i=0; i<4; i++){
		w+=T[i]*pot;
		pot*=10;
	}
	
	return w;
}
int main(int argc, char** argv) {
	ifstream we("C:/cpp/liczby.txt");
	int i=0, roznica=0, wieksze=0, mniejsze=0, rowne=0;
	int kwadraty[n];
	
	for(i=0; i<n; i++){
		we>>kwadraty[i];
	}
	
	
	for(i=0; i<n; i++){
		roznica=posortowana_malejaco(kwadraty[i])-posortowana_rosnaco(kwadraty[i]);
		if(roznica>kwadraty[i]){
			wieksze++;
		}
		if(roznica<kwadraty[i]){
			mniejsze++;
		}
		if(roznica==kwadraty[i]){
			rowne++;
			cout<<kwadraty[i]<<endl;
		}
	}
	
	cout<<"rownych: "<<rowne<<endl<<"mniejszych: "<<mniejsze<<endl<<"wiekszych: "<<wieksze;
	
	return 0;
}
