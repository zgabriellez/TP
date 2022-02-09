#include "famili.h"

using namespace std;

void Bebe ::pABO(const Familia_Mae &fm, const Familia_Pai &fp)
{
    int Matriz[2][2];
    int A = 2, B = 3, i = 1, j;
    int probabilidade[16];
    qreal cont, porcentagem[4];

    porcentagem[0] = 0;
    porcentagem[1] = 0;
    porcentagem[2] = 0;
    porcentagem[3] = 0;

    if(fm.m->ABO =="A" && fp.p->ABO =="A")
    {
        cont = 16;
        Matriz[0][0] = A;
        Matriz[0][1] = i;
        Matriz[1][0] = A;
        Matriz[1][1] = i;

        probabilidade[0] = Matriz[0][0] * Matriz[1][0];
        probabilidade[1] = Matriz[0][1] * Matriz[1][1];
        probabilidade[2] = Matriz[0][0] * Matriz[1][1];
        probabilidade[3] = Matriz[0][1] * Matriz[1][0];

        Matriz[0][0] = A;
        Matriz[0][1] = i;
        Matriz[1][0] = A;
        Matriz[1][1] = A;

        probabilidade[4] = Matriz[0][0] * Matriz[1][0];
        probabilidade[5] = Matriz[0][1] * Matriz[1][1];
        probabilidade[6] = Matriz[0][0] * Matriz[1][1];
        probabilidade[7] = Matriz[0][1] * Matriz[1][0];

        Matriz[0][0] = A;
        Matriz[0][1] = A;
        Matriz[1][0] = A;
        Matriz[1][1] = i;

        probabilidade[8] = Matriz[0][0] * Matriz[1][0];
        probabilidade[9] = Matriz[0][1] * Matriz[1][1];
        probabilidade[10] = Matriz[0][0] * Matriz[1][1];
        probabilidade[11] = Matriz[0][1] * Matriz[1][0];

        Matriz[0][0] = A;
        Matriz[0][1] = A;
        Matriz[1][0] = A;
        Matriz[1][1] = A;

        probabilidade[12] = Matriz[0][0] * Matriz[1][0];
        probabilidade[13] = Matriz[0][1] * Matriz[1][1];
        probabilidade[14] = Matriz[0][0] * Matriz[1][1];
        probabilidade[15] = Matriz[0][1] * Matriz[1][0];

    }

    else if(fm.m->ABO == "B" && fp.p->ABO == "B")
    {
        cont = 16;

        Matriz[0][0] = B;
        Matriz[0][1] = i;
        Matriz[1][0] = B;
        Matriz[1][1] = i;

        probabilidade[0] = Matriz[0][0] * Matriz[1][0];
        probabilidade[1] = Matriz[0][1] * Matriz[1][1];
        probabilidade[2] = Matriz[0][0] * Matriz[1][1];
        probabilidade[3] = Matriz[0][1] * Matriz[1][0];

        Matriz[0][0] = B;
        Matriz[0][1] = i;
        Matriz[1][0] = B;
        Matriz[1][1] = B;

        probabilidade[4] = Matriz[0][0] * Matriz[1][0];
        probabilidade[5] = Matriz[0][1] * Matriz[1][1];
        probabilidade[6] = Matriz[0][0] * Matriz[1][1];
        probabilidade[7] = Matriz[0][1] * Matriz[1][0];

        Matriz[0][0] = B;
        Matriz[0][1] = B;
        Matriz[1][0] = B;
        Matriz[1][1] = i;

        probabilidade[8] = Matriz[0][0] * Matriz[1][0];
        probabilidade[9] = Matriz[0][1] * Matriz[1][1];
        probabilidade[10] = Matriz[0][0] * Matriz[1][1];
        probabilidade[11] = Matriz[0][1] * Matriz[1][0];

        Matriz[0][0] = B;
        Matriz[0][1] = B;
        Matriz[1][0] = B;
        Matriz[1][1] = B;

        probabilidade[12] = Matriz[0][0] * Matriz[1][0];
        probabilidade[13] = Matriz[0][1] * Matriz[1][1];
        probabilidade[14] = Matriz[0][0] * Matriz[1][1];
        probabilidade[15] = Matriz[0][1] * Matriz[1][0];
    }

    else if (fm.m->ABO == "AB" && fp.p->ABO == "AB")
    {
        cont = 4;

        Matriz[0][0] = A;
        Matriz[0][1] = B;
        Matriz[1][0] = A;
        Matriz[1][1] = B;

        probabilidade[0] = Matriz[0][0] * Matriz[1][0];
        probabilidade[1] = Matriz[0][1] * Matriz[1][1];
        probabilidade[2] = Matriz[0][0] * Matriz[1][1];
        probabilidade[3] = Matriz[0][1] * Matriz[1][0];
    }

    else if(fm.m->ABO == "O" && fp.p->ABO == "O")
    {
        cont = 4;

        Matriz[0][0] = i;
        Matriz[0][1] = i;
        Matriz[1][0] = i;
        Matriz[1][1] = i;

        probabilidade[0] = Matriz[0][0] * Matriz[1][0];
        probabilidade[1] = Matriz[0][1] * Matriz[1][1];
        probabilidade[2] = Matriz[0][0] * Matriz[1][1];
        probabilidade[3] = Matriz[0][1] * Matriz[1][0];
    }

    else if((fm.m->ABO == "A" && fp.p->ABO == "O") || (fm.m->ABO == "O" && fp.p->ABO == "A"))
    {
        cont = 8;

        Matriz[0][0] = A;
        Matriz[0][1] = A;
        Matriz[1][0] = i;
        Matriz[1][1] = i;

        probabilidade[0] = Matriz[0][0] * Matriz[1][0];
        probabilidade[1] = Matriz[0][1] * Matriz[1][1];
        probabilidade[2] = Matriz[0][0] * Matriz[1][1];
        probabilidade[3] = Matriz[0][1] * Matriz[1][0];

        Matriz[0][0] = A;
        Matriz[0][1] = i;
        Matriz[1][0] = i;
        Matriz[1][1] = i;

        probabilidade[4] = Matriz[0][0] * Matriz[1][0];
        probabilidade[5] = Matriz[0][1] * Matriz[1][1];
        probabilidade[6] = Matriz[0][0] * Matriz[1][1];
        probabilidade[7] = Matriz[0][1] * Matriz[1][0];
    }

    else if((fm.m->ABO == "A" && fp.p->ABO == "B") || (fm.m->ABO == "B" && fp.p->ABO == "A"))
    {
        cont = 16;

        Matriz[0][0] = A;
        Matriz[0][1] = A;
        Matriz[1][0] = B;
        Matriz[1][1] = B;

        probabilidade[0] = Matriz[0][0] * Matriz[1][0];
        probabilidade[1] = Matriz[0][1] * Matriz[1][1];
        probabilidade[2] = Matriz[0][0] * Matriz[1][1];
        probabilidade[3] = Matriz[0][1] * Matriz[1][0];

        Matriz[0][0] = A;
        Matriz[0][1] = i;
        Matriz[1][0] = B;
        Matriz[1][1] = B;

        probabilidade[4] = Matriz[0][0] * Matriz[1][0];
        probabilidade[5] = Matriz[0][1] * Matriz[1][1];
        probabilidade[6] = Matriz[0][0] * Matriz[1][1];
        probabilidade[7] = Matriz[0][1] * Matriz[1][0];

        Matriz[0][0] = A;
        Matriz[0][1] = A;
        Matriz[1][0] = B;
        Matriz[1][1] = i;

        probabilidade[8] = Matriz[0][0] * Matriz[1][0];
        probabilidade[9] = Matriz[0][1] * Matriz[1][1];
        probabilidade[10] = Matriz[0][0] * Matriz[1][1];
        probabilidade[11] = Matriz[0][1] * Matriz[1][0];

        Matriz[0][0] = A;
        Matriz[0][1] = i;
        Matriz[1][0] = B;
        Matriz[1][1] = i;

        probabilidade[12] = Matriz[0][0] * Matriz[1][0];
        probabilidade[13] = Matriz[0][1] * Matriz[1][1];
        probabilidade[14] = Matriz[0][0] * Matriz[1][1];
        probabilidade[15] = Matriz[0][1] * Matriz[1][0];
    }

    else if((fm.m->ABO == "A" && fp.p->ABO == "AB") || (fm.m->ABO == "AB" && fp.p->ABO == "A"))
    {
        cont = 8;

        Matriz[0][0] = A;
        Matriz[0][1] = A;
        Matriz[1][0] = A;
        Matriz[1][1] = B;

        probabilidade[0] = Matriz[0][0] * Matriz[1][0];
        probabilidade[1] = Matriz[0][1] * Matriz[1][1];
        probabilidade[2] = Matriz[0][0] * Matriz[1][1];
        probabilidade[3] = Matriz[0][1] * Matriz[1][0];

        Matriz[0][0] = A;
        Matriz[0][1] = i;
        Matriz[1][0] = A;
        Matriz[1][1] = B;

        probabilidade[4] = Matriz[0][0] * Matriz[1][0];
        probabilidade[5] = Matriz[0][1] * Matriz[1][1];
        probabilidade[6] = Matriz[0][0] * Matriz[1][1];
        probabilidade[7] = Matriz[0][1] * Matriz[1][0];
    }

    else if((fm.m->ABO == "B" && fp.p->ABO == "O") || (fm.m->ABO == "O" && fp.p->ABO == "B"))
    {
        cont = 8;

        Matriz[0][0] = B;
        Matriz[0][1] = B;
        Matriz[1][0] = i;
        Matriz[1][1] = i;

        probabilidade[0] = Matriz[0][0] * Matriz[1][0];
        probabilidade[1] = Matriz[0][1] * Matriz[1][1];
        probabilidade[2] = Matriz[0][0] * Matriz[1][1];
        probabilidade[3] = Matriz[0][1] * Matriz[1][0];

        Matriz[0][0] = B;
        Matriz[0][1] = i;
        Matriz[1][0] = i;
        Matriz[1][1] = i;

        probabilidade[4] = Matriz[0][0] * Matriz[1][0];
        probabilidade[5] = Matriz[0][1] * Matriz[1][1];
        probabilidade[6] = Matriz[0][0] * Matriz[1][1];
        probabilidade[7] = Matriz[0][1] * Matriz[1][0];
    }

    else if((fm.m->ABO == "B" && fp.p->ABO == "AB") || (fm.m->ABO == "AB" && fp.p->ABO == "B"))
    {
        cont = 8;

        Matriz[0][0] = B;
        Matriz[0][1] = B;
        Matriz[1][0] = A;
        Matriz[1][1] = B;

        probabilidade[0] = Matriz[0][0] * Matriz[1][0];
        probabilidade[1] = Matriz[0][1] * Matriz[1][1];
        probabilidade[2] = Matriz[0][0] * Matriz[1][1];
        probabilidade[3] = Matriz[0][1] * Matriz[1][0];

        Matriz[0][0] = B;
        Matriz[0][1] = i;
        Matriz[1][0] = A;
        Matriz[1][1] = B;

        probabilidade[4] = Matriz[0][0] * Matriz[1][0];
        probabilidade[5] = Matriz[0][1] * Matriz[1][1];
        probabilidade[6] = Matriz[0][0] * Matriz[1][1];
        probabilidade[7] = Matriz[0][1] * Matriz[1][0];
    }

    else if((fm.m->ABO == "O" && fp.p->ABO == "AB") || (fm.m->ABO == "AB" && fp.p->ABO == "O"))
    {
        cont = 4;

        Matriz[0][0] = i;
        Matriz[0][1] = i;
        Matriz[1][0] = A;
        Matriz[1][1] = B;

        probabilidade[0] = Matriz[0][0] * Matriz[1][0];
        probabilidade[1] = Matriz[0][1] * Matriz[1][1];
        probabilidade[2] = Matriz[0][0] * Matriz[1][1];
        probabilidade[3] = Matriz[0][1] * Matriz[1][0];
    }

    for(j = 0; j <  cont; j++)
    {
        if(probabilidade[j] == 2 || probabilidade[j] == 4)
            porcentagem[0]++;
        else if (probabilidade[j] == 3 || probabilidade[j] == 9)
            porcentagem[1]++;
        else if(probabilidade[j] == 6)
            porcentagem[2]++;
        else if(probabilidade[j] == 1)
            porcentagem[3]++;
    }

    for(j = 0; j < 4; j++)
    {
        porcentagem[j] *= (100/cont);
    }

    this->ABO_A = porcentagem[0];
    this->ABO_B = porcentagem[1];
    this->ABO_AB = porcentagem[2];
    this->ABO_O = porcentagem[3];
}
