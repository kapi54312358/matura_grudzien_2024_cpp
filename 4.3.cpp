#include <iostream>
#include <fstream>

using namespace std;

int const n=5000;

int main(int argc, char** argv) {
	ifstream we("C:/cpp/prostokaty.txt");
	int i=0, j=0, k=0, l=0, m=0, h1=0, suma=0, max2=0, max3=0, max5=0;
	int wysokosci[n], szerokosci[n];
	
	for(i=0; i<n; i++){
		we>>wysokosci[i];
		we>>szerokosci[i];
	}

	for(i=0; i<n; i++){
		h1=wysokosci[i];
		for(j=i+1; j<n; j++){
			if(wysokosci[j]==h1){
				suma=szerokosci[i]+szerokosci[j];
				if(suma>max2)
					max2=suma;
			}
		}
	}
	cout<<max2<<endl;
	
	for(i=0; i<n; i++){
		h1=wysokosci[i];
		for(j=i+1; j<n; j++){
			if(wysokosci[j]==h1){
				for(k=j+1; k<n; k++){
					if(wysokosci[k]==h1){
						suma=szerokosci[i]+szerokosci[j]+szerokosci[k];
						if(suma>max3)
							max3=suma;
					}
				}	
			}
		}
	}
	cout<<max3<<endl;
	
	for(i=0; i<n; i++){
		h1=wysokosci[i];
		for(j=i+1; j<n; j++){
			if(wysokosci[j]==h1){
				for(k=j+1; k<n; k++){
					if(wysokosci[k]==h1){
						for(l=k+1; l<n; l++){
							if(wysokosci[l]==h1){
								for(m=l+1; m<n; m++){
									if(wysokosci[m]==h1){
										suma=szerokosci[i]+szerokosci[j]+szerokosci[k]+szerokosci[l]+szerokosci[m];
										if(suma>max5)
											max5=suma;
									}
								}
							}
						}
					}
				}	
			}
		}
	}
	cout<<max5;
	
	return 0;
}
