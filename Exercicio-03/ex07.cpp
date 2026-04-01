/*
Resolvir sem IA, estava entre o teclado e a cadeira kkk levei 40 minunto para resolver esse probelma:

Crie três arquivo .txt  que o usuario possa digitar e coloca algumas informação dentro deles no primeiro arquivo e no segundo arquivo.
ja no terceiro arquivo vai mostre eles juntos um ao lado do outro exemplo

arquivo1.txt = Vou
arquivo2.txt = passar!
arquivo3.txt = Vou Passsar!

*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main (){
	string texto1, texto2, arqui1, arqui2, arqui3;
	ifstream entrada1, entrada2;
	
	cin >> arqui1;
	cin >> arqui2;
	cin >> arqui3;
	
	entrada1.open(arqui1);
	
	entrada1 >> texto1;
	
	entrada2.open(arqui2);
	
	
	entrada2 >> texto2;
	
	ofstream saida;
	saida.open(arqui3);
	saida << texto1 << " " << texto2 << endl;

	entrada1.close();
	entrada2.close();
	saida.close();
	return 0;
}
