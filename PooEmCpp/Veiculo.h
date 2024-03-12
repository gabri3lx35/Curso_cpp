#ifndef VEICULO_H_INCLUDED
#define VEICULO_H_INCLUDED



class Veiculo{
public:
    int tipo;
    int velMax;
    Veiculo(int tp);
private:
    std::string nome;
    int vel;
    bool ligado;
};

Veiculo::Veiculo(int tp){
    if(tp == 1 ){
        nome="Carro";
    }else if(tp == 2){
        nome="Aviao";
    }else if(tp == 3){
        nome="Navio";
    }
}



#endif // VEICULO_H_INCLUDED
