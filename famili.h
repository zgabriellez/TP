#ifndef FAMILI_H
#define FAMILI_H
#include <QString>

class Pessoa
{
    QString Nome;
    QString ABO;
    bool Rh=false;
    bool Daltonismo=false;
    bool Albinismo=false;
    bool Batten=false;
    bool Hutington=false;
    bool Fibrose=false;
    bool Falciforme=false;
public:
    friend class Bebe;

    Pessoa(){}
    ~Pessoa(){}

    void setNome(QString n)
    {
        this->Nome = n;
    }
    void  setABO(QString abo)
    {
        this->ABO = abo;
    }
    void setRh(bool rh)
    {
        this->Rh = rh;
    }
    void setDaltonismo(bool d)
    {
        this->Daltonismo = d;
    }
    void setAlbinismo(bool a)
    {
        this->Albinismo = a;
    }
    void  setBatten(bool b)
    {
        this->Batten = b;
    }
    void  setHutington(bool h)
    {
        this->Hutington = h;
    }
    void  setFibrose(bool f)
    {
        this->Fibrose = f;
    }
    void  setFalciforme(bool f)
    {
        this->Falciforme = f;
    }
    bool getBatten(){
        return Batten;
    }

    QString getNome(){
        return Nome;
    }
    QString getABO(){
        return ABO;
    }
};

class Historico
{
    int parente;
    int pMaterno=7;
    int pPaterno=7;

public:
    friend class MainWindow;
    void setParente(int a)
    {
        this->parente = a;
    }
    void setPMaterno(int a)
    {
        this->pMaterno = a;
    }
    void setPPaterno(int a)
    {
        this->pPaterno = a;
    }
    friend class Bebe;
    Historico(){}
    ~Historico(){}
};

class Familia
{
    bool Albinismo=false;
    bool Batten=false;
    bool Fibrose=false;
    bool Falciforme=false;
public:

    void  setAlbinismo(bool a)
    {
        this->Albinismo = a;
    }
    void  setBatten(bool b)
    {
        this->Batten = b;
    }
    void setFibrose(bool f)
    {
        this->Fibrose = f;
    }
    void  setFalciforme(bool f)
    {
        this->Falciforme = f;
    }
   ~Familia(){

    }
    friend class Bebe;
    friend class MainWindow;
};

class Familia_Mae : public Familia
{
    bool Daltonismo;
    Historico* HA;
    Historico* HB;
    Historico* HAF;
    Historico* HFC;
    int pDaltonismo;

public:
    friend class MainWindow;
     Pessoa* m;
     void setDaltonismo(bool d)
      {
          this->Daltonismo = d;
      }
      void setFDaltonismo(int p)
      {
          this->pDaltonismo = p;
      }
    friend class Bebe;
    Familia_Mae(){
        this->m = new Pessoa;
        this->HA = new Historico;
        this->HB = new Historico;
        this->HFC = new Historico;
        this->HAF = new Historico;
                 }
    ~Familia_Mae(){}
} ;
class Familia_Pai : Familia
{
    Pessoa* p;
    Historico* HA;
    Historico* HB;
    Historico* HAF;
    Historico* HFC;
public:
    friend class Bebe;
    friend class MainWindow;
     Familia_Pai()
    {
        this->p = new Pessoa;
        this->HA = new Historico;
        this->HB = new Historico;
        this->HFC = new Historico;
        this->HAF = new Historico;
    }
 ~Familia_Pai()
     {
         delete p;
         delete HA;
         delete HB;
         delete HFC;
         delete HAF;
     }
};
class Bebe
{
    qreal ABO_A;
    qreal ABO_B;
    qreal ABO_AB;
    qreal ABO_O;
    qreal Rh;
    qreal Daltonismo_H;
    qreal Daltonismo_M;
    qreal Hutington;
    qreal Albinismo;
    qreal Batten;
    qreal Fibrose;
    qreal Falciforme;

public:
    Bebe(){}
    void pABO(const Familia_Mae&, const Familia_Pai&);
    void pRh(const Familia_Mae&, const Familia_Pai&);
    void pDaltonismo(const Familia_Mae&, const Familia_Pai&);
    void pHutington(const Familia_Mae&, const Familia_Pai&);
    void pAlbinismo(const Familia_Mae&, const Familia_Pai&);
    void pBatten(const Familia_Mae&, const Familia_Pai&);
    void pFibrose(const Familia_Mae&, const Familia_Pai&);
    void pFalciforme(const Familia_Mae&, const Familia_Pai&);

    friend class MainWindow;

    qreal  getA()
    {
       return ABO_A;
    }
    qreal getB()
    {
        return ABO_B;
    }
    qreal getAB()
    {
        return ABO_AB;
    }
    qreal  getO()
    {
        return ABO_O;
    }
    qreal  getRh_positivo()
    {
        return Rh;
    }
    qreal getRh_negativo()
    {
        return (100 - Rh);
    }
    qreal  getDaltonismo_H()
    {
        return Daltonismo_H;
    }
    qreal  getDaltonismo_M()
    {
        return Daltonismo_M;
    }
    qreal  getHutington()
    {
        return Hutington;
    }
    qreal  getAlbinismo()
    {
        return Albinismo;
    }
    qreal  getBatten()
    {
        return Batten;
    }
    qreal  getFibrose()
    {
        return Fibrose;
    }
 qreal getFalciforme()
    {
        return Falciforme;
    }
 ~Bebe(){}
};

#endif // FAMILI_H

