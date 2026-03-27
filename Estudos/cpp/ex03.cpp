//Encontrar embalagem (com arquivos)

#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;
int main (){
	int numeroS;
	
	ifstream entrada("produto");
	ofstream saida ("caixa");
	
	entrada >> numeroS;
	
	numeroS = ((numeroS -1) / 6) + 1;
	
	saida << numeroS << endl;
	
	entrada.close();
	saida.close();
	
	return 0;	
}
