#include <iostream>
using namespace std;
int main (){
	float M, T;
	cin >> M ;
	cin >> T;
	if(M <= 200 && T<= 500){
		cout << "Tipo de cabo: Cabo de Aço AR-255" << endl; 
	} else if (M <= 200 && T > 500){
		cout << "Tipo de cabo: Cabo de Aço AR-355" << endl;
	}else if( M >= 201 && M <= 500 && T <= 800){
		cout << "Tipo de cabo: Cabo de Aço AR-355" << endl;
		} else if(M >= 201 && M <= 500 && T > 800){
			cout << "Tipo de cabo: Cabo de Aço AR-450" << endl;
			}else if(M > 500 && T <= 1200){
			cout << "Tipo de cabo: Cabo de Aço AR-450" << endl;
			}else if(M >500 && T > 1200){
				cout << "Tipo de cabo: Cabo de Aço EP-550" << endl;
				}else{
					cout << "Não foi realizado o teste de comparação !" << endl;
				}
	return 0;
}
