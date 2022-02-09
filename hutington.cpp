#include "famili.h"

using namespace std;

void Bebe :: pHutington (const Familia_Mae &fm, const Familia_Pai &fp)
{
    int D = 2, d = 1, j, Matriz[2][2], probabilidade[16];
    qreal cont, porcentagem = 0;

    if(fm.m->Hutington && fp.p->Hutington)
    {
        cont =16;

        Matriz[0][0] = D;
        Matriz[0][1] = d;
        Matriz[1][0] = D;
        Matriz[1][1] = d;

        probabilidade[0] = Matriz[0][0] * Matriz[1][0];
        probabilidade[1] = Matriz[0][1] * Matriz[1][1];
        probabilidade[2] = Matriz[0][0] * Matriz[1][1];
        probabilidade[3] = Matriz[0][1] * Matriz[1][0];

        Matriz[0][0] = D;
        Matriz[0][1] = D;
        Matriz[1][0] = D;
        Matriz[1][1] = d;

        probabilidade[4] = Matriz[0][0] * Matriz[1][0];
        probabilidade[5] = Matriz[0][1] * Matriz[1][1];
        probabilidade[6] = Matriz[0][0] * Matriz[1][1];
        probabilidade[7] = Matriz[0][1] * Matriz[1][0];

        Matriz[0][0] = D;
        Matriz[0][1] = D;
        Matriz[1][0] = D;
        Matriz[1][1] = d;

        probabilidade[8] = Matriz[0][0] * Matriz[1][0];
        probabilidade[9] = Matriz[0][1] * Matriz[1][1];
        probabilidade[10] = Matriz[0][0] * Matriz[1][1];
        probabilidade[11] = Matriz[0][1] * Matriz[1][0];

        Matriz[0][0] = D;
        Matriz[0][1] = D;
        Matriz[1][0] = D;
        Matriz[1][1] = D;

        probabilidade[12] = Matriz[0][0] * Matriz[1][0];
        probabilidade[13] = Matriz[0][1] * Matriz[1][1];
        probabilidade[14] = Matriz[0][0] * Matriz[1][1];
        probabilidade[15] = Matriz[0][1] * Matriz[1][0];
    }

    else if (fm.m->Hutington || fp.p->Hutington)
    {
        cont = 8;

        Matriz[0][0] = D;
        Matriz[0][1] = d;
        Matriz[1][0] = d;
        Matriz[1][1] = d;

        probabilidade[0] = Matriz[0][0] * Matriz[1][0];
        probabilidade[1] = Matriz[0][1] * Matriz[1][1];
        probabilidade[2] = Matriz[0][0] * Matriz[1][1];
        probabilidade[3] = Matriz[0][1] * Matriz[1][0];

        Matriz[0][0] = D;
        Matriz[0][1] = D;
        Matriz[1][0] = d;
        Matriz[1][1] = d;

        probabilidade[4] = Matriz[0][0] * Matriz[1][0];
        probabilidade[5] = Matriz[0][1] * Matriz[1][1];
        probabilidade[6] = Matriz[0][0] * Matriz[1][1];
        probabilidade[7] = Matriz[0][1] * Matriz[1][0];
    }

    else
    {
        cont = 4;

        Matriz[0][0] = d;
        Matriz[0][1] = d;
        Matriz[1][0] = d;
        Matriz[1][1] = d;

        probabilidade[0] = Matriz[0][0] * Matriz[1][0];
        probabilidade[1] = Matriz[0][1] * Matriz[1][1];
        probabilidade[2] = Matriz[0][0] * Matriz[1][1];
        probabilidade[3] = Matriz[0][1] * Matriz[1][0];
    }

    for(j = 0; j < cont; j++)
    {
        if(probabilidade[j] == 2 || probabilidade[j] == 4)
            porcentagem++;
    }

    porcentagem *= 100/cont;

    this->Hutington = porcentagem;
}
