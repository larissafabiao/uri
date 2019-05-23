#include <iostream>

using namespace std;

int main()
{
    int cem, cinq, vin, dez, cinc, dois, um, N;
    cin >> N;
    cout << N << endl;

    for(cem = 0; N >= 100; cem++){
        N = N - 100;
    }
    for(cinq = 0; N >= 50; cinq++){
        N = N - 50;
    }
    for(vin = 0; N >= 20; vin++){
        N = N - 20;
    }
    for(dez = 0; N >= 10; dez++){
        N = N - 10;
    }
    for(cinc = 0; N >= 5; cinc++){
        N = N - 5;
    }
    for(dois = 0; N >= 2; dois++){
        N = N - 2;
    }
    for(um = 0; N >= 1; um++){
        N = N - 1;
    }

    cout << cem << " nota(s) de R$ 100,00" << endl;
    cout << cinq << " nota(s) de R$ 50,00" << endl;
    cout << vin << " nota(s) de R$ 20,00" << endl;
    cout << dez << " nota(s) de R$ 10,00" << endl;
    cout << cinc << " nota(s) de R$ 5,00" << endl;
    cout << dois << " nota(s) de R$ 2,00" << endl;
    cout << um << " nota(s) de R$ 1,00" << endl;

    return 0;
}
