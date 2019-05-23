#include <iostream>

using namespace std;

int main(){
    int i = 1, j = 7;

    while (i <= 9){
        for(int a = 0; a < 3; a++){
            cout << "I=" << i << " J=" << j << endl;
            j--;
        }
        i = i + 2;
        j = j + 5;
    }
    return 0;
}
