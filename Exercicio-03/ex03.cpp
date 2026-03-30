//Distância entre dois Pontos (arquivo)
#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;
int main (){
	double x1, x2, y1, y2, D, D1, D2;
	ifstream entrada("entrada.txt");
	entrada >> x1;
	entrada >> y1;
	entrada >> x2;
	entrada >> y2;
	
	D1 = pow((x2 - x1),2);
	D2 = pow((y2 -y1),2);
	D = sqrt(D1 + D2);
	cout << D << endl;
	entrada.close();
	
	return 0;
}
