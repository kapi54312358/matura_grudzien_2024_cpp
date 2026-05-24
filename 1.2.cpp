#include <iostream>

using namespace std;

int ciag(int n){
	int i=1;
	long long z_d=0, pot=1;
	
	while(n>0){
		z_d+=n%2*pot;
		pot*=10;
		n/=2;
	}
	
	while(z_d>0){
		if(z_d%10==1)
			cout<<i<<" ";
		z_d/=10;
		i++;
	}
	
	return 0;
}

int main(int argc, char** argv) {
	ciag(19);
	return 0;
}
