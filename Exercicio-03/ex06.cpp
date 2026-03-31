#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main(){
	ifstream entrada;
	float n1, n2, n3, n4, n5, n6, n7, n8, M;
	entrada.open("dados.txt");
	entrada >> n1 >> n2 >> n3 >> n4 >> n5 >> n6 >> n7 >> n8;
	
	M = (n1+n2+n3+n4+n5+n6+n7+n8)/8;
	ofstream saida;
	saida.open("media.txt");
	saida  << M << setprecision(3)<< endl;
	entrada.close();
	saida.close(); 

	return 0;
}

/*
OBS: Exemplo de Entrada (dados.txt):

50 30 60 20 70 50
13.1 14.3
Exemplo de Saída media.txt):

38.425
OBS: Exemplo de Entrada (dados.txt):

50.4
60.5
70.3
1 2 3 4 5
Exemplo de Saída media.txt):

24.525
*/
