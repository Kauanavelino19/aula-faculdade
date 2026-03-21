//Comerciante Maluco

#include <iostream>

using namespace std;

int main() {
    float valorAvista, TotalclientePagaAn, TotalclientePagaDp;
    int quantidadePretacoes;
    cin >> valorAvista;
    cin >> quantidadePretacoes;
    
    TotalclientePagaAn = valorAvista + ( valorAvista /10);
    
   
    TotalclientePagaDp = TotalclientePagaAn - ( TotalclientePagaAn / 10 );
    
    cout << TotalclientePagaAn  << endl;
    cout << TotalclientePagaDp   << endl;
    return 0;

}