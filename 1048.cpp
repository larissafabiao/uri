#include <iostream>

using namespace std;

int main (){
    double salario, novo = 0, reajuste;
    int porcentual;
    cin >> salario;

    if( salario <= 400.00){
        novo = salario * 1.15;
        porcentual = 15;
    } else if ( salario <= 800.00){
        novo = salario * 1.12;
        porcentual = 12;
    } else if ( salario <= 1200.00){
        novo = salario * 1.10;
        porcentual = 10;
    } else if ( salario <= 2000.00){
        novo = salario * 1.07;
        porcentual = 7;
    } else if (salario > 2000.00){
        novo = salario * 1.04;
        porcentual = 4;
    }

    reajuste = novo - salario;

    cout.precision(2);
    cout << "Novo salario: " << fixed << novo << endl;
    cout << "Reajuste ganho: " << fixed << reajuste << endl;
    cout << "Em percentual: " << porcentual << " %" << endl;
    return 0;
}
