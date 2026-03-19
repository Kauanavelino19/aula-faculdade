//Pintando a parede do quarto

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    float altura, largura, area, litros;
    cin >> largura >> altura;
    area = (largura*altura) * 3;
    litros = area / 2;

    cout << fixed  << setprecision(2) << litros << " Litros" << endl;
    return 0;
}
