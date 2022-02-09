#include "famili.h"

void Bebe::pDaltonismo(const Familia_Mae &fm, const Familia_Pai &fp)
{
    int D = 3, d = 2, Y =1, matriz[2][2], probabilidade[16];
    qreal i;

    if (fm.m->Daltonismo)
    {
        i = 4;

        matriz[0][0] = d;
        matriz[0][1] = d;

        if(fp.p->Daltonismo)
        {
            matriz[1][0] = d;
            matriz[1][1] = Y;
        }
        else
        {
            matriz[1][0] = D;
            matriz[1][1] = Y;
        }

        probabilidade[0] = matriz[0][0] * matriz[1][0];
        probabilidade[1] = matriz[0][0] * matriz[1][1];
        probabilidade[2] = matriz[1][0] * matriz[1][0];
        probabilidade[3] = matriz[0][1] * matriz[1][1];

    }

    if((!fm.m->Daltonismo) && fm.Daltonismo && fp.p->Daltonismo)
    {
        matriz[1][0] = d;
        matriz[1][1] = Y;

        switch(fm.pDaltonismo)
        {
        case 1:
            i=4;

            matriz[0][0] = D;
            matriz[0][1] = d;

            probabilidade[0] = matriz[0][0] * matriz[1][0];
            probabilidade[1] = matriz[0][0] * matriz[1][1]; //H
            probabilidade[2] = matriz[1][0] * matriz[1][0];
            probabilidade[3] = matriz[0][1] * matriz[1][1]; //H

            break;

        case 2:
            i=4;

            matriz[0][0] = D;
            matriz[0][1] = d;

            probabilidade[0] = matriz[0][0] * matriz[1][0];
            probabilidade[1] = matriz[0][0] * matriz[1][1];
            probabilidade[2] = matriz[1][0] * matriz[1][0];
            probabilidade[3] = matriz[0][1] * matriz[1][1];

            break;

        case 3:
        case 4:
        case 5:
        case 6:
            i=8;

            matriz[0][0] = D;
            matriz[0][1] = d;

            probabilidade[0] = matriz[0][0] * matriz[1][0];
            probabilidade[1] = matriz[0][0] * matriz[1][1];
            probabilidade[2] = matriz[1][0] * matriz[1][0];
            probabilidade[3] = matriz[0][1] * matriz[1][1];

            matriz[0][1] = D;

            probabilidade[4] = matriz[0][0] * matriz[1][0];
            probabilidade[5] = matriz[0][0] * matriz[1][1];
            probabilidade[6] = matriz[1][0] * matriz[1][0];
            probabilidade[7] = matriz[0][1] * matriz[1][1];

            break;
        }
    }

    if((!fm.m->Daltonismo) && fm.Daltonismo && (!fp.p->Daltonismo))
    {
        matriz[1][0] = D;
        matriz[1][1] = Y;

        switch(fm.pDaltonismo)
        {
        case 1:
            i=4;

            matriz[0][0] = D;
            matriz[0][1] = d;

            probabilidade[0] = matriz[0][0] * matriz[1][0];
            probabilidade[1] = matriz[0][0] * matriz[1][1];
            probabilidade[2] = matriz[1][0] * matriz[1][0];
            probabilidade[3] = matriz[0][1] * matriz[1][1];

            break;

        case 2:
            i=4;

            matriz[0][0] = D;
            matriz[0][1] = d;

            probabilidade[0] = matriz[0][0] * matriz[1][0];
            probabilidade[1] = matriz[0][0] * matriz[1][1];
            probabilidade[2] = matriz[1][0] * matriz[1][0];
            probabilidade[3] = matriz[0][1] * matriz[1][1];

            break;

        case 3:
        case 4:
        case 5:
        case 6:
            i=8;

            matriz[0][0] = D;
            matriz[0][1] = d;

            probabilidade[0] = matriz[0][0] * matriz[1][0];
            probabilidade[1] = matriz[0][0] * matriz[1][1];
            probabilidade[2] = matriz[1][0] * matriz[1][0];
            probabilidade[3] = matriz[0][1] * matriz[1][1];

            matriz[0][1] = D;

            probabilidade[4] = matriz[0][0] * matriz[1][0];
            probabilidade[5] = matriz[0][0] * matriz[1][1];
            probabilidade[6] = matriz[1][0] * matriz[1][0];
            probabilidade[7] = matriz[0][1] * matriz[1][1];

            break;

        }
    }

    qreal porcentagemM, porcentagemH;
    porcentagemM = 0; //dd
    porcentagemH = 0; //dY


    int cont;

    for(cont = 0; cont < i; cont++)
    {
        switch(probabilidade[cont])
        {
        case 2:
            porcentagemH++;
            break;
        case 4:
            porcentagemM++;
            break;
        }
    }


    porcentagemM *= 200/i;
    porcentagemH *= 200/i;


    this->Daltonismo_H = porcentagemH;
    this->Daltonismo_M = porcentagemM;
}
