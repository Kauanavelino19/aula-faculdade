//A fortuna de Tony Stark (com arquivos)

#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;
int main(){
	ifstream entrada ("investimento");
	ofstream saida ("rendimento");
	float ValorDepositadoInicial, NumeroMeses, JurosMeses, MvalorAcumlado;
	
	entrada >> ValorDepositadoInicial;
	entrada >> JurosMeses;
	entrada >> NumeroMeses;

	MvalorAcumlado = ValorDepositadoInicial * sqrt(1 + JurosMeses), NumeroMeses;
	saida << MvalorAcumlado << endl;;
	
	entrada.close();
	saida.close();
	return 0;
}
