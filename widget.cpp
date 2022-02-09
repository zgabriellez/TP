#include "widget.h"
#include "ui_widget.h"
#include "mainwindow.h"

widget::widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::widget)
{
    setWindowTitle("Genetic Care");

    setWindowIcon(QIcon(":/img/Imagens/icone.png"));
    ui->setupUi(this);

    QRect Desktop = QApplication :: desktop()->screenGeometry();
    x = Desktop.x();
    y = Desktop.y();

    largura = Desktop.width();
    altura = Desktop.height();

    scene = new QGraphicsScene(x, y, largura, altura);

    ui->graphicsView->setScene(scene);

    cegonha = new sprite1();

    scene->addItem(cegonha);

    cegonha->setPos(960,630);

    scene->setBackgroundBrush(QPixmap(":/img/Imagens/Blueod (9).png"));
    scene = new QGraphicsScene(0,0,1920,1080);


    QTimer :: singleShot( 8000 , this , SLOT(close()));
}

widget::~widget()
{
    delete ui;
}
