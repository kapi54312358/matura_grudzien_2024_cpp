#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int const n=2000;

void sito(int *A){
	int i=0, j=0, rozmiar=9999;
	bool B[rozmiar];
	
	for(i=0; i<rozmiar; i++){
		B[i]=1;
	}
	
	B[0]=0;
	B[1]=0;
	
	for(i=2; i<rozmiar; i++){
		for(j=i+i; j<rozmiar; j+=i){
			B[j]=0;
		}
	}
	
	j=0;
	for(i=0; i<rozmiar; i++){
		if(B[i]){
			A[j]=i;
			j++;
		}
	}
}

bool czy_5_dziel(int a, int *A){
	int i=0, w=0;
	
	for(i=0; i<1229; i++){
		if(a%A[i]==0){
			w++;
		}
		if(w==5)
			return 1;
	}
	
	return 0;
	
}

int main(int argc, char** argv) {
	ifstream we("C:/cpp/liczby.txt");
	int i=0;
	int kwadraty[n], l_pierwsze[1229];
	
	for(i=0; i<n; i++){
		we>>kwadraty[i];
	}
	
	sito(l_pierwsze);
	
	
	for(i=0; i<n; i++){
		if(czy_5_dziel(kwadraty[i], l_pierwsze)){
			cout<<kwadraty[i]<<endl;
		}
	}
	
	return 0;
}
