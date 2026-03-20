//Salário do encanador (arquivo)

#include <iostream>
#include <fstream>

using namespace std;
int main(){
	
	int diasTra;
	float valorLiqu, bruto;
	ifstream entrada("entrada");
	
	entrada >> diasTra;
	
	bruto = diasTra * 60;
	
	valorLiqu = bruto - (bruto * 0.08);
	
	
	
	
	ofstream saida("saida");
	
	saida << "R$ " << valorLiqu<< endl;
	
	saida.close();
	return 0;
}
