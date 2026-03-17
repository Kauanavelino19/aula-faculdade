//Pintando a parede do quarto

#include <iostream>

using namespace std;

int main() {
    float altura, largura, area, litros;
    cin >> largura >> altura;
    area = (largura*altura) * 3;
    litros = area / 2;

    cout << litros << " Litros" << endl;
    return 0;

}