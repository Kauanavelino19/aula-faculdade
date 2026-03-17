//Potência e Radiciação

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float numero1, quadrado, cubo, raiz;
    cin >> numero1;
    quadrado = numero1*numero1;
    cubo = numero1*numero1*numero1;
    raiz = sqrt(numero1);
    cout << quadrado << endl;
    cout << cubo << endl;
    cout << raiz << endl;

    return 0;
}