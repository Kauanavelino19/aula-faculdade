//Multiplicação (arquivo)

#include <iostream>
#include <fstream>
using namespace std;
int main (){
	int numero, soma, mult, unidade, dezena,centena; //criando variavel inteira
	cin >> numero; 
	 
	//fazendo conta com a centena, dezena e unidade
	unidade = numero % 10;  
	dezena = (numero / 10) % 10;
	centena = numero /100;
	mult = (centena * unidade) * dezena;
	ofstream saida("saida.txt");
	soma = centena + dezena + unidade;
	cout << soma << endl;
	
	saida << mult << endl;
	saida.close();
	
	return 0;	
}
