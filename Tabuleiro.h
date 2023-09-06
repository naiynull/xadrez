#include "Peca.h"

class Tabuleiro
{
    public:
        Tabuleiro();
        void PerguntPeca();
        void Menu(int, int);
        Peca *Tabu[8][8];
        int np, nc;
        void imprimirMovimentoPossiveis();
        void LetraColuna(int);
        void EscolhePeca();
        
    protected:

    private:
};
