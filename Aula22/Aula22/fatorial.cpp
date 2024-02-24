#include <iostream>
using namespace std;

int fatorial(int num);
int fibonacci(int n);
//VOltar para revisar e estudar mais recursividade
int main(){
  int res,val;
  val=10;
  res = fatorial(val);
  cout << res << "\n";
 for(int i=0;i<val; i++){
  cout << fibonacci(i+1) << " ";
 }
}

int fatorial(int num){
  if(num <= 1){
    return 1;
  }else{
    return num * fatorial(num - 1);
  }
}

int fibonacci(int n){
  if(n == 1 || n == 2){
    return 1;
  }else{
    return fibonacci(n-1)+fibonacci(n-2);
  }
}