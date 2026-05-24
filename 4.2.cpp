#include <iostream>
#include <fstream>

using namespace std;

int const n=5000;

int main(int argc, char** argv) {
	ifstream we("C:/cpp/prostokaty.txt");
	int i=0, s1=0, s2=0, h1=0, h2=0, seria=1, max_seria=0, max_s=0, max_h=0;
	int wysokosci[n], szerokosci[n];
	
	for(i=0; i<n; i++){
		we>>wysokosci[i];
		we>>szerokosci[i];
	}

	for(i=1; i<n; i++){
		h1=wysokosci[i-1];
		h2=wysokosci[i];
		s1=szerokosci[i-1];
		s2=szerokosci[i];
		
		if(s1>=s2 && h1>=h2){
			seria++;
			if(seria>max_seria){
				max_seria=seria;
				max_s=s2;
				max_h=h2;
			}
		}
		else
			seria=1;
	}
	
	cout<<max_seria<<" "<<max_h<<" "<<max_s;

	return 0;
}
