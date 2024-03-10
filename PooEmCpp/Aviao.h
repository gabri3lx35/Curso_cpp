#ifndef AVIAO_H_INCLUDED
#define AVIAO_H_INCLUDED
#include <iostream>
#include <binders.h>



class Aviao {

    public:
        int vel=0;
        int velMax;
        std::string modelo;
        Aviao(int tp);
        void status();
    private:
};

    Aviao::Aviao(int tp){
    if(tp == 1){
        this->velMax=800;
        this->modelo = "Jato";

    }else if(tp == 2){
        this->velMax=350;
        this->modelo="Monomotor";
    }else if(tp == 3){
        this->velMax=180;
        this->modelo="Planador";
    }


};


void Aviao::status(){
    std::cout << "==============================" << std::endl;
    std::cout << "Modelo: " << this->modelo << std::endl;
    std::cout << "velMax: " << this->velMax << std::endl;

}



#endif // AVIAO_H_INCLUDED
