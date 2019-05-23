#include <iostream>

using namespace std;

int main(){
    float a = 0, b = 0, c = 0, maior = 0, meio = 0, menor = 0;
    cin >> a >> b >> c;

    if( a >= b && a >= c && b >= c){
        maior = a;
        meio = b;
        menor = c;
    } else if (a >= b && a >= c && c >= b){
        maior = a;
        meio = c;
        menor = b;
    } else if (b >= a && b >= c && a >= c){
        maior = b;
        meio = a;
        menor = c;
    } else if (b >= a && b >= c && c >= a){
        maior = b;
        meio = c;
        menor = a;
    } else if (c >= a && c >= b && a >= b){
        maior = c;
        meio = a;
        menor = b;
    } else if (c >= a && c >= b && b >= a){
        maior = c;
        meio = b;
        menor = a;
    }

    if ( maior >= meio + menor){
        cout << "NAO FORMA TRIANGULO" << endl;
    } else {
        if ((maior * maior) == (menor*menor)+(meio*meio)){
            cout << "TRIANGULO RETANGULO" << endl;
        }
        if ((maior * maior) > (menor*menor)+(meio*meio)){
            cout << "TRIANGULO OBTUSANGULO" << endl;
        }
        if ((maior * maior) < (menor*menor)+(meio*meio)){
            cout << "TRIANGULO ACUTANGULO" << endl;
        }
        if ( maior == menor && maior == meio){
            cout << "TRIANGULO EQUILATERO" << endl;
        }
        if (maior == menor && menor != meio || menor == meio && menor != maior || meio == maior && meio != menor){
            cout << "TRIANGULO ISOSCELES" << endl;
        }
    }
    return 0;
}
