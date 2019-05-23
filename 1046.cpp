#include <iostream>

using namespace std;

int main() {
    int i, f, duracao;
    cin >> i >> f;

    if (i == 0 && f == 0){
        duracao = 24;
    } else if (i > f){
        duracao = (24 - i) + f;
    } else {
        duracao = f - i;
    }

    cout << "O JOGO DUROU " << duracao << " HORA(S)" << endl;
    return 0;
}
