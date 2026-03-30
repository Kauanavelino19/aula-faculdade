//Distância entre dois Pontos (arquivo)
#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;
int main (){
	double x1, x2, y1, y2, D, D1, D2; //Criando variaveis
	
	ifstream entrada("entrada.txt");//Criando variavel do tipo de entrada

	//lendo arquivo de entrada 
	entrada >> x1;
	entrada >> y1;
	entrada >> x2;
	entrada >> y2;
	//somando as variavel com essa formula (D= raiz quadrada de (x2 - x1)^2 + (y2 - y1)^2)
	D1 = pow((x2 - x1),2);
	D2 = pow((y2 -y1),2);
	D = sqrt(D1 + D2);
	//saida padrão
	cout << D << endl;
	entrada.close();
	
	return 0;
}
