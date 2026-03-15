#include <iostream>
#include <fstream>
using namespace std;
int main () {
    float a,b,area;
    ifstream entrada("triangulo.txt");
    ofstream saida("saida.txt");
    entrada >> a;
    entrada >> b;
    area = a * b / 2;
    saida<< area << endl;
    saida.close();
    return 0;
}
