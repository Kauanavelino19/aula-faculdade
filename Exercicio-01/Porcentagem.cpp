//Operações Básicas - Porcentagem (arquivo)

#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;


int main () {
   float valorInicial, valorFinal;
   ifstream entrada ("entrada");

   entrada >>  valorInicial;
   valorFinal=valorInicial - valorInicial*0.09;
  
   cout<<  "R$ "<< fixed << setprecision(1) << valorFinal << endl;
   // esqueco de fechar o arquivo 
   return 0;
}
