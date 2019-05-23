#include <iostream>
#include <math.h>
#include <string>
#include <iomanip>

using namespace std;

int main(){
    int n;

    while(true){
        cin >> n;
        if(n == 0){
            break;
        }

        long a[n][n];

        for(int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                a[i][j] = pow(2, i) * pow(2,j);
            }
        }

        long maior = to_string(a[n - 1][n - 1]).length();

        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                cout << right << setw(maior) <<a[i][j];
                if(j < n - 1){
                    cout << " ";
                }
            }
            cout << endl;
        }
        cout << endl;
    }
}
