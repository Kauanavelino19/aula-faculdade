//Leitura Básica de Arquivos

#include <iostream>
#include <fstream>
#include <string>

using namespace std;
int main (){
	string ler, nomeArquivo;
	cin >> nomeArquivo;
	ifstream entrada(nomeArquivo);

	entrada >> ler;
	cout << ler << endl;
	
	entrada.close();
	
return 0;	
}
