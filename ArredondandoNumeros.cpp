#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;
int main(){
	float X;
	ofstream saida("saida.txt");
	cin >> X;
	saida << (int)X << endl;
	saida << X - (int)X << endl;
	saida << floor(X) << endl;
	saida << ceil(X) << endl;
	saida << round(X) << endl;
	saida.close();
	return 0;
}
