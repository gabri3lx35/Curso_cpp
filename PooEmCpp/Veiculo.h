#ifndef VEICULO_H_INCLUDED
#define VEICULO_H_INCLUDED



class Veiculo{
public:
    int tipo;
    Veiculo(int tp);
    int getVelMax();
    void setVelMax(int vel);
    bool isLigado();
    void setLigado();
private:
    int velMax;
    std::string nome;
    int vel;
    bool ligado;
};

Veiculo::Veiculo(int tp){
    if(tp == 1 ){
        nome="Carro";
        this->setVelMax(200);
    }else if(tp == 2){
        nome="Aviao";
        this->setVelMax(800);
    }else if(tp == 3){
        nome="Navio";
        this->setVelMax(120);
    }

}

int Veiculo::getVelMax(){
    return this->velMax;
};

void Veiculo::setVelMax(int vel){
    this->velMax=vel;
};


void Veiculo::setLigado(){
    this->ligado = true;
};


bool Veiculo::isLigado(){
  return this->ligado;
};





#endif // VEICULO_H_INCLUDED
