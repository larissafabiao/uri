#include <iostream>

using namespace std;

int main(){
    int j = 60;
    int i = 1;

    while( j >=0 ){
        cout << "I=" << i << " J=" << j << endl;
        i = i + 3;
        j = j - 5;

    }
    return 0;
}
