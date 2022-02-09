#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include "mainwindow.h"

namespace Ui {
class widget;
}

class widget : public QWidget
{
    Q_OBJECT

public:
    explicit widget(QWidget *parent = nullptr);
    ~widget();

private:
    Ui::widget *ui;
    QGraphicsScene *scene;

    sprite1 *cegonha;

    float x, y, largura, altura;
};

#endif // WIDGET_H
