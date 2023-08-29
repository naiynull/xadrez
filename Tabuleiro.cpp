#include "Tabuleiro.h"

Tabuleiro::Tabuleiro()
{

}
void Tabuleiro::PerguntPeca(){
for(int i=0 ; i<8; i++){
    for(int j=0 ; j<8; j++){
     switch(j){
      case 0:
      cout<<"A";
      break;

       case 1:
      cout<<" B";
      break;

       case 2:
      cout<<"C";
      break;

       case 3:
      cout<<"D";
      break;

       case 4:
      cout<<"E";
      break;

       case 5:
      cout<<"F";
      break;

       case 6:
      cout<<"G";
      break;

       case 7:
      cout<<"H";
      break;
     }
     Menu();
     cout<<"Qual peça?";
     cin>>np;
     cout<<"Qual cor?";
     cin>>nc;

    }
 }
}

void Tabuleiro::Menu(){
cout<<"Opção de peça: \n";
cout<<"1.peão \n";
cout<<"2.Torre \n";
cout<<"3.Cavalo \n";
cout<<"4.Bispo \n";
cout<<"5.Dama \n";
cout<<"6.Rei \n";

cout<<"Opção de cor \n";
cout<<"1.branco \n";
cout<<"2.Preta \n";

}
