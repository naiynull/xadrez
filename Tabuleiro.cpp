#include "Tabuleiro.h"

Tabuleiro::Tabuleiro()
{

    for (int i = 0; i < 8; i++)
        for (int j = 0; j < 8; j++)
            Tabu[i][j]=NULL;
}
void Tabuleiro::PerguntPeca()
{
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {

            Menu(i,j);

            cout << "Posição";
            switch (j)
            {

            case 0:
                cout << "A";
                break;

            case 1:
                cout << " B";
                break;

            case 2:
                cout << "C";
                break;

            case 3:
                cout << "D";
                break;

            case 4:
                cout << "E";
                break;

            case 5:
                cout << "F";
                break;

            case 6:
                cout << "G";
                break;

            case 7:
                cout << "H";
                break;
            }
            cout << 9 - (i + 1) << endl;
            cout << "Informe a peça?";
            cin >> np;
            cout << "Informe a cor?";
            cin >> nc;
            switch (np)
            {
            case 1:
                Tabu[i][j] = new Peao(nc);
                break;
            case 2:
                Tabu[i][j] = new Torre(nc);
                break;
            case 3:
                Tabu[i][j] = new Cavalo(nc);
                break;
            case 4:
                Tabu[i][j] = new Bispo(nc);
                break;
            case 5:
                Tabu[i][j] = new Dama(nc);
                break;
            case 6:
                Tabu[i][j] = new Rei(nc);
                break;
            default:
                break;
            }
        }
    }
}

void Tabuleiro::Menu(int lin,int col)
{
    system("clear");
    cout<<"     A | B | C | D | E | F | G | H |"<<endl;
    cout<<"     __ ___ ___ ___ ___ ___ ___ ___"<<endl;
    for (int i = 0; i < 8; i++)
    { // loop mostra as linhas
        std::cout << 9-(i+1) << "   ";
        for (int j = 0; j < 8; j++)
        {
            
            if (Tabu[i][j] != NULL)
            {
                std::cout << " " << Tabu[i][j]->getLetra() << " |";
            }
            else if(i==lin && j==col)
            {
                std::cout << " " << "x |";
            }else{
                std::cout << "   |";
            }
        }
        cout<<"\n";
    }
    cout << "Opção de peça: \n";
    cout << "0.Sem peça \n";
    cout << "1.peão \n";
    cout << "2.Torre \n";
    cout << "3.Cavalo \n";
    cout << "4.Bispo \n";
    cout << "5.Dama \n";
    cout << "6.Rei \n";

    cout << "Opção de cor \n";
    cout << "1.branco \n";
    cout << "2.Preta \n";
}
