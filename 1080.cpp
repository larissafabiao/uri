#include <iostream>

using namespace std;

int main(){
    int A = 0, B = 0, N = 1, P = 0;
    //A numero novo e B o número antigo
    // ler os números marcando a posição da repetião de leitura e se o numero lido for maior que o anterior, substituir o anterior por ele;
    while(N < 101){
        cin >> A;
        for( int i = 0; A > B; i ++){
            B = A;
            P = N;
        }
        N ++;
    }
    cout << B << endl;
    cout << P << endl;

    return 0;
}

