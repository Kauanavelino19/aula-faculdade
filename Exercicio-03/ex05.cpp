//Média Ponderada (arquivo)
/*
Esse eu consegui resolver sem IA, me senti orgurlhoso com isso
*/

#include <iostream> // biblioteca de fluxo da entrada e saida(cout, cin) 
#include <fstream> // biblioteca para arquivo 
#include <iomanip> // biblioteca para utilizar o fixed e setprecision()

using namespace std; //permitindo a usar o elemento da bibliotea padrão (cout, cin)
int main (){
	int nota1, peso1, nota2, peso2, nota3, peso3; // variável inteiro
	float soma1, soma2, mediaP; //variável ponto flutuante
	ifstream entrada; // variável de arquivo de entrada (ifstream)
	entrada.open("notas.txt"); //criando um arquivo de entrada
	entrada >> nota1 >> peso1; //fazendo a entrada de dados em arquivo
	entrada >> nota2 >> peso2;//fazendo a entrada de dados em arquivo
	entrada >> nota3 >> peso3;//fazendo a entrada de dados em arquivo
	ofstream saida; // variável de arquivo de saida (ofstream)
	saida.open("final.txt"); //criando um arquivo de sauda
	
	 //somas
	soma1 = (nota1 * peso1) + (nota2 * peso2) + (nota3 * peso3); 
	soma2 = peso1 + peso2 + peso3;
	mediaP = soma1 / soma2;

	saida << fixed << setprecision(2)<< mediaP << endl;
	entrada.close();
	saida.close();
    return 0;
}
