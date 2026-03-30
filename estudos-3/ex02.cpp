#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string ler, lerArquivo;

    cin >> lerArquivo;
    cin >> ler;
    ofstream saida(lerArquivo);
    
    if(saida.is_open()){
		saida << ler << endl;
		} else{
			
			cout << "Arquivo não foi aberto corretamente" << endl;
			
		}
    
    //cout << saida << endl;
   
    saida.close();
    return 0;
}
