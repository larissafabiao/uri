#include <iostream>

using namespace std;

int main(){
    int n, b = 6;
    cin >> n;

    for( int i = 0; i < 12; i++){
        if(n % 2 != 0){
            cout << n << endl;
        }
        n++;
    }
    return 0;
}
