//Resgate da Mary Jane
#include <iostream>
#include <fstream>

using namespace std;

int main() {
    int numero, latitude, longitude, a, b, c, d;
    
    ifstream entrada("entrada");
    entrada >> numero;
    
    ofstream saida("local");
    a = numero / 1000 ;
    b = (numero/ 100) % 10; 
    c = (numero / 10) % 10;
    d = numero % 10;
    latitude = a + d;
    longitude = b + c;
    
    
    saida << latitude << endl << longitude << endl;
    
    
    return 0;
}
