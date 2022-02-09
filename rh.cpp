#include "famili.h"

using namespace std;

void Bebe ::pRh(const Familia_Mae &fm, const Familia_Pai &fp)
{
    int R=2, r=1, j, Matriz[2][2];
    int probabilidade[16];
    qreal cont, porcentagem;

    porcentagem = 0;

    if(fm.m->Rh && fp.p->Rh)
    {
        cont = 16;

        Matriz[0][0] = R;
        Matriz[0][1] = R;
        Matriz[1][0] = R;
        Matriz[1][1] = R;

        probabilidade[0] = Matriz[0][0] * Matriz[1][0];
        probabilidade[1] = Matriz[0][1] * Matriz[1][1];
        probabilidade[2] = Matriz[0][0] * Matriz[1][1];
        probabilidade[3] = Matriz[0][1] * Matriz[1][0];

        Matriz[0][0] = R;
        Matriz[0][1] = R;
        Matriz[1][0] = R;
        Matriz[1][1] = r;

        probabilidade[4] = Matriz[0][0] * Matriz[1][0];
        probabilidade[5] = Matriz[0][1] * Matriz[1][1];
        probabilidade[6] = Matriz[0][0] * Matriz[1][1];
        probabilidade[7] = Matriz[0][1] * Matriz[1][0];

        Matriz[0][0] = R;
        Matriz[0][1] = r;
        Matriz[1][0] = R;
        Matriz[1][1] = R;

        probabilidade[8] = Matriz[0][0] * Matriz[1][0];
        probabilidade[9] = Matriz[0][1] * Matriz[1][1];
        probabilidade[10] = Matriz[0][0] * Matriz[1][1];
        probabilidade[11] = Matriz[0][1] * Matriz[1][0];

        Matriz[0][0] = R;
        Matriz[0][1] = r;
        Matriz[1][0] = R;
        Matriz[1][1] = r;

        probabilidade[12] = Matriz[0][0] * Matriz[1][0];
        probabilidade[13] = Matriz[0][1] * Matriz[1][1];
        probabilidade[14] = Matriz[0][0] * Matriz[1][1];
        probabilidade[15] = Matriz[0][1] * Matriz[1][0];
    }

    else if(fm.m->Rh || fp.p->Rh)
    {
        cont = 8;

        Matriz[0][0] = R;
        Matriz[0][1] = R;
        Matriz[1][0] = r;
        Matriz[1][1] = r;

        probabilidade[0] = Matriz[0][0] * Matriz[1][0];
        probabilidade[1] = Matriz[0][1] * Matriz[1][1];
        probabilidade[2] = Matriz[0][0] * Matriz[1][1];
        probabilidade[3] = Matriz[0][1] * Matriz[1][0];

        Matriz[0][0] = R;
        Matriz[0][1] = r;
        Matriz[1][0] = r;
        Matriz[1][1] = r;

        probabilidade[4] = Matriz[0][0] * Matriz[1][0];
        probabilidade[5] = Matriz[0][1] * Matriz[1][1];
        probabilidade[6] = Matriz[0][0] * Matriz[1][1];
        probabilidade[7] = Matriz[0][1] * Matriz[1][0];
    }

    else
    {
        cont = 4;

        Matriz[0][0] = r;
        Matriz[0][1] = r;
        Matriz[1][0] = r;
        Matriz[1][1] = r;

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

    this->Rh = porcentagem;
}
