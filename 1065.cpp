#include <iostream>

using namespace std;

int main (){
    int a, pares = 0;

    for(int i = 0; i < 5; i++){
        cin >> a;
        if( a%2 == 0){
            pares++;
        }
    }

    cout << pares << " valores pares" << endl;
    return 0;
}
