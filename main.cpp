#include <iostream>

using namespace std;

int Binario[8],Dec1,Dec2,Tam;
string N1,N2;
char OP;

int main() {

  do{
    cout<<"\n\nInforme o primeiro número em binário:\n";
    cin>>N1;
    Tam = size(N1);
    if(Tam>8){
      cout<<"\nO número'"<<N1<<"' número não é valido !!\n";
    }
  }while(Tam>=9);
  
  do{
    cout<<"\n\nInforme o Segundo número em binário:\n";
    cin>>N2;
    Tam = size(N2);
    if(Tam>8){
      cout<<"\nO número'"<<N2<<" número não é valido !!\n";
    }
  }while(Tam>=9);

  do{
    cout<<"\nInforme a operação matemática desejada:\n";
    cin>>OP;
    if((OP!='+') or (OP!='-') or (OP!='*') or (OP!='/') or (OP!='%')){
      cout<<"\nA operação matemática informada é invalida !!";
    }
  }while(OP!='+' or OP!='-' or OP!='*' or OP!='/' or OP!='%');

  

}