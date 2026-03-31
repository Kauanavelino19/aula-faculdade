/*
	Mais um exercicio sem IA;
	Achei bem simples, quando eu lir tive dificuldade de traduzir por meu algoritmo, pesquisei e escrevir no caderno
	e deu de primeira, fiquei supreso kkkkk.
*/
//Tensão admissivel
#include <iostream> // biblioteca de fluxo de entrada e saida (cout, cin)

using namespace std; //permitindo usar o elemento  da biblioteca padrão(cout, cin)
int main (){
	float F, A, O; //Criando a variável ponto flutante 
	
	cin >> F >> A;
	/*
	 Fazendo calculo:
	 O calculo sera feito: σ = F / A
	 */
	O = F/A;
	if(O < 250){ // se for manor a barra está segura
		cout << "SEGURA" << endl;
		} else if(O > 250){// se for maior a barra corre risco
			cout << "EM RISCO" << endl;
			} else{// nenhum dos dois faz
				cout << "Não fez calculo"<< endl;
			}
	
	return 0;
}
