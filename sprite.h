#ifndef SPRITE_H
#define SPRITE_H


#include <QObject>
#include <QGraphicsItem>
#include <QTimer>
#include <QPainter>

class sprite1 : public QObject, public QGraphicsItem
{
public:
    explicit sprite1(QObject *parent = nullptr);

    QTimer *timer;
    QPixmap *pixmap;

    float filas, colunas;

    float largura;
    float altura;

    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);

signals:

public slots:
    void Atualizacao();

};
#endif // SPRITE_H
