#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int const n=2000;

int main(int argc, char** argv) {
	ifstream we("C:/cpp/liczby.txt");
	int i=0, pom=0, licznik=0;
	int kwadraty[n], calkowite[n];
	
	for(i=0; i<n; i++){
		we>>kwadraty[i];
		calkowite[i]=0;
	}
	
	for(i=0; i<n; i++){
		pom=sqrt(kwadraty[i]);
		if(sqrt(kwadraty[i])-pom==0){
			calkowite[licznik]=kwadraty[i];
			licznik++;	
		}
	}
	
	cout<<licznik<<" "<<calkowite[0];	
  
	return 0;
}
