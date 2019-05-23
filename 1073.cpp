#include <iostream>

using namespace std;

int main(){
    int n, q;
    cin >> n;
    for (int i = 1; i <= n; i ++){
        if ( i % 2 == 0){
            q = i * i;
            cout << i << "^2 = " << q << endl;
        }
    }
    return 0;
}
