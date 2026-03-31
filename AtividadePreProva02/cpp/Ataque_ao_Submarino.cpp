#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;
int main (){
	ifstream entrada("ataque.txt");
	
	double X, Y, I, J, D;
	
	
	
	entrada >> I;
	entrada >> J;
	entrada >> X;
	entrada >> Y;
	
	
	D = sqrt(pow(X - I , 2) + (pow(J - Y , 2)))	;
	//M = pow(D,1) / pow(D,2);
	
	if(D < 300){
		cout << "ACERTOU" << endl;
		} else if(D > 300){
			cout << D << endl;
		}else{
			cout << "erro ao fazer estrutura condicional"  << endl;
			}
	return 0;
}
