#include <iostream>
#include <vector>
using namespace std;

int main(){

  vector<int> num;
  vector<int> num2;
  int tam,i;

  num.push_back(12);
  num.push_back(13);
  num.push_back(14);
  num.push_back(15);

  num2.push_back(20);
  num2.push_back(21);
  num2.push_back(22);
  num2.push_back(23);
  
  num.swap(num2); //troca inverte, valores de num2 foram para num

  tam =num.size(); //tamanho

  cout << tam << "\n";
 for(i=0;i <= 3; i++){
   cout << num[i] << "\n";
 }

cout << num.front() << endl; //primeiro elemento
cout << num.back() << endl; // ultimo elemento
cout << num.at(2) << endl; //pegar elemento qualque lugar
num.pop_back();
num.clear(); //limpar os elementos


  return 0;
}