#include "famili.h"

using namespace std;

void Bebe :: pAlbinismo (const Familia_Mae &fm, const Familia_Pai &fp)
{
    qreal porcentagem = 0, pm = 0, pp = 0;

    if(fm.m->Albinismo && fp.p->Albinismo)
    {
        porcentagem = 1;
    }

    else if ((fm.m->Albinismo && (!fp.p->Albinismo) && (!fp.Albinismo)) || (fp.p->Albinismo && (!fm.m->Albinismo) && (!fm.Albinismo)) )
    {
        porcentagem = 0;
    }

    else if((!fm.m->Albinismo) && (!fp.p->Albinismo) && (!fp.Albinismo) && (!fm.Albinismo))
    {
        porcentagem = 0;
    }

    else if(fm.m->Albinismo && (!fp.p->Albinismo) && fp.Albinismo)
    {
        if (fp.HA->parente == 2 || fp.HA->parente == 3)
        {
            switch (fp.HA->parente)
            {
            case 2:
                pp = 1;
                break;
            case 3:
                pp = 0.3333;
                break;
            }
        }
        else if(fp.HA->pMaterno == 1)
            pp = 1;
        else if(fp.HA->pPaterno == 1)
            pp = 1;

        else if(fp.HA->pMaterno == 4 && fp.HA->pPaterno == 4)
        {
            pp = 0.66667;
        }

        else if((fp.HA->pMaterno == 4 && fp.HA->pPaterno == 5) || (fp.HA->pMaterno == 5 && fp.HA->pPaterno == 4))
        {
            pp = 0.611111;
        }

        else if((fp.HA->pMaterno == 4 && fp.HA->pPaterno == 6) || (fp.HA->pMaterno == 6 && fp.HA->pPaterno == 4))
        {
            pp = 0.59259;
        }

        else if(fp.HA->pMaterno == 5 && fp.HA->pPaterno == 5)
        {
            pp = 0.5185;
        }

        else if((fp.HA->pMaterno == 5 && fp.HA->pPaterno == 6) || (fp.HA->pMaterno == 6 && fp.HA->pPaterno == 5))
        {
            pp = 0.48765;
        }

        else if(fp.HA->pMaterno == 6 && fp.HA->pPaterno == 6)
        {
            pp = 0.45267;
        }

        else if((fp.HA->pMaterno == 4 && fp.HA->pPaterno == 7) || (fp.HA->pMaterno == 7 && fp.HA->pPaterno == 4))
        {
            pp = 0.5;
        }
        else if((fp.HA->pMaterno == 5 && fp.HA->pPaterno == 7) || (fp.HA->pMaterno == 7 && fp.HA->pPaterno == 5))
        {
            pp = 0.3333;
        }
        else
        {
            pp = 0.27777;
        }

        porcentagem = pp/2;
    }

    else if(fp.p->Albinismo && (!fm.m->Albinismo) && fm.Albinismo)
    {
        if (fm.HA->parente == 2 || fm.HA->parente == 3)
        {
            switch (fm.HA->parente)
            {
            case 2:
                pm = 1;
                break;
            case 3:
                pm = 0.3333;
                break;
            }
        }
        else if(fm.HA->pMaterno == 1)
            pm = 1;
        else if(fm.HA->pPaterno == 1)
            pm = 1;

        else if(fm.HA->pMaterno == 4 && fm.HA->pPaterno == 4)
        {
            pm = 0.66667;
        }

        else if((fm.HA->pMaterno == 4 && fm.HA->pPaterno == 5) || (fm.HA->pMaterno == 5 && fm.HA->pPaterno == 4))
        {
            pm = 0.611111;
        }

        else if((fm.HA->pMaterno == 4 && fm.HA->pPaterno == 6) || (fm.HA->pMaterno == 6 && fm.HA->pPaterno == 4))
        {
            pm = 0.59259;
        }

        else if(fm.HA->pMaterno == 5 && fm.HA->pPaterno == 5)
        {
            pm = 0.5185;
        }

        else if((fm.HA->pMaterno == 5 && fm.HA->pPaterno == 6) || (fm.HA->pMaterno == 6 && fm.HA->pPaterno == 3))
        {
            pm = 0.48765;
        }

        else if(fm.HA->pMaterno == 6 && fm.HA->pPaterno == 6)
        {
            pm = 0.45267;
        }

        else if((fm.HA->pMaterno == 4 && fm.HA->pPaterno == 7) || (fm.HA->pMaterno == 7 && fm.HA->pPaterno == 4))
        {
            pm = 0.5;
        }
        else if((fm.HA->pMaterno == 5 && fm.HA->pPaterno == 7) || (fm.HA->pMaterno == 7 && fm.HA->pPaterno == 5))
        {
            pm = 0.3333;
        }
        else
        {
            pm = 0.27777;
        }

        porcentagem = (pm)/2;
    }

    else
    {
        if (fm.HA->parente == 2 || fm.HA->parente == 3)
        {
            switch (fm.HA->parente)
            {
            case 2:
                pm = 1;
                break;
            case 3:
                pm = 0.3333;
                break;
            }
        }
        else if(fm.HA->pMaterno == 1)
            pm = 1;
        else if(fm.HA->pPaterno == 1)
            pm = 1;

        else if(fm.HA->pMaterno == 4 && fm.HA->pPaterno == 4)
        {
            pm = 0.66667;
        }

        else if((fm.HA->pMaterno == 4 && fm.HA->pPaterno == 5) || (fm.HA->pMaterno == 5 && fm.HA->pPaterno == 4))
        {
            pm = 0.611111;
        }

        else if((fm.HA->pMaterno == 4 && fm.HA->pPaterno == 6) || (fm.HA->pMaterno == 6 && fm.HA->pPaterno == 4))
        {
            pm = 0.59259;
        }

        else if(fm.HA->pMaterno == 5 && fm.HA->pPaterno == 5)
        {
            pm = 0.5185;
        }

        else if((fm.HA->pMaterno == 5 && fm.HA->pPaterno == 6) || (fm.HA->pMaterno == 6 && fm.HA->pPaterno == 3))
        {
            pm = 0.48765;
        }

        else if(fm.HA->pMaterno == 6 && fm.HA->pPaterno == 6)
        {
            pm = 0.45267;
        }

        else if((fm.HA->pMaterno == 4 && fm.HA->pPaterno == 7) || (fm.HA->pMaterno == 7 && fm.HA->pPaterno == 4))
        {
            pm = 0.5;
        }
        else if((fm.HA->pMaterno == 5 && fm.HA->pPaterno == 7) || (fm.HA->pMaterno == 7 && fm.HA->pPaterno == 5))
        {
            pm = 0.3333;
        }
        else
        {
            pm = 0.27777;
        }

        if (fp.HA->parente == 2 || fp.HA->parente == 3)
        {
            switch (fp.HA->parente)
            {
            case 2:
                pp = 1;
                break;
            case 3:
                pp = 0.3333;
                break;
            }
        }
        else if(fp.HA->pMaterno == 1)
            pp = 1;
        else if(fp.HA->pPaterno == 1)
            pp = 1;

        else if(fp.HA->pMaterno == 4 && fp.HA->pPaterno == 4)
        {
            pp = 0.66667;
        }

        else if((fp.HA->pMaterno == 4 && fp.HA->pPaterno == 5) || (fp.HA->pMaterno == 5 && fp.HA->pPaterno == 4))
        {
            pp = 0.611111;
        }

        else if((fp.HA->pMaterno == 4 && fp.HA->pPaterno == 6) || (fp.HA->pMaterno == 6 && fp.HA->pPaterno == 4))
        {
            pp = 0.59259;
        }

        else if(fp.HA->pMaterno == 5 && fp.HA->pPaterno == 5)
        {
            pp = 0.5185;
        }

        else if((fp.HA->pMaterno == 5 && fp.HA->pPaterno == 6) || (fp.HA->pMaterno == 6 && fp.HA->pPaterno == 5))
        {
            pp = 0.48765;
        }

        else if(fp.HA->pMaterno == 6 && fp.HA->pPaterno == 6)
        {
            pp = 0.45267;
        }

        else if((fp.HA->pMaterno == 4 && fp.HA->pPaterno == 7) || (fp.HA->pMaterno == 7 && fp.HA->pPaterno == 4))
        {
            pp = 0.5;
        }
        else if((fp.HA->pMaterno == 5 && fp.HA->pPaterno == 7) || (fp.HA->pMaterno == 7 && fp.HA->pPaterno == 5))
        {
            pp = 0.3333;
        }
        else
        {
            pp = 0.27777;
        }

        porcentagem = (pp) * (pm)/4;
    }

    porcentagem *= 100;
    this->Albinismo = porcentagem;
}
