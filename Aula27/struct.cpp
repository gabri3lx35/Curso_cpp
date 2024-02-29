#include <iostream>
using namespace std;

struct Carro{
  string nome;
  string cor;
  int pot; 
  int velMax;
  int vel;

  void insere(string stnome,string stcor, int stpot, int stvelMax){
    nome=stnome;
    cor=stcor;
    pot=stpot;
    velMax=stvelMax;
    vel=0;
  }
  void mostra(){
      cout << "\nNome: " << nome << "\n";
      cout << "Cor: " << cor << "\n";
      cout << "Potencia: " << pot << "\n"; 
      cout << "Velocidade Atual: " << vel << "\n";
      cout << "Velocidade Maxima: " << velMax << "\n";
  }
  void mudaVel(int mv){
    vel=mv;
    if(vel > velMax){
      vel=velMax;
    }
    if(vel < 0){
      vel=0;
    }
  }
};

int main(){

  Carro car1, car2;
  car1.insere("Tornado", "Vermelho", 450, 350);
  car2.insere("Marquin", "Preto", 500, 400);
  
  car1.mostra();
  car2.mostra();
  car1.mudaVel(150);
  car2.mudaVel(500);
  car1.mostra();
  car2.mostra();


  
  
  /*car1.nome="Tornado";
  car1.cor="Azul";
  car1.pot=450;
  car1.velMax=350;

  car2.nome="Luxo";
  car2.cor="preto";
  car2.pot=350;
  car2.velMax=250;
  */

  return 0;
}