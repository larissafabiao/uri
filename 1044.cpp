#include <iostream>

using namespace std;

int main (){
    int A, B;
    cin >> A >> B;

    if (B % A == 0){
        cout << "Sao Multiplos" << endl;
    } else if (A % B == 0){
        cout << "Sao Multiplos" << endl;
    } else {
        cout << "Nao sao Multiplos" << endl;
    }

    return 0;
}
