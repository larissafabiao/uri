#include <iostream>

using namespace std;

int main(){
    int atributos, cartasm, cartasl, m = 0, l = 0, sorteio = 0;

    while(cin >> atributos >> cartasm >> cartasl){
        int marcos[cartasm][atributos], leo[cartasl][atributos];

        for(int i = 0; i < cartasm; i++){
            for(int j = 0; j < atributos; j++){
                cin >> marcos[i][j];
            }
        }
       for(int i = 0; i < cartasl; i++){
            for(int j = 0; j < atributos; j++){
                cin >> leo[i][j];
            }
        }

        cin >> m >> l >> sorteio;
        sorteio = sorteio - 1;
        m = m - 1;
        l = l - 1;

        if(marcos[m][sorteio] == leo[l][sorteio]){
            cout << "Empate" << endl;
        } else if(marcos[m][sorteio] > leo[l][sorteio]){
            cout << "Marcos" << endl;
        } else if (marcos[m][sorteio] < leo[l][sorteio]){
            cout << "Leonardo" << endl;
        }
    }
    return 0;
}
