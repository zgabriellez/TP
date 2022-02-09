#include "famili.h"

using namespace std;

void Bebe :: pFibrose (const Familia_Mae &fm, const Familia_Pai &fp)
{
    qreal porcentagem = 0, probabilidade_m = 0, probabilidade_p = 0;

    if(fm.m->Fibrose && fp.p->Fibrose)
    {
        porcentagem = 1;
    }

    else if ((fm.m->Fibrose && (!fp.p->Fibrose) && (!fp.Fibrose)) || (fp.p->Fibrose && (!fm.m->Fibrose) && (!fm.Fibrose)) )
    {
        porcentagem = 0;
    }

    else if((!fm.m->Fibrose) && (!fp.p->Fibrose) && (!fp.Fibrose) && (!fm.Fibrose))
    {
        porcentagem = 0;
    }

    else if(fm.m->Fibrose && (!fp.p->Fibrose) && fp.Fibrose)
    {
        if (fp.HFC->parente == 2 || fp.HFC->parente == 3)
        {
            switch (fp.HFC->parente)
            {
            case 2:
                probabilidade_p = 1;
                break;
            case 3:
                probabilidade_p = 1/3;
                break;
            }
        }
        else if(fp.HFC->pMaterno == 1)
            probabilidade_p = 1;
        else if(fp.HFC->pPaterno == 1)
            probabilidade_p = 1;

        else if(fp.HFC->pMaterno == 4 && fp.HFC->pPaterno == 4)
        {
            probabilidade_p = 2/3;
        }

        else if((fp.HFC->pMaterno == 4 && fp.HFC->pPaterno == 5) || (fp.HFC->pMaterno == 5 && fp.HFC->pPaterno == 4))
        {
            probabilidade_p = 11/18;
        }

        else if((fp.HFC->pMaterno == 4 && fp.HFC->pPaterno == 6) || (fp.HFC->pMaterno == 6 && fp.HFC->pPaterno == 4))
        {
            probabilidade_p = 16/27;
        }

        else if(fp.HFC->pMaterno == 5 && fp.HFC->pPaterno == 5)
        {
            probabilidade_p = 14/27;
        }

        else if((fp.HFC->pMaterno == 5 && fp.HFC->pPaterno == 6) || (fp.HFC->pMaterno == 6 && fp.HFC->pPaterno == 5))
        {
            probabilidade_p = 79/162;
        }

        else if(fp.HFC->pMaterno == 6 && fp.HFC->pPaterno == 6)
        {
            probabilidade_p = 110/243;
        }

        else if((fp.HFC->pMaterno == 4 && fp.HFC->pPaterno == 7) || (fp.HFC->pMaterno == 7 && fp.HFC->pPaterno == 4))
        {
            probabilidade_p = 1/2;
        }
        else if((fp.HFC->pMaterno == 5 && fp.HFC->pPaterno == 7) || (fp.HFC->pMaterno == 7 && fp.HFC->pPaterno == 5))
        {
            probabilidade_p = 1/3;
        }
        else
        {
            probabilidade_p = 5/18;
        }

        porcentagem = (probabilidade_p)/2;
    }

    else if(fp.p->Fibrose && (!fm.m->Fibrose) && fm.Fibrose)
    {
        if (fm.HFC->parente == 2 || fm.HFC->parente == 3)
        {
            switch (fm.HFC->parente)
            {
            case 2:
                probabilidade_m = 1;
                break;
            case 3:
                probabilidade_m = 1/3;
                break;
            }
        }
        else if(fm.HFC->pMaterno == 1)
            probabilidade_m = 1;
        else if(fm.HFC->pPaterno == 1)
            probabilidade_m = 1;

        else if(fm.HFC->pMaterno == 4 && fm.HFC->pPaterno == 4)
        {
            probabilidade_m = 2/3;
        }

        else if((fm.HFC->pMaterno == 4 && fm.HFC->pPaterno == 5) || (fm.HFC->pMaterno == 5 && fm.HFC->pPaterno == 4))
        {
            probabilidade_m = 11/18;
        }

        else if((fm.HFC->pMaterno == 4 && fm.HFC->pPaterno == 6) || (fm.HFC->pMaterno == 6 && fm.HFC->pPaterno == 4))
        {
            probabilidade_m = 16/27;
        }

        else if(fm.HFC->pMaterno == 5 && fm.HFC->pPaterno == 5)
        {
            probabilidade_m = 14/27;
        }

        else if((fm.HFC->pMaterno == 5 && fm.HFC->pPaterno == 6) || (fm.HFC->pMaterno == 6 && fm.HFC->pPaterno == 3))
        {
            probabilidade_m = 79/162;
        }

        else if(fm.HFC->pMaterno == 6 && fm.HFC->pPaterno == 6)
        {
            probabilidade_m = 110/243;
        }

        else if((fm.HFC->pMaterno == 4 && fm.HFC->pPaterno == 7) || (fm.HFC->pMaterno == 7 && fm.HFC->pPaterno == 4))
        {
            probabilidade_m = 1/2;
        }
        else if((fm.HFC->pMaterno == 5 && fm.HFC->pPaterno == 7) || (fm.HFC->pMaterno == 7 && fm.HFC->pPaterno == 5))
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
        if (fm.HFC->parente == 2 || fm.HFC->parente == 3)
        {
            switch (fm.HFC->parente)
            {
            case 2:
                probabilidade_m = 1;
                break;
            case 3:
                probabilidade_m = 1/3;
                break;
            }
        }
        else if(fm.HFC->pMaterno == 1)
            probabilidade_m = 1;
        else if(fm.HFC->pPaterno == 1)
            probabilidade_m = 1;

        else if(fm.HFC->pMaterno == 4 && fm.HFC->pPaterno == 4)
        {
            probabilidade_m = 2/3;
        }

        else if((fm.HFC->pMaterno == 4 && fm.HFC->pPaterno == 5) || (fm.HFC->pMaterno == 5 && fm.HFC->pPaterno == 4))
        {
            probabilidade_m = 11/18;
        }

        else if((fm.HFC->pMaterno == 4 && fm.HFC->pPaterno == 6) || (fm.HFC->pMaterno == 6 && fm.HFC->pPaterno == 4))
        {
            probabilidade_m = 16/27;
        }

        else if(fm.HFC->pMaterno == 5 && fm.HFC->pPaterno == 5)
        {
            probabilidade_m = 14/27;
        }

        else if((fm.HFC->pMaterno == 5 && fm.HFC->pPaterno == 6) || (fm.HFC->pMaterno == 6 && fm.HFC->pPaterno == 3))
        {
            probabilidade_m = 79/162;
        }

        else if(fm.HFC->pMaterno == 6 && fm.HFC->pPaterno == 6)
        {
            probabilidade_m = 110/243;
        }

        else if((fm.HFC->pMaterno == 4 && fm.HFC->pPaterno == 7) || (fm.HFC->pMaterno == 7 && fm.HFC->pPaterno == 4))
        {
            probabilidade_m = 1/2;
        }
        else if((fm.HFC->pMaterno == 5 && fm.HFC->pPaterno == 7) || (fm.HFC->pMaterno == 7 && fm.HFC->pPaterno == 5))
        {
            probabilidade_m = 1/3;
        }
        else
        {
            probabilidade_m = 5/18;
        }

        if (fp.HFC->parente == 2 || fp.HFC->parente == 3)
        {
            switch (fp.HFC->parente)
            {
            case 2:
                probabilidade_p = 1;
                break;
            case 3:
                probabilidade_p = 1/3;
                break;
            }
        }
        else if(fp.HFC->pMaterno == 1)
            probabilidade_p = 1;
        else if(fp.HFC->pPaterno == 1)
            probabilidade_p = 1;

        else if(fp.HFC->pMaterno == 4 && fp.HFC->pPaterno == 4)
        {
            probabilidade_p = 2/3;
        }

        else if((fp.HFC->pMaterno == 4 && fp.HFC->pPaterno == 5) || (fp.HFC->pMaterno == 5 && fp.HFC->pPaterno == 4))
        {
            probabilidade_p = 11/18;
        }

        else if((fp.HFC->pMaterno == 4 && fp.HFC->pPaterno == 6) || (fp.HFC->pMaterno == 6 && fp.HFC->pPaterno == 4))
        {
            probabilidade_p = 16/27;
        }

        else if(fp.HFC->pMaterno == 5 && fp.HFC->pPaterno == 5)
        {
            probabilidade_p = 14/27;
        }

        else if((fp.HFC->pMaterno == 5 && fp.HFC->pPaterno == 6) || (fp.HFC->pMaterno == 6 && fp.HFC->pPaterno == 5))
        {
            probabilidade_p = 79/162;
        }

        else if(fp.HFC->pMaterno == 6 && fp.HFC->pPaterno == 6)
        {
            probabilidade_p = 110/243;
        }

        else if((fp.HFC->pMaterno == 4 && fp.HFC->pPaterno == 7) || (fp.HFC->pMaterno == 7 && fp.HFC->pPaterno == 4))
        {
            probabilidade_p = 1/2;
        }
        else if((fp.HFC->pMaterno == 5 && fp.HFC->pPaterno == 7) || (fp.HFC->pMaterno == 7 && fp.HFC->pPaterno == 5))
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
    this->Fibrose = porcentagem;
}
