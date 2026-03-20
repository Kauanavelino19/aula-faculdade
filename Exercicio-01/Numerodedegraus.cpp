//Número de degraus (arquivo)
#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;
int main(){
	float altura_cm, altura_m;
	int objet;
	
	ifstream entrada("entrada.txt");
	ofstream arquivo("degraus.txt");
	entrada >> altura_cm;
	entrada >> altura_m;
	altura_m = altura_m * 100;	
	objet = ceil(altura_m / altura_cm);
	arquivo << objet << endl;
	
	arquivo.close();
	return 0;
}
