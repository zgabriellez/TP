#include "famili.h"

using namespace std;

void Bebe :: pBatten (const Familia_Mae &fm, const Familia_Pai &fp)
{
    qreal porcentagem = 0, probabilidade_m = 0, probabilidade_p = 0;

    if(fm.m->Batten && fp.p->Batten)
    {
        porcentagem = 1;
    }

    else if ((fm.m->Batten && (!fp.p->Batten) && (!fp.Batten)) || (fp.p->Batten && (!fm.m->Batten) && (!fm.Batten)) )
    {
        porcentagem = 0;
    }

    else if((!fm.m->Batten) && (!fp.p->Batten) && (!fp.Batten) && (!fm.Batten))
    {
        porcentagem = 0;
    }

    else if(fm.m->Batten && (!fp.p->Batten) && fp.Batten)
    {
        if (fp.HB->parente == 2 || fp.HB->parente == 3)
        {
            switch (fp.HB->parente)
            {
            case 2:
                probabilidade_p = 1;
                break;
            case 3:
                probabilidade_p = 1/3;
                break;
            }
        }
        else if(fp.HB->pMaterno == 1)
            probabilidade_p = 1;
        else if(fp.HB->pPaterno == 1)
            probabilidade_p = 1;

        else if(fp.HB->pMaterno == 4 && fp.HB->pPaterno == 4)
        {
            probabilidade_p = 2/3;
        }

        else if((fp.HB->pMaterno == 4 && fp.HB->pPaterno == 5) || (fp.HB->pMaterno == 5 && fp.HB->pPaterno == 4))
        {
            probabilidade_p = 11/18;
        }

        else if((fp.HB->pMaterno == 4 && fp.HB->pPaterno == 6) || (fp.HB->pMaterno == 6 && fp.HB->pPaterno == 4))
        {
            probabilidade_p = 16/27;
        }

        else if(fp.HB->pMaterno == 5 && fp.HB->pPaterno == 5)
        {
            probabilidade_p = 14/27;
        }

        else if((fp.HB->pMaterno == 5 && fp.HB->pPaterno == 6) || (fp.HB->pMaterno == 6 && fp.HB->pPaterno == 5))
        {
            probabilidade_p = 79/162;
        }

        else if(fp.HB->pMaterno == 6 && fp.HB->pPaterno == 6)
        {
            probabilidade_p = 110/243;
        }

        else if((fp.HB->pMaterno == 4 && fp.HB->pPaterno == 7) || (fp.HB->pMaterno == 7 && fp.HB->pPaterno == 4))
        {
            probabilidade_p = 1/2;
        }
        else if((fp.HB->pMaterno == 5 && fp.HB->pPaterno == 7) || (fp.HB->pMaterno == 7 && fp.HB->pPaterno == 5))
        {
            probabilidade_p = 1/3;
        }
        else
        {
            probabilidade_p = 5/18;
        }

        porcentagem = (probabilidade_p)/2;
    }

    else if(fp.p->Batten && (!fm.m->Batten) && fm.Batten)
    {
        if (fm.HB->parente == 2 || fm.HB->parente == 3)
        {
            switch (fm.HB->parente)
            {
            case 2:
                probabilidade_m = 1;
                break;
            case 3:
                probabilidade_m = 1/3;
                break;
            }
        }
        else if(fm.HB->pMaterno == 1)
            probabilidade_m = 1;
        else if(fm.HB->pPaterno == 1)
            probabilidade_m = 1;

        else if(fm.HB->pMaterno == 4 && fm.HB->pPaterno == 4)
        {
            probabilidade_m = 2/3;
        }

        else if((fm.HB->pMaterno == 4 && fm.HB->pPaterno == 5) || (fm.HB->pMaterno == 5 && fm.HB->pPaterno == 4))
        {
            probabilidade_m = 11/18;
        }

        else if((fm.HB->pMaterno == 4 && fm.HB->pPaterno == 6) || (fm.HB->pMaterno == 6 && fm.HB->pPaterno == 4))
        {
            probabilidade_m = 16/27;
        }

        else if(fm.HB->pMaterno == 5 && fm.HB->pPaterno == 5)
        {
            probabilidade_m = 14/27;
        }

        else if((fm.HB->pMaterno == 5 && fm.HB->pPaterno == 6) || (fm.HB->pMaterno == 6 && fm.HB->pPaterno == 3))
        {
            probabilidade_m = 79/162;
        }

        else if(fm.HB->pMaterno == 6 && fm.HB->pPaterno == 6)
        {
            probabilidade_m = 110/243;
        }

        else if((fm.HB->pMaterno == 4 && fm.HB->pPaterno == 7) || (fm.HB->pMaterno == 7 && fm.HB->pPaterno == 4))
        {
            probabilidade_m = 1/2;
        }
        else if((fm.HB->pMaterno == 5 && fm.HB->pPaterno == 7) || (fm.HB->pMaterno == 7 && fm.HB->pPaterno == 5))
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
        if (fm.HB->parente == 2 || fm.HB->parente == 3)
        {
            switch (fm.HB->parente)
            {
            case 2:
                probabilidade_m = 1;
                break;
            case 3:
                probabilidade_m = 1/3;
                break;
            }
        }
        else if(fm.HB->pMaterno == 1)
            probabilidade_m = 1;
        else if(fm.HB->pPaterno == 1)
            probabilidade_m = 1;

        else if(fm.HB->pMaterno == 4 && fm.HB->pPaterno == 4)
        {
            probabilidade_m = 2/3;
        }

        else if((fm.HB->pMaterno == 4 && fm.HB->pPaterno == 5) || (fm.HB->pMaterno == 5 && fm.HB->pPaterno == 4))
        {
            probabilidade_m = 11/18;
        }

        else if((fm.HB->pMaterno == 4 && fm.HB->pPaterno == 6) || (fm.HB->pMaterno == 6 && fm.HB->pPaterno == 4))
        {
            probabilidade_m = 16/27;
        }

        else if(fm.HB->pMaterno == 5 && fm.HB->pPaterno == 5)
        {
            probabilidade_m = 14/27;
        }

        else if((fm.HB->pMaterno == 5 && fm.HB->pPaterno == 6) || (fm.HB->pMaterno == 6 && fm.HB->pPaterno == 3))
        {
            probabilidade_m = 79/162;
        }

        else if(fm.HB->pMaterno == 6 && fm.HB->pPaterno == 6)
        {
            probabilidade_m = 110/243;
        }

        else if((fm.HB->pMaterno == 4 && fm.HB->pPaterno == 7) || (fm.HB->pMaterno == 7 && fm.HB->pPaterno == 4))
        {
            probabilidade_m = 1/2;
        }
        else if((fm.HB->pMaterno == 5 && fm.HB->pPaterno == 7) || (fm.HB->pMaterno == 7 && fm.HB->pPaterno == 5))
        {
            probabilidade_m = 1/3;
        }
        else
        {
            probabilidade_m = 5/18;
        }

        if (fp.HB->parente == 2 || fp.HB->parente == 3)
        {
            switch (fp.HB->parente)
            {
            case 2:
                probabilidade_p = 1;
                break;
            case 3:
                probabilidade_p = 1/3;
                break;
            }
        }
        else if(fp.HB->pMaterno == 1)
            probabilidade_p = 1;
        else if(fp.HB->pPaterno == 1)
            probabilidade_p = 1;

        else if(fp.HB->pMaterno == 4 && fp.HB->pPaterno == 4)
        {
            probabilidade_p = 2/3;
        }

        else if((fp.HB->pMaterno == 4 && fp.HB->pPaterno == 5) || (fp.HB->pMaterno == 5 && fp.HB->pPaterno == 4))
        {
            probabilidade_p = 11/18;
        }

        else if((fp.HB->pMaterno == 4 && fp.HB->pPaterno == 6) || (fp.HB->pMaterno == 6 && fp.HB->pPaterno == 4))
        {
            probabilidade_p = 16/27;
        }

        else if(fp.HB->pMaterno == 5 && fp.HB->pPaterno == 5)
        {
            probabilidade_p = 14/27;
        }

        else if((fp.HB->pMaterno == 5 && fp.HB->pPaterno == 6) || (fp.HB->pMaterno == 6 && fp.HB->pPaterno == 5))
        {
            probabilidade_p = 79/162;
        }

        else if(fp.HB->pMaterno == 6 && fp.HB->pPaterno == 6)
        {
            probabilidade_p = 110/243;
        }

        else if((fp.HB->pMaterno == 4 && fp.HB->pPaterno == 7) || (fp.HB->pMaterno == 7 && fp.HB->pPaterno == 4))
        {
            probabilidade_p = 1/2;
        }
        else if((fp.HB->pMaterno == 5 && fp.HB->pPaterno == 7) || (fp.HB->pMaterno == 7 && fp.HB->pPaterno == 5))
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
    this->Batten = porcentagem;
}
