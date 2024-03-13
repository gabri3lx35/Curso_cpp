#ifndef VEICULO_H_INCLUDED
#define VEICULO_H_INCLUDED



class Veiculo{
public:
    int tipo;
    Veiculo(int tp);
    int getVelMax();
    void setVelMax(int vel);
private:
    int velMax;
    std::string nome;
    int vel;
    bool ligado;
};

Veiculo::Veiculo(int tp){
    if(tp == 1 ){
        nome="Carro";
        velMax=200;
    }else if(tp == 2){
        nome="Aviao";
        velMax=800;
    }else if(tp == 3){
        nome="Navio";
        velMax=120;
    }

}

int Veiculo::getVelMax(){
    return this->velMax;
};

void Veiculo::setVelMax(int vel){
    this->velMax=vel;
};





#endif // VEICULO_H_INCLUDED
