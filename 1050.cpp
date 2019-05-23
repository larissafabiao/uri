#include <iostream>

using namespace std;

int main (){
    int numero;
    cin >> numero;

    if ( numero == 61){
        cout << "Brasilia" << endl;
    }else if (numero == 71){
        cout << "Salvador" << endl;
    }else if (numero == 11){
        cout << "Sao Paulo" << endl;
    }else if (numero == 21){
        cout << "Rio de Janeiro" << endl;
    }else if( numero == 32){
        cout << "Juiz de Fora" << endl;
    }else if( numero == 19 ){
        cout << "Campinas" << endl;
    }else if(numero == 27){
        cout << "Vitoria" << endl;
    }else if(numero == 31){
        cout << "Belo Horizonte" << endl;
    }else{
        cout << "DDD nao cadastrado" << endl;
    }
    return 0;
}


