#include <iostream>
#include "Aviao.h"
#include "Veiculo.h"

using namespace std;

int main(){

//Aula35
    cout << "Aula 35" << endl;
    Aviao *av1 = new Aviao(3);// instanciando objetos Aviao,com as entrada 1 2 ou 3, dependendo da entrada vai mudar o tipo.
    Aviao *av2 = new Aviao(2);
    Aviao *av3 = new Aviao(1);    av1->status();// metodo status, vai mostra no terminal o status.
    av2->status();
    av3->status();
//Aula 36
    cout << endl <<"Aula 36" << endl;
    Veiculo *v1 = new Veiculo(1);
    //v1->velMax=10; Após deixar  velMax como privado, não podemos mais acessá lo diretamente, teremos que criar metodos get e set.
    cout << v1->getVelMax() << endl; //Ussando metodo getVelMax() para pegar valor de velMax mesmo ele estando privado. Para segurança da classe.
    v1->setVelMax(500); //Metodo set, ele vai alterar set/setar o valor da velMax. Ou ppode declarar setVelMax como privado para isso acontecer apenas dentro da classe.
     cout << v1->getVelMax() << endl;
     cout << v1->isLigado() << endl;
    return 0;
};
