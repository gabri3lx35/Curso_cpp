#include <iostream>
// me propus a explorar o struc como metodo de estudo criei esse arquivo.
//classes [mago, guerreiro, arqueiro]
using namespace std;

struct Personagem{
  string nome,classe;
  int def, atk, xp, vida, mana, lvl;

 //Playear
  void insere(string In_nome="", string In_classe="Classe Não definida", 
  int In_xp=0, int In_vida=100, int In_mana=0, int In_def=50, int In_atk=10, int In_lvl=0){
    nome=In_nome;
    classe=In_classe;
    def=In_def;
    atk=In_atk;
    xp=In_xp;
    vida=In_vida;
    mana=In_mana;
    lvl=In_lvl;

  }

  void mostra(){
    cout << "Nome: " << nome << "\n";
    cout << "Classe: " << classe << "\n";
    cout << "xp: " << xp << "\n";
    cout << "vida: " << vida << "\n";
    cout << "mana: " << mana << "\n\n";

  }
};

struct Inimigos{
  string nome;
  int vida;
  int def;
  int atk;

  void insere(string In_nome="Sem nome", int In_vida=10, int In_def=10, int In_atk=10){
    nome=In_nome;
    vida=In_vida;
    def=In_def;
    atk=In_atk;
    
  }

  void mostra(){
    cout << "Nome: " << nome << "\n";
    cout << "Dano: " << atk << "\n";
    cout << "vida: " << vida << "\n\n";
  }
};


void menuVisual(int contador=0){
  cout << "Turno: " << contador << "\n\n";
  cout << "Inventario [1], Modo Batalha[2], Ver Stats[3], Sair[4]" << "\n";
  cout << ">>> ";
}



int main (){
  Personagem Player;
  Inimigos Goblin;
  string Player_nome, Player_classe;
  int cnt,opc;
  cnt=0;

 cout << "Seja bem vendi ao meu rpg, sem nome ainda ksks" << "\n";
 cout << "Aproveite esse game de terminal, Boa sorte" << "\n";
 cout << "Crie seu Personagem" << "\n";


 system("read -p \"Pressione para começar o jogo\" Entrando");
 system("clear");



 //loop do game
 while (Player.vida > 0){
 //entrada de dados == Criação do personagem
  cout << "Qual seu nome" << ": ";
  cin >> Player_nome;
  
  inicio:
  cout << "Escolha sua Classe [Mago] [Guerreiro] [Arqueiro]" << ": ";
  cin >> Player_classe;


  if(Player_classe == "mago" || Player_classe == "Mago"){
  }else if(Player_classe == "guerreiro" || Player_classe == "Guerreiro"){
    }else if(Player_classe == "arqueiro" || Player_classe == "Arqueiro"){
    }else{
      cout << "Classe Não indentificada, Digite Novamente" << "\n";
      goto inicio;
    }


  Player.insere(Player_nome,Player_classe);
  Player.mostra();
  system("read -p \"Turno 1... Precione para começar\" Entrando");
  system("clear");


  
  while (Player.vida > 0){
    cnt++;
  menuVisual(cnt);
  cin >> opc;
  if(opc == 1){

  }else if(opc == 2){

  }else if(opc == 3){
      cout << "\n";
      Player.mostra();
  }else if(opc == 4){
    Player.vida=0;
  }
  
 }
 
 }
  return 0;
}

  
