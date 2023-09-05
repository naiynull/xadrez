#include "Peca.h"

// continuar o construtor
int Peca::getCor()
{
    return cor;
}
char Peca::getLetra(){
    return ' ';
}

void Peca::setCor(int cor)
{
    this->cor = cor;
}

Peca::Peca(int cor)
{
    setCor(cor);
}

Cavalo::Cavalo(int c) : Peca(c)
{
    setCor(c);
}

Bispo::Bispo(int c) : Peca(c)
{
    setCor(c);
}

Torre::Torre(int c) : Peca(c)
{
    setCor(c);
}

Dama::Dama(int c) : Peca(c)
{
    setCor(c);
}

Rei::Rei(int c) : Peca(c)
{
    setCor(c);
}
Peao::Peao(int c) : Peca(c)
{
    setCor(c);
}

// voltar o valor da peça

int Cavalo::getValor()
{
    return VALOR_CAVALO;
}

int Bispo::getValor()
{
    return VALOR_BISPO;
}

int Torre::getValor()
{
    return VALOR_TORRE;
}

int Dama::getValor()
{
    return VALOR_DAMA;
}

int Rei::getValor()
{
    return VALOR_REI;
}
int Peao::getValor()
{
    return VALOR_PEAO;
}


// definição de letras
char Cavalo::getLetra()
{
    return 'C';
}

char Bispo::getLetra()
{
    return 'B';
}

char Torre::getLetra()
{
    return 'T';
}

char Dama::getLetra()
{
    return 'D';
}

char Rei::getLetra()
{
    return 'R';
}
char Peao::getLetra()
{
    return 'P';
}