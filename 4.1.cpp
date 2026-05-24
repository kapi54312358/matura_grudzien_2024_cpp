#include <iostream>
#include <fstream>

using namespace std;

int const n=5000;

int main(int argc, char** argv) {
	ifstream we("C:/cpp/prostokaty.txt");
	int i=0, max=0, min=1000000;
	int wysokosci[n], szerokosci[n], pola[n];
	
	for(i=0; i<n; i++){
		we>>wysokosci[i];
		we>>szerokosci[i];
		pola[i]=wysokosci[i]*szerokosci[i];
	}

	for(i=0; i<n; i++){
		if(pola[i]>max){
			max=pola[i];
		}
		if(pola[i]<min){
			min=pola[i];
		}
	}
	
	cout<<"najmniejsze pole to: "<<min<<endl<<"najwieksze pole to: "<<max<<endl;	

	return 0;
}
