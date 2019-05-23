#include <iostream>

using namespace std;

int main(){
    int N, M;

    while(cin >> N >> M){
        int input[N][M] = {0};

        for (int i = 0; i < N; i ++){
            for( int j = 0; j < M; j++){
                cin >> input[i][j];
            }
        }

        for (int i = 0; i < N; i ++){
            for( int j = 0; j < M; j++){
                if(input[i][j] == 1){
                    cout << "9";
                } else {
                    int aux = 0;
                    if (i - 1 >= 0){
                        aux = aux + input[i - 1][j];
                    }
                    if (i + 1 < N){
                        aux = aux + input[i + 1][j];
                    }
                    if (j - 1 >= 0){
                        aux = aux + input[i][j - 1];
                    }
                    if (j + 1 < M){
                        aux = aux + input[i][j + 1];
                    }
                    cout << aux;
                }
            }
            cout << endl;
        }
    }
    return 0;
}
