#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main(){
    int n, d;
    cin >> n;

    for(int a = 0; a < n; a++){
        cin >> d;
        unsigned long long m[d][d], maior;

        for(int i = 0; i < d; i++){
            for(int j = 0; j < d; j++){
                cin >> m[i][j];
                m[i][j] =  m[i][j] * m[i][j];
            }
        }

        int k = 0;
        unsigned long long tamanho[d];

        while(k < d){
            maior = 0;
            for(int i = 0; i < d; i++){
                if(m[i][k] > maior){
                    maior = m[i][k];
                }
            }
            tamanho[k] = to_string(maior).length();
            k++;
        }

        cout << "Quadrado da matriz #" << a + 4 << ":" << endl;
        for(int i = 0; i < d; i++){
            for(int j = 0; j < d; j++){
                cout << right << setw(tamanho[j]) << m[i][j];
                if(j < d - 1){
                    cout << " ";
                }
            }
                 cout << endl;
        }
        if (n != 1 && a < n - 1){
            cout << endl;
        }
    }
    return 0;
}
