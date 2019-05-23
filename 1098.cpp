#include <iostream>

using namespace std;

int main(){
    double i = 0, j = 1, d = 1;

    while (i <= 2){
        for(int a = 0; a < 3; a++){
            cout << "I=" << i << " J=" << (j + i) << endl;
            j++;
        }
        i = i + 0.2;
        j = 1;
    }
    return 0;
}


