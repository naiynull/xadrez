#include <iostream>

using namespace std;

 const int VALOR_DAMA = 9;
 const int VALOR_CAVALO =3;
 const int VALOR_BISPO=3;
 const int VALOR_TORRE=5;
 const int VALOR_REI=50;
 const int VALOR_PEAO=1;

 const int COR_PRETO = 2;
 const int COR_BRANCO = 1;


class Peca{
    public:
        Peca(int);
        int cor;
      virtual int getValor() = 0 ;
      virtual int  getCor() = 0;
    protected:


};

class Cavalo:public Peca{
public:
    int getValor();
    int getCor();
    Cavalo(int);
};

class Bispo:public Peca{
public:
    int getValor();
    Bispo(int);
};

class Torre:public Peca{
public:
    int getValor();
};

class Dama:public Peca{
public:
    int getValor();
};

class Rei:public Peca{
public:
    int getValor();
};

class Peao:public Peca{
public:
    int getValor();
};
