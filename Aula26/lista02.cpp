#include <iostream>
#include <list>
using namespace std;

int main(){

  list<int> aula, teste;
  int tam;
  list<int>::iterator it;


  teste.push_front(9); //adicionando elementos a uma lista
  teste.push_front(9);
  teste.push_front(9);
  teste.push_front(9);

  tam=10;
  for(int i=0; i < tam; i++){
    aula.push_front(i);
  }
  it=aula.begin();// Seleciona o inicio da lista
  advance(it,3);// it incio coloca até onde deseja avançar para fazer a inserção
  aula.insert(it,0);// adicionando o valor
  aula.erase(--it);// remove um item da lista, ussando posição do   ""advance(it,3);""
  
  //aula.clear(); // clear, apaga a lista

  aula.merge(teste); // mescla 2 lista, junta 2 lidas, a lista que teve seus elementos retirados fica vazia


  cout << "Tamanho da lista: " << aula.size() << "\n\n";

  tam = aula.size();

  for(int i=0; i<tam; i++){
    cout << aula.front() << "\n";
    aula.pop_front(); // retira elemento da frente da lista
  }

//pause e cls/ clear e read -p [LINUX]
 system("read -p \"Pressione enter para sair\" saindo");
 system("clear");
  return 0;
}