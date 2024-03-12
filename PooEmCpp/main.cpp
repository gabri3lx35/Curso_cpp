#include <iostream>
#include "Aviao.h"

using namespace std;

int main(){


    Aviao *av1 = new Aviao(3);
    Aviao *av2 = new Aviao(2);
    Aviao *av3 = new Aviao(1);

    av1->status();
    av2->status();
    av3->status();




    return 0;
};
