#include "sprite.h"
#include "mainwindow.h"


sprite1::sprite1(QObject *parent) : QObject(parent)
{
    timer = new QTimer();
    filas = 0;
    colunas = 0;

    pixmap = new QPixmap(":/img/Imagens/oie_transparent (6).png");

    largura = 998/4;
    altura = 397/2;

    timer->start(120);

    connect(timer, &QTimer::timeout, this, &sprite1::Atualizacao);

}

void sprite1::Atualizacao()
{
    colunas += 249.5;
    if(colunas >= 998)
    {
        filas += 198.5;
        if(filas >= 397)
        {
            filas = 0;
        }
        colunas = 0;
    }
    this->update(-largura/2, -altura/2, largura, altura);
}

QRectF sprite1::boundingRect() const
{
    return QRectF(-largura/2, -altura/2, largura, altura);
}

void sprite1::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->drawPixmap(-largura/2, -altura/2, *pixmap, colunas, filas, largura, altura);
}

