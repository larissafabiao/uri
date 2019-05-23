#include <iostream>
#include <string.h>

using namespace std;
using std::string;
using std::getline;

int main (){
    //como ler uma palavra em C
    //para imprimir um vetor inteiro de char usar %s
    char um[20], dois[20], tres[20], verte[20], inverte[20], ave[20], mami[20], inseto[20], anelideo[20], carni[20], oni[20], herbi[20], hemato[20];
    strcpy( verte, "vertebrado");
    strcpy( inverte, "invertebrado");
    strcpy( ave, "ave");
    strcpy( mami, "mamifero");
    strcpy( inseto, "inseto");
    strcpy( anelideo, "anelideo");
    strcpy( carni, "carnivoro");
    strcpy( oni, "onivoro");
    strcpy( herbi, "herbivoro");
    strcpy( hemato, "hematofago");
    scanf("%s", &um);
    scanf("%s", &dois);
    scanf("%s", &tres);

    if(strcmp(um,verte) == 0){
        if (strcmp(dois,ave) == 0){
            if (strcmp(tres,carni) == 0){
                cout << "aguia" << endl;
            } else {
                cout << "pomba" << endl;
            }
        } else if (strcmp(dois,mami) == 0){
            if (strcmp(tres,oni) == 0){
                cout << "homem" << endl;
            } else {
                cout << "vaca" << endl;
            }
        }
    } else if (strcmp(um,inverte) == 0){
        if ( strcmp(dois,inseto) == 0){
            if (strcmp(tres,hemato) == 0){
                cout << "pulga" << endl;
            } else {
                cout << "lagarta" << endl;
            }
        } else {
            if (strcmp(tres,hemato) == 0){
                cout << "sanguessuga" << endl;
            } else {
                cout << "minhoca" << endl;
            }
        }
    }
    return 0;
}
