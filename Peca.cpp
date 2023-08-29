#include "Peca.h"

//continuar o construtor
Peca::Peca(int cor){
 this->cor=cor;
}
 Cavalo::Cavalo(int c):Peca(c){
 }
 Bispo::Bispo(int B):Peca(B){
 }


int Cavalo::getValor(){
    return VALOR_CAVALO;
}

int Cavalo::getCor(){
    return VALOR_CAVALO;
}

int Bispo::getValor(){
    return VALOR_BISPO;
}

int Torre::getValor(){
    return VALOR_TORRE;
}

int Dama::getValor(){
    return VALOR_DAMA;
}

int Rei::getValor(){
    return VALOR_REI;
}
int Peao::getValor(){
    return VALOR_PEAO;
}
