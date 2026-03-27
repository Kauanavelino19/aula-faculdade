// Destruindo o Apocalipse (com arquivos)

#include <iostream>
#include <fstream>

using namespace std;
int main(){
	int Etotal, Tluta, socos, segundos, sobra;
	ifstream entrada ("luta");
	entrada >> Etotal;
	entrada >> Tluta;
	
	segundos = Tluta * 60;
	socos = 10 * (segundos / 5);
	sobra = Etotal - (socos * 12) ;
	ofstream saida("final");
	saida <<  socos << endl << sobra << endl;
	entrada.close();
	saida.close();
	
	return 0;
	
}
