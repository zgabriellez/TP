#include "famili.h"

using namespace std;

void Bebe :: pFalciforme (const Familia_Mae &fm, const Familia_Pai &fp)
{
    qreal porcentagem = 0, probabilidade_m = 0, probabilidade_p = 0;

    if(fm.m->Falciforme && fp.p->Falciforme)
    {
        porcentagem = 1;
    }

    else if ((fm.m->Falciforme && (!fp.p->Falciforme) && (!fp.Falciforme)) || (fp.p->Falciforme && (!fm.m->Falciforme) && (!fm.Falciforme)) )
    {
        porcentagem = 0;
    }

    else if((!fm.m->Falciforme) && (!fp.p->Falciforme) && (!fp.Falciforme) && (!fm.Falciforme))
    {
        porcentagem = 0;
    }

    else if(fm.m->Falciforme && (!fp.p->Falciforme) && fp.Falciforme)
    {
        if (fp.HAF->parente == 2 || fp.HAF->parente == 3)
        {
            switch (fp.HAF->parente)
            {
            case 2:
                probabilidade_p = 1;
                break;
            case 3:
                probabilidade_p = 1/3;
                break;
            }
        }
        else if(fp.HAF->pMaterno == 1)
            probabilidade_p = 1;
        else if(fp.HAF->pPaterno == 1)
            probabilidade_p = 1;

        else if(fp.HAF->pMaterno == 4 && fp.HAF->pPaterno == 4)
        {
            probabilidade_p = 2/3;
        }

        else if((fp.HAF->pMaterno == 4 && fp.HAF->pPaterno == 5) || (fp.HAF->pMaterno == 5 && fp.HAF->pPaterno == 4))
        {
            probabilidade_p = 11/18;
        }

        else if((fp.HAF->pMaterno == 4 && fp.HAF->pPaterno == 6) || (fp.HAF->pMaterno == 6 && fp.HAF->pPaterno == 4))
        {
            probabilidade_p = 16/27;
        }

        else if(fp.HAF->pMaterno == 5 && fp.HAF->pPaterno == 5)
        {
            probabilidade_p = 14/27;
        }

        else if((fp.HAF->pMaterno == 5 && fp.HAF->pPaterno == 6) || (fp.HAF->pMaterno == 6 && fp.HAF->pPaterno == 5))
        {
            probabilidade_p = 79/162;
        }

        else if(fp.HAF->pMaterno == 6 && fp.HAF->pPaterno == 6)
        {
            probabilidade_p = 110/243;
        }

        else if((fp.HAF->pMaterno == 4 && fp.HAF->pPaterno == 7) || (fp.HAF->pMaterno == 7 && fp.HAF->pPaterno == 4))
        {
            probabilidade_p = 1/2;
        }
        else if((fp.HAF->pMaterno == 5 && fp.HAF->pPaterno == 7) || (fp.HAF->pMaterno == 7 && fp.HAF->pPaterno == 5))
        {
            probabilidade_p = 1/3;
        }
        else
        {
            probabilidade_p = 5/18;
        }

        porcentagem = (probabilidade_p)/2;
    }

    else if(fp.p->Falciforme && (!fm.m->Falciforme) && fm.Falciforme)
    {
        if (fm.HAF->parente == 2 || fm.HAF->parente == 3)
        {
            switch (fm.HAF->parente)
            {
            case 2:
                probabilidade_m = 1;
                break;
            case 3:
                probabilidade_m = 1/3;
                break;
            }
        }
        else if(fm.HAF->pMaterno == 1)
            probabilidade_m = 1;
        else if(fm.HAF->pPaterno == 1)
            probabilidade_m = 1;

        else if(fm.HAF->pMaterno == 4 && fm.HAF->pPaterno == 4)
        {
            probabilidade_m = 2/3;
        }

        else if((fm.HAF->pMaterno == 4 && fm.HAF->pPaterno == 5) || (fm.HAF->pMaterno == 5 && fm.HAF->pPaterno == 4))
        {
            probabilidade_m = 11/18;
        }

        else if((fm.HAF->pMaterno == 4 && fm.HAF->pPaterno == 6) || (fm.HAF->pMaterno == 6 && fm.HAF->pPaterno == 4))
        {
            probabilidade_m = 16/27;
        }

        else if(fm.HAF->pMaterno == 5 && fm.HAF->pPaterno == 5)
        {
            probabilidade_m = 14/27;
        }

        else if((fm.HAF->pMaterno == 5 && fm.HAF->pPaterno == 6) || (fm.HAF->pMaterno == 6 && fm.HAF->pPaterno == 3))
        {
            probabilidade_m = 79/162;
        }

        else if(fm.HAF->pMaterno == 6 && fm.HAF->pPaterno == 6)
        {
            probabilidade_m = 110/243;
        }

        else if((fm.HAF->pMaterno == 4 && fm.HAF->pPaterno == 7) || (fm.HAF->pMaterno == 7 && fm.HAF->pPaterno == 4))
        {
            probabilidade_m = 1/2;
        }
        else if((fm.HAF->pMaterno == 5 && fm.HAF->pPaterno == 7) || (fm.HAF->pMaterno == 7 && fm.HAF->pPaterno == 5))
        {
            probabilidade_m = 1/3;
        }
        else
        {
            probabilidade_m = 5/18;
        }

        porcentagem = (probabilidade_m)/2;
    }

    else
    {
        if (fm.HAF->parente == 2 || fm.HAF->parente == 3)
        {
            switch (fm.HAF->parente)
            {
            case 2:
                probabilidade_m = 1;
                break;
            case 3:
                probabilidade_m = 1/3;
                break;
            }
        }
        else if(fm.HAF->pMaterno == 1)
            probabilidade_m = 1;
        else if(fm.HAF->pPaterno == 1)
            probabilidade_m = 1;

        else if(fm.HAF->pMaterno == 4 && fm.HAF->pPaterno == 4)
        {
            probabilidade_m = 2/3;
        }

        else if((fm.HAF->pMaterno == 4 && fm.HAF->pPaterno == 5) || (fm.HAF->pMaterno == 5 && fm.HAF->pPaterno == 4))
        {
            probabilidade_m = 11/18;
        }

        else if((fm.HAF->pMaterno == 4 && fm.HAF->pPaterno == 6) || (fm.HAF->pMaterno == 6 && fm.HAF->pPaterno == 4))
        {
            probabilidade_m = 16/27;
        }

        else if(fm.HAF->pMaterno == 5 && fm.HAF->pPaterno == 5)
        {
            probabilidade_m = 14/27;
        }

        else if((fm.HAF->pMaterno == 5 && fm.HAF->pPaterno == 6) || (fm.HAF->pMaterno == 6 && fm.HAF->pPaterno == 3))
        {
            probabilidade_m = 79/162;
        }

        else if(fm.HAF->pMaterno == 6 && fm.HAF->pPaterno == 6)
        {
            probabilidade_m = 110/243;
        }

        else if((fm.HAF->pMaterno == 4 && fm.HAF->pPaterno == 7) || (fm.HAF->pMaterno == 7 && fm.HAF->pPaterno == 4))
        {
            probabilidade_m = 1/2;
        }
        else if((fm.HAF->pMaterno == 5 && fm.HAF->pPaterno == 7) || (fm.HAF->pMaterno == 7 && fm.HAF->pPaterno == 5))
        {
            probabilidade_m = 1/3;
        }
        else
        {
            probabilidade_m = 5/18;
        }

        if (fp.HAF->parente == 2 || fp.HAF->parente == 3)
        {
            switch (fp.HAF->parente)
            {
            case 2:
                probabilidade_p = 1;
                break;
            case 3:
                probabilidade_p = 1/3;
                break;
            }
        }
        else if(fp.HAF->pMaterno == 1)
            probabilidade_p = 1;
        else if(fp.HAF->pPaterno == 1)
            probabilidade_p = 1;

        else if(fp.HAF->pMaterno == 4 && fp.HAF->pPaterno == 4)
        {
            probabilidade_p = 2/3;
        }

        else if((fp.HAF->pMaterno == 4 && fp.HAF->pPaterno == 5) || (fp.HAF->pMaterno == 5 && fp.HAF->pPaterno == 4))
        {
            probabilidade_p = 11/18;
        }

        else if((fp.HAF->pMaterno == 4 && fp.HAF->pPaterno == 6) || (fp.HAF->pMaterno == 6 && fp.HAF->pPaterno == 4))
        {
            probabilidade_p = 16/27;
        }

        else if(fp.HAF->pMaterno == 5 && fp.HAF->pPaterno == 5)
        {
            probabilidade_p = 14/27;
        }

        else if((fp.HAF->pMaterno == 5 && fp.HAF->pPaterno == 6) || (fp.HAF->pMaterno == 6 && fp.HAF->pPaterno == 5))
        {
            probabilidade_p = 79/162;
        }

        else if(fp.HAF->pMaterno == 6 && fp.HAF->pPaterno == 6)
        {
            probabilidade_p = 110/243;
        }

        else if((fp.HAF->pMaterno == 4 && fp.HAF->pPaterno == 7) || (fp.HAF->pMaterno == 7 && fp.HAF->pPaterno == 4))
        {
            probabilidade_p = 1/2;
        }
        else if((fp.HAF->pMaterno == 5 && fp.HAF->pPaterno == 7) || (fp.HAF->pMaterno == 7 && fp.HAF->pPaterno == 5))
        {
            probabilidade_p = 1/3;
        }
        else
        {
            probabilidade_p = 5/18;
        }

        porcentagem = (probabilidade_p) * (probabilidade_m)/4;
    }

    porcentagem *= 100;
    this->Falciforme = porcentagem;
}
