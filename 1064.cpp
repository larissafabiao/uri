#include <iostream>

using namespace std;

int main (){
   double a[6], soma = 0, positivos = 0, media = 0;

   for(int i = 0; i < 6; i++){
        cin >> a[i];
        if(a[i] > 0){
            soma = soma + a[i];
            positivos++;
        }
   }

   media = soma / positivos;

   cout << positivos << " valores positivos" << endl;
   cout.precision(1);
   cout << fixed << media << endl;

}
