#include <iostream>
#include <string>

using namespace std;

int main(){
    double m[12][12], soma = 0;
    int l;
    string conta;

    cin >> l >> conta;

    for(int i = 0; i < 12; i++){
        for(int j = 0; j < 12; j++){
            cin >> m[i][j];
        }
    }

    for(int j = 0; j < 12; j++){
        soma += m[l][j];
    }

    if(conta == "M"){
        soma = soma / 12.0;
    }

    cout.precision(1);
    cout << fixed << soma << endl;
    return 0;
}
