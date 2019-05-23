#include <iostream>

using namespace std;

int main()
{
    int notas, moedas;
    scanf("%d.%d", &notas, &moedas);

    cout << "NOTAS:" << endl;
    cout << notas / 100 << " nota(s) de R$ 100.00" << endl;
    notas = notas % 100;

    cout << notas / 50 << " nota(s) de R$ 50.00" << endl;
    notas = notas % 50;

    cout << notas / 20 << " nota(s) de R$ 20.00" << endl;
    notas = notas % 20;

    cout << notas / 10 << " nota(s) de R$ 10.00" << endl;
    notas = notas % 10;

    cout << notas / 5 << " nota(s) de R$ 5.00" << endl;
    notas = notas % 5;

    cout << notas / 2 << " nota(s) de R$ 2.00" << endl;
    notas = notas % 2;

    cout << "MOEDAS:" << endl;
    cout << notas / 1 << " moeda(s) de R$ 1.00" << endl;

    cout << moedas / 50 << " moeda(s) de R$ 0.50" << endl;
    moedas = moedas % 50;

    cout << moedas / 25 << " moeda(s) de R$ 0.25" << endl;
    moedas =  moedas % 25;

    cout << moedas / 10 << " moeda(s) de R$ 0.10" << endl;
    moedas = moedas % 10;

    cout << moedas / 5 << " moeda(s) de R$ 0.05" << endl;
    moedas = moedas % 5;

    cout << moedas / 1 << " moeda(s) de R$ 0.01" << endl;

  /* RESOLUÇÃO POR SUBTRAÇÃO:
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
    for(real = 0; N >= 1; real++){
        N = N - 1;
    }
    for(cinqcent = 0; N >= 0.50 ; cinqcent++){
        N = N - 0.50;
    }
    for(vintcinc = 0; N >= 0.25 ; vintcinc++){
        N = N - 0.25;
    }
    for(dezcent = 0; N >= 0.10 ; dezcent++){
        N = N - 0.10;
    }
    for(cincent = 0; N >= 0.05 ; cincent++){
        N = N - 0.05;
    }
    for(um = 0; N >= 0.01 ; um++){
        N = N - 0.01;
    }

*/

    return 0;
}

