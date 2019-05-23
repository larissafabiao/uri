#include <iostream>

using namespace std;

int main(){
   int idade, ano, mes, dia;
   cin >> idade;

   if(idade < 365){
        ano = 0;
        mes = idade / 30;
        dia = idade % 30;
        cout << ano << " ano(s)" << endl << mes << " mes(es)" << endl << dia << " dia(s)" << endl;
   } else {
        ano = idade / 365;
        mes = (idade % 365) / 30;
        dia = (idade % 365) % 30;
        cout << ano << " ano(s)" << endl << mes << " mes(es)" << endl << dia << " dia(s)" << endl;
   }
   return 0;
}
