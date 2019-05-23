#include <iostream>

using namespace std;

int main(){
    int n, m, x = 0, y = 0;
    cin >> n >> m;

    int a[n][m];

    for(int i = 0; i < n; i++){
        for(int b = 0; b < m; b++ ){
            cin >> a[i][b];
        }
    }
    for( int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(a[i][j] == 42){
                if ( i + 1 < n && i - 1 >= 0 && j + 1 < m && j - 1 >= 0){
                    if ( a[i][j + 1] == 7 && a[i][j - 1] == 7) {
                        if (a[i + 1][j + 1] == 7 && a[i + 1][j - 1] == 7 && a[i + 1][j] == 7){
                            if(a[i - 1][j + 1] == 7 && a[i - 1][j - 1] == 7 && a[i - 1][j] == 7){
                                x = i + 1;
                                y = j + 1;
                            }
                        }
                    }
                }
            }
        }
    }
    cout << x << " " << y << endl;
    return 0;
}

