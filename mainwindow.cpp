
#include "mainwindow.h"
#include <QPixmap>
#include "famili.h"
#include "ui_mainwindow.h"
#include "QMessageBox"
#include <QApplication>
#include<QtWidgets/QMainWindow>
#include<QtCharts/QChartView>
#include<QtCharts/QBarSeries>
#include<QtCharts/QBarSet>
#include<QtCharts/QBarCategoryAxis>
#include<QtCharts/QLegend>
#include<QtCharts/QLineSeries>
#include<QtCharts/QCategoryAxis>
#include<QtCharts/QPieSeries>
#include<QtCharts/QPieSlice>
#include<QString>
#include<QTime>
#include <QThread>
#include "sprite.h"
#include "widget.h"

QT_CHARTS_USE_NAMESPACE

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    //Seta a ui para a tela inicial (com a logomarca grande)
    ui->setupUi(this);
        connect(ui->pushButton_6,SIGNAL(clicked()),this,SLOT(on_pushButton_6_clicked()));
        connect(ui->pushButton_5,SIGNAL(clicked()),this,SLOT(on_pushButton_5_clicked()));
        connect(ui->pushButton_7,SIGNAL(clicked()),this,SLOT(on_pushButton_7_clicked()));
        connect(ui->pushButton_8,SIGNAL(clicked()),this,SLOT(on_pushButton_8_clicked()));
        connect(ui->pushButton_9,SIGNAL(clicked()),this,SLOT(on_pushButton_9_clicked()));
        connect(ui->pushButton_15,SIGNAL(clicked()),this,SLOT(on_pushButton_15_clicked(bool)));
        connect(ui->pushButton_16,SIGNAL(clicked()),this,SLOT(on_pushButton_16_clicked(bool)));
        connect(ui->pushButton_17,SIGNAL(clicked()),this,SLOT(on_pushButton_17_clicked(bool)));
        connect(ui->pushButton_18,SIGNAL(clicked()),this,SLOT(on_pushButton_18_clicked(bool)));
        connect(ui->pushButton_19,SIGNAL(clicked()),this,SLOT(on_pushButton_19_clicked(bool)));
        connect(ui->pushButton_20,SIGNAL(clicked()),this,SLOT(on_pushButton_20_clicked(bool)));
        connect(ui->pushButton_10,SIGNAL(clicked()),this,SLOT(on_pushButton_10_clicked()));



        connect(ui->pushButton_13,SIGNAL(clicked()),this,SLOT(on_pushButton_13_clicked()));
        connect(ui->pushButton_39,SIGNAL(clicked()),this,SLOT(on_pushButton_39_clicked()));
        connect(ui->pushButton_38,SIGNAL(clicked()),this,SLOT(on_pushButton_38_clicked()));
        connect(ui->pushButton_40,SIGNAL(clicked()),this,SLOT(on_pushButton_40_clicked()));
        connect(ui->pushButton_47,SIGNAL(clicked()),this,SLOT(on_pushButton_47_clicked()));
        connect(ui->pushButton_48,SIGNAL(clicked()),this,SLOT(on_pushButton_48_clicked(bool)));
        connect(ui->pushButton_50,SIGNAL(clicked()),this,SLOT(on_pushButton_50_clicked(bool)));
        connect(ui->pushButton_51,SIGNAL(clicked()),this,SLOT(on_pushButton_51_clicked(bool)));
        connect(ui->pushButton_52,SIGNAL(clicked()),this,SLOT(on_pushButton_52_clicked(bool)));
        connect(ui->pushButton_53,SIGNAL(clicked()),this,SLOT(on_pushButton_53_clicked(bool)));
        connect(ui->pushButton_54,SIGNAL(clicked()),this,SLOT(on_pushButton_54_clicked(bool)));
        connect(ui->pushButton_55,SIGNAL(clicked()),this,SLOT(on_pushButton_55_clicked(bool)));

        connect(ui->pushButton_84,SIGNAL(clicked()),this,SLOT(on_pushButton_84_clicked()));
        connect(ui->pushButton_85,SIGNAL(clicked()),this,SLOT(on_pushButton_85_clicked()));
        connect(ui->pushButton_86,SIGNAL(clicked()),this,SLOT(on_pushButton_86_clicked()));
        connect(ui->pushButton_87,SIGNAL(clicked()),this,SLOT(on_pushButton_87_clicked()));

        connect(ui->pushButton_84,SIGNAL(clicked()),this,SLOT(on_pushButton_84_clicked()));
        connect(ui->pushButton_85,SIGNAL(clicked()),this,SLOT(on_pushButton_85_clicked()));
        connect(ui->pushButton_86,SIGNAL(clicked()),this,SLOT(on_pushButton_86_clicked()));
        connect(ui->pushButton_87,SIGNAL(clicked()),this,SLOT(on_pushButton_87_clicked()));
        connect(ui->pushButton_84,SIGNAL(clicked()),this,SLOT(on_pushButton_84_clicked()));
        connect(ui->pushButton_85,SIGNAL(clicked()),this,SLOT(on_pushButton_85_clicked()));
        connect(ui->pushButton_86,SIGNAL(clicked()),this,SLOT(on_pushButton_86_clicked()));
        connect(ui->pushButton_87,SIGNAL(clicked()),this,SLOT(on_pushButton_87_clicked()));
        connect(ui->pushButton_84,SIGNAL(clicked()),this,SLOT(on_pushButton_84_clicked()));
        connect(ui->pushButton_85,SIGNAL(clicked()),this,SLOT(on_pushButton_85_clicked()));
        connect(ui->pushButton_86,SIGNAL(clicked()),this,SLOT(on_pushButton_86_clicked()));
        connect(ui->pushButton_87,SIGNAL(clicked()),this,SLOT(on_pushButton_87_clicked()));
        connect(ui->pushButton_84,SIGNAL(clicked()),this,SLOT(on_pushButton_84_clicked()));
        connect(ui->pushButton_85,SIGNAL(clicked()),this,SLOT(on_pushButton_85_clicked()));
        connect(ui->pushButton_86,SIGNAL(clicked()),this,SLOT(on_pushButton_86_clicked()));
        connect(ui->pushButton_87,SIGNAL(clicked()),this,SLOT(on_pushButton_87_clicked()));
}
MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    //Clique no botÃ£o "Iniciar" -> leva para a segunda tela
    ui->stackedWidget->setCurrentIndex((1));

}


void MainWindow::on_pushButton_12_clicked()
{
    mae.m->setNome(ui->lineEdit->text());
    ui->stackedWidget->setCurrentIndex(2);

        if(ui->pushButton_6->isChecked()==true){
          MainWindow::on_pushButton_6_clicked();

            }
        if(ui->pushButton_7->isChecked()==true){
          MainWindow::on_pushButton_7_clicked();
          }
        if(ui->pushButton_5->isChecked()==true){
          MainWindow::on_pushButton_5_clicked();
          }
        if(ui->pushButton_8->isChecked()==true){
          MainWindow::on_pushButton_8_clicked();
          }
}

void MainWindow::on_pushButton_2_clicked()
{
    QMessageBox::StandardButton resposta = QMessageBox::question(this, "Mensagem", "Deseja mesmo sair do programa??", QMessageBox::Yes| QMessageBox::No);
    if (resposta == QMessageBox::Yes)
    {
        //this->close();
        QApplication::quit();
    }
}
//OS BOTÃ•ES ABAIXO para MAE
void MainWindow::on_pushButton_6_clicked()
{
    mae.m->setABO("A");
    if(ui->pushButton_6->isChecked()==true){
    ui->pushButton_5->setEnabled(false);
    ui->pushButton_7->setEnabled(false);
    ui->pushButton_8->setEnabled(false);
    }
    else{
        ui->pushButton_5->setEnabled(true);
        ui->pushButton_7->setEnabled(true);
        ui->pushButton_8->setEnabled(true);
}
}

void MainWindow::on_pushButton_7_clicked()
{
     mae.m->setABO("B");
     if(ui->pushButton_7->isChecked()==true){
     ui->pushButton_5->setEnabled(false);
     ui->pushButton_6->setEnabled(false);
     ui->pushButton_8->setEnabled(false);
     }
     else{
         ui->pushButton_6->setEnabled(true);
         ui->pushButton_5->setEnabled(true);
         ui->pushButton_8->setEnabled(true);
     }
}

void MainWindow::on_pushButton_5_clicked()
{
   mae.m->setABO("AB");
   if(ui->pushButton_5->isChecked()==true){
   ui->pushButton_6->setEnabled(false);
   ui->pushButton_7->setEnabled(false);
   ui->pushButton_8->setEnabled(false);
   }
   else{
       ui->pushButton_6->setEnabled(true);
       ui->pushButton_7->setEnabled(true);
       ui->pushButton_8->setEnabled(true);
}
}
void MainWindow::on_pushButton_8_clicked()
{
    mae.m->setABO("O");
    if(ui->pushButton_8->isChecked()==true){
    ui->pushButton_5->setEnabled(false);
    ui->pushButton_6->setEnabled(false);
    ui->pushButton_7->setEnabled(false);
    }
    else{
        ui->pushButton_5->setEnabled(true);
        ui->pushButton_6->setEnabled(true);
        ui->pushButton_7->setEnabled(true);
}
}

void MainWindow::on_pushButton_9_clicked()
{
    mae.m->setRh(true);
    if(ui->pushButton_9->isChecked()==true){
    ui->pushButton_10->setEnabled(false);

    }
    else{
        ui->pushButton_10->setEnabled(true);
    }
}

void MainWindow::on_pushButton_10_clicked()
{
    mae.m->setRh(false);
    if(ui->pushButton_10->isChecked()==true){
    ui->pushButton_9->setEnabled(false);

    }
    else{
        ui->pushButton_9->setEnabled(true);
    }

}


// Daltonismo da MÃƒE
void MainWindow::on_pushButton_15_clicked (bool x)
{

    mae.m->setDaltonismo(x);
}

//Albinismo da MÃƒE
void MainWindow::on_pushButton_16_clicked(bool x)
{
    mae.m->setAlbinismo(x);
}

//Fibrose da MÃƒE
void MainWindow::on_pushButton_17_clicked(bool x)
{
    mae.m->setFibrose(x);
}

//Huti MÃ£e
void MainWindow::on_pushButton_18_clicked(bool x)
{
    mae.m->setHutington(x);
}

//DoenÃ§a de Batten mae
void MainWindow::on_pushButton_19_clicked(bool x)
{
    mae.m->setBatten(x);
}

//Anemia MÃƒE
void MainWindow::on_pushButton_20_clicked(bool x)
{
    mae.m->setFalciforme(x);
}

void MainWindow::on_pushButton_14_clicked()
{
    //vai p tela de informacao
    ui->stackedWidget->setCurrentIndex(3);

        if(ui->pushButton_15->isChecked()==true){
          MainWindow::on_pushButton_15_clicked(true);

          }
        else{
            MainWindow::on_pushButton_15_clicked(false);
        }
        if(ui->pushButton_16->isChecked()==true){
          MainWindow::on_pushButton_16_clicked(true);

          }
        else{
            MainWindow::on_pushButton_16_clicked(false);
        }
        if(ui->pushButton_17->isChecked()==true){
            MainWindow::on_pushButton_17_clicked(true);

            }
          else{
              MainWindow::on_pushButton_17_clicked(false);
          }
        if(ui->pushButton_18->isChecked()==true){
            MainWindow::on_pushButton_18_clicked(true);

            }
          else{
              MainWindow::on_pushButton_18_clicked(false);
          }
        if(ui->pushButton_19->isChecked()==true){
          MainWindow::on_pushButton_19_clicked(true);

          }
        else{
            MainWindow::on_pushButton_19_clicked(false);
        }
        if(ui->pushButton_20->isChecked()==true){
          MainWindow::on_pushButton_20_clicked(true);

          }
        else{
            MainWindow::on_pushButton_20_clicked(false);
        }
}
void MainWindow::on_pushButton_23_clicked()
{
    //tem de ir pro histÃ³rico da mae
    ui->stackedWidget->setCurrentIndex(4);

}


void MainWindow::on_pushButton_27_clicked()
{
    //vai para a tela de daltonismo da MAE
    ui->stackedWidget->setCurrentIndex(5);
    mae.setDaltonismo(true);



}
//HISTÃ“RICO DA MÃƒE
void MainWindow::on_pushButton_28_clicked()
{
    //vai para fibrose cistica
    ui->stackedWidget->setCurrentIndex(15);
    mae.setFibrose(true);

}

void MainWindow::on_pushButton_26_clicked()
{
    ui->stackedWidget->setCurrentIndex(7);

}
//HistÃ³rico -> daltonismo -> mÃ£e
//AQUI COMEÃ‡A A PARTE DO DALTONISMO
void MainWindow::on_pushButton_41_clicked()
{
    //AQUI A MÃƒE DA MÃƒE TEM DALTONISMO
    //SET UP PARENTE MÃƒE DALTONICA..
    //VOLTA PARA HISTÃ“RICO:
    mae.setFDaltonismo(1);


}

//HistÃ³rico - albinismo -> vai p parte de parentes

void MainWindow::on_pushButton_32_clicked()
{
    //SET UP NO HISTÃ“RICO DE PARENTE COM ALBINISMO
    //VAI PARA PERGUNTAS SOBRE O HISTÃ“RICO
    ui->stackedWidget->setCurrentIndex(6);
mae.setAlbinismo(true);
}
//Anemia Falciforme
void MainWindow::on_pushButton_30_clicked()
{
    //SET UP PARENTE COM ANEMIA
    //PERGUNTAS: vai pra selecionar o parente
    ui->stackedWidget->setCurrentIndex(17);
    mae.setFalciforme(true);

}

void MainWindow::on_pushButton_31_clicked()
{
    //SET UP PARENTE COM BATTEN
    //PERGUNTAS HISTÃ“RICO
    ui->stackedWidget->setCurrentIndex(16);
    mae.setBatten(true);


}


//PARENTE IRMÃƒO DA MAE TEM DALTONISMO
void MainWindow::on_pushButton_42_clicked()
{
    //set up historico parente da mae dalton : irmao

            mae.setFDaltonismo(3);

}
//TIA DALTONICA DA MAE
void MainWindow::on_pushButton_45_clicked()
{
    //set up historico mae dalton tia
    ui->stackedWidget->setCurrentIndex(4);
        mae.setFDaltonismo(5);


}//PAI DALTONICO DA MAE
void MainWindow::on_pushButton_44_clicked()
{
    //set up historico mae dalton pai
        mae.setFDaltonismo(2);


}
//AVÃ“ DA MAE COM DALTONISMO
void MainWindow::on_pushButton_46_clicked()
{
    // set up histoco mae avÃ³ com daltonismo

        mae.setFDaltonismo(4);

}

//AVÃ” DA MAE COM DALTONISMO
void MainWindow::on_pushButton_43_clicked()
{
    // set up historico avÃ´ da mae com daltonismo
        mae.setFDaltonismo(6);
}

void MainWindow::on_pushButton_13_clicked()
{
    pai.p->setABO("A");
}

void MainWindow::on_pushButton_39_clicked()
{
     pai.p->setABO("AB");
}

void MainWindow::on_pushButton_38_clicked()
{
     pai.p->setABO("B");
}

void MainWindow::on_pushButton_40_clicked()
{
     pai.p->setABO("O");
}

void MainWindow::on_pushButton_47_clicked()
{
     pai.p->setRh(true);
}

void MainWindow::on_pushButton_48_clicked()
{
     pai.p->setRh(false);
}
//DoenÃ§as do pai
//Concluir do pai
void MainWindow::on_pushButton_49_clicked()
{
    ui->stackedWidget->setCurrentIndex(8);
    pai.p->setNome(ui->lineEdit->text());
    beb.pRh(mae,pai);
    beb.pABO(mae,pai);

}

void MainWindow::on_pushButton_50_clicked(bool x)
{
    pai.p->setDaltonismo(x);
}

void MainWindow::on_pushButton_51_clicked(bool x)
{
    pai.p->setFibrose(x);
}

void MainWindow::on_pushButton_52_clicked(bool x)
{
    pai.p->setBatten(x);
}

void MainWindow::on_pushButton_53_clicked(bool x)
{
    pai.p->setAlbinismo(x);
}

void MainWindow::on_pushButton_54_clicked(bool x)
{
    pai.p->setHutington(x);
}

void MainWindow::on_pushButton_55_clicked(bool x)
{
    pai.p->setFalciforme(x);
}

void MainWindow::on_pushButton_56_clicked()
{
      beb.pDaltonismo(mae,pai);
    QThread x;
    x.sleep(10);
        ui->stackedWidget->setCurrentIndex(9);
}

void MainWindow::on_pushButton_57_clicked()
{
    ui->stackedWidget->setCurrentIndex(10);

}
//SeleÃ§Ã£o de doenÃ§as para o histÃ³rico
void MainWindow::on_pushButton_58_clicked()
{
    //parente do pai tem albinismo
    ui->stackedWidget->setCurrentIndex(11);
    pai.setAlbinismo(true);


}

void MainWindow::on_pushButton_59_clicked()
{
    //parente do pai tem fibrose cistica
    ui->stackedWidget->setCurrentIndex(18);
    pai.setFibrose(true);

}

void MainWindow::on_pushButton_60_clicked()
{
    //parente do pai tem batten
    pai.setBatten(true);
    ui->stackedWidget->setCurrentIndex(19);


}

void MainWindow::on_pushButton_61_clicked()
{
    //parente do pai tem anemia
    pai.setFalciforme(true);
    ui->stackedWidget->setCurrentIndex(20);

}
//SELEÃ‡ÃƒO DOS PARENTES NO HISTÃ“RICO - AQUI Ã‰ PRA SETAR AS DOENÃ‡AS, FAZER IF/ELSE COM BOTOES


void MainWindow::on_pushButton_62_clicked()
{
    //vai p tela do bb
    beb.pFibrose(mae,pai);
    beb.pAlbinismo(mae,pai);
    ui->stackedWidget->setCurrentIndex(12);

}

void MainWindow::on_pushButton_76_clicked()
{
    //volta p historico
    ui->stackedWidget->setCurrentIndex(10);

}
//Ã‰ AQ Q FICA O SPRITE
void MainWindow::on_pushButton_75_clicked()
{
    // vai pro tipo sanguineo
    //Vou direcionar p uma tela a mais, mas Ã© sÃ³ colocar o sprite

    widget *a = new widget (this);
    a->show();

    beb.pHutington(mae,pai);
    beb.pFalciforme(mae,pai);
   ui->stackedWidget->setCurrentIndex(14);

}



//essa funÃ§Ã£o do botÃ£o Ã© da mae, n precisa mexer
void MainWindow::on_pushButton_34_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}





void MainWindow::on_pushButton_77_clicked()
{
    QMessageBox::warning(this, "Encerramento", "Seu programa será ENCERRADO!");
    this->close();
}
//GRAFICOS


void MainWindow::on_pushButton_84_clicked()
{
#include <QApplication>
#include<QtWidgets/QMainWindow>
#include<QtCharts/QChartView>
#include<QtCharts/QBarSeries>
#include<QtCharts/QBarSet>
#include<QtCharts/QBarCategoryAxis>
#include<QtCharts/QLegend>
#include<QtCharts/QLineSeries>
#include<QtCharts/QCategoryAxis>
#include<QtCharts/QPieSeries>
#include<QtCharts/QPieSlice>
#include<QString>
#include<QTime>

    QT_CHARTS_USE_NAMESPACE
    //Resultado ABO

    QPieSeries *series2 = new QPieSeries();
    series2->append("A",beb.getA());
    series2->append("B",beb.getB());
    series2->append("AB",beb.getAB());
    series2->append("O",beb.getO());

    QPieSlice *slice0=series2->slices().at(0);
    slice0->setLabelVisible();
    slice0->setColor(QColor::fromRgb(255,120,168));
    QPieSlice *slice1=series2->slices().at(1);
    slice1->setLabelVisible();
    slice1->setColor(QColor::fromRgb(251,90,120));
    QPieSlice *slice2=series2->slices().at(2);
    slice2->setLabelVisible();
    slice2->setColor(QColor::fromRgb(248,0,92));
    QPieSlice *slice3=series2->slices().at(3);
    slice3->setLabelVisible();
    slice3->setColor(QColor::fromRgb(230,0,85));


    QChart *chart2= new QChart();
    chart2->addSeries(series2);
    chart2->setTitle("Tipo Sanguíneo:");
    chart2->legend();
    chart2->legend()->setLabelBrush(QBrush(Qt::black));

    QFont font2,font3;
    font2.setPixelSize(25);
    font3.setPixelSize(18);
    chart2->setTitleFont(font2);
    chart2->setTitleBrush(QBrush(Qt::black));

    chart2->setBackgroundBrush(QBrush(QColor::fromRgb(0,245,230)));

    QChartView *chartview1= new QChartView(chart2);
    chartview1->setRenderHint(QPainter::Antialiasing);

    QPalette pal1=qApp->palette();
    pal1.setColor(QPalette::Window,QRgb(0xffffff));
    pal1.setColor(QPalette::WindowText,QRgb(0x404040));
    qApp->setPalette(pal1);

    QMainWindow a;
    QTime dieTime= QTime::currentTime().addSecs(200);
          while (QTime::currentTime() < dieTime){
              QCoreApplication::processEvents( QEventLoop::AllEvents,1);

              a.setCentralWidget(chartview1);
              a.resize(450,400);
              a.show();
         }
}

void MainWindow::on_pushButton_85_clicked()
{
#include <QApplication>
#include<QtWidgets/QMainWindow>
#include<QtCharts/QChartView>
#include<QtCharts/QBarSeries>
#include<QtCharts/QBarSet>
#include<QtCharts/QBarCategoryAxis>
#include<QtCharts/QLegend>
#include<QtCharts/QLineSeries>
#include<QtCharts/QCategoryAxis>
#include<QtCharts/QPieSeries>
#include<QtCharts/QPieSlice>
#include<QString>
#include<QTime>

    QT_CHARTS_USE_NAMESPACE
    QPieSeries *series3 = new QPieSeries();
        series3->append("Rh +",beb.getRh_positivo());
        series3->append("Rh -",beb.getRh_negativo());

        QPieSlice *slice01=series3->slices().at(0);
        slice01->setLabelVisible();
        slice01->setColor(QColor::fromRgb(255,217,75));
        QPieSlice *slice02=series3->slices().at(1);
        slice02->setLabelVisible();
        slice02->setColor(QColor::fromRgb(255,206,22));

        QChart *chart3= new QChart();
        chart3->addSeries(series3);
        chart3->setTitle("Tipo Sanguíneo:");
        chart3->legend();
        chart3->legend()->setLabelBrush(QBrush(Qt::black));
        chart3->legend()->setLabelColor(Qt::black);


        QFont font4,font5;
        font4.setPixelSize(25);
        font5.setPixelSize(20);
        chart3->setTitleFont(font4);
        chart3->setTitleBrush(QBrush(Qt::black));
        chart3->legend()->setFont(font5);
        chart3->setBackgroundBrush(QBrush(QColor::fromRgb(0,245,230)));

        QChartView *chartview2= new QChartView(chart3);
        chartview2->setRenderHint(QPainter::Antialiasing);

        QPalette pal2=qApp->palette();
        pal2.setColor(QPalette::Window,QRgb(0xffffff));
        pal2.setColor(QPalette::WindowText,QRgb(0x404040));
        qApp->setPalette(pal2);

    QMainWindow a;
    QTime dieTime= QTime::currentTime().addSecs(200);
          while (QTime::currentTime() < dieTime){
              QCoreApplication::processEvents( QEventLoop::AllEvents,1);

              a.setCentralWidget(chartview2);
              a.resize(450,400);
              a.show();
         }
}

void MainWindow::on_pushButton_86_clicked()
{
#include <QApplication>
        #include<QtWidgets/QMainWindow>
        #include<QtCharts/QChartView>
        #include<QtCharts/QBarSeries>
        #include<QtCharts/QBarSet>
        #include<QtCharts/QBarCategoryAxis>
        #include<QtCharts/QLegend>
        #include<QtCharts/QLineSeries>
        #include<QtCharts/QCategoryAxis>
        #include<QtCharts/QPieSeries>
        #include<QtCharts/QPieSlice>
        #include<QString>
        #include<QTime>
    QT_CHARTS_USE_NAMESPACE
    //resultado das doencas
      beb.pBatten(mae,pai);
    QBarSet *set1= new QBarSet("Fibrose Cí­stica");
       QBarSet *set2= new QBarSet("Batten");
       QBarSet *set3= new QBarSet("Albinismo");
       QBarSet *set4= new QBarSet("Huntington");
       QBarSet *set5= new QBarSet("Anemia Falciforme");


       //Porcentagem de cada doenÃ§a


       *set1<<beb.getFibrose();
       *set2<<beb.getBatten();
       *set3<<beb.getAlbinismo();
       *set4<<beb.getHutington();
       *set5<<beb.getFalciforme();


       set1->setColor(QColor::fromRgb(255,0,107));
       set2->setColor(QColor::fromRgb(255,201,0));
       set3->setColor(QColor::fromRgb(61,34,255));
       set4->setColor(QColor::fromRgb(255,133,28));
       set5->setColor(QColor::fromRgb(144,251,28));


       QBarSeries *series= new QBarSeries();

       series->append(set1);
       series->append(set2);
       series->append(set3);
       series->append(set4);
       series->append(set5);


       QChart *chart= new QChart();
       chart->addSeries(series);
       chart->setTitle("Porcentagem das doenças");
       chart->setAnimationOptions( QChart::AllAnimations);

       QFont font,font1;
       font.setPixelSize(25);
       font1.setPixelSize(15);
       chart->setTitleFont(font);
       chart->setTitleBrush(QBrush(Qt::black));
       chart->legend()->setFont(font1);

       QStringList categories;
       QBarCategoryAxis *axis = new QBarCategoryAxis();
       axis->append(categories);
       chart ->createDefaultAxes();
       chart ->setAxisX(axis,series);
       chart->legend()->setVisible(true);
       chart->legend()->setAlignment(Qt::AlignBottom);
       chart->setBackgroundBrush(QBrush(QColor::fromRgb(0,245,230)));
       QChartView *chartview= new QChartView(chart);
       chartview->setRenderHint(QPainter::Antialiasing);

       QPalette pal=qApp->palette();
       pal.setColor(QPalette::Window,QRgb(0xffffff));
       pal.setColor(QPalette::WindowText,QRgb(0x404040));
       qApp->setPalette(pal);

    QMainWindow a;
    QTime dieTime= QTime::currentTime().addSecs(200);
          while (QTime::currentTime() < dieTime){
              QCoreApplication::processEvents( QEventLoop::AllEvents,1);

              a.setCentralWidget(chartview);
              a.resize(450,400);
              a.show();
         }
}

void MainWindow::on_pushButton_87_clicked()
{
#include <QApplication>
#include<QtWidgets/QMainWindow>
#include<QtCharts/QChartView>
#include<QtCharts/QBarSeries>
#include<QtCharts/QBarSet>
#include<QtCharts/QBarCategoryAxis>
#include<QtCharts/QLegend>
#include<QtCharts/QLineSeries>
#include<QtCharts/QCategoryAxis>
#include<QtCharts/QPieSeries>
#include<QtCharts/QPieSlice>
#include<QString>
#include<QTime>
    QT_CHARTS_USE_NAMESPACE
    //grafico do daltonismo
        QBarSet *set01= new QBarSet("Menina");
       QBarSet *set02= new QBarSet("Menino");


       //Porcentagem de cada doenÃ§a


       *set01<<beb.getDaltonismo_M();
       *set02<<beb.getDaltonismo_H();



       set01->setColor(QColor::fromRgb(255,0,107));
       set02->setColor(QColor::fromRgb(255,201,0));

       QBarSeries *series4= new QBarSeries();
       series4->append(set01);
       series4->append(set02);

       QChart *chart4= new QChart();
       chart4->addSeries(series4);
       chart4->setTitle("Porcentagem de Daltonismo");
       chart4->setAnimationOptions( QChart::AllAnimations);

       QFont font7,font8;
       font7.setPixelSize(25);
       font8.setPixelSize(15);
       chart4->setTitleFont(font7);
       chart4->setTitleBrush(QBrush(Qt::black));
       chart4->legend()->setFont(font8);
       chart4->legend()->setBorderColor(QColor::fromRgb(0,245,230));

       QStringList categories2;
       QBarCategoryAxis *axis2 = new QBarCategoryAxis();
       axis2->append(categories2);
       chart4 ->createDefaultAxes();
       chart4->setAxisX(axis2,series4);
       chart4->legend()->setVisible(true);
       chart4->legend()->setAlignment(Qt::AlignBottom);
       chart4->setBackgroundBrush(QBrush(QColor::fromRgb(0,245,230)));
       QChartView *chartview4= new QChartView(chart4);
       chartview4->setRenderHint(QPainter::Antialiasing);

       QPalette pal4=qApp->palette();
       pal4.setColor(QPalette::Window,QRgb(0xffffff));
       pal4.setColor(QPalette::WindowText,QRgb(0x404040));
       qApp->setPalette(pal4);
       QMainWindow a;
       QTime dieTime= QTime::currentTime().addSecs(200);
             while (QTime::currentTime() < dieTime){
                 QCoreApplication::processEvents( QEventLoop::AllEvents,1);

                 a.setCentralWidget(chartview4);
                 a.resize(450,400);
                 a.show();
            }
}
void MainWindow::on_pushButton_3_clicked()
{
    //Volta para o histórico da MÃE
    ui->stackedWidget->setCurrentIndex(4);
}
//Parentes com albinismo da MÃEEE :

void MainWindow::on_pushButton_4_clicked()
{
    //mae albina
    mae.HA->setPMaterno(1);
}

void MainWindow::on_pushButton_11_clicked()
{
    //avó albina materna
    mae.HA->setPMaterno(4);
}

void MainWindow::on_pushButton_21_clicked()
{
    //tia materna albina
    mae.HA->setPMaterno(5);
}

void MainWindow::on_pushButton_22_clicked()
{
    //prima materna albina
    mae.HA->setPMaterno(6);
}

void MainWindow::on_pushButton_25_clicked()
{
    //irma(o) albino
    mae.HA->setParente(2);
}

void MainWindow::on_pushButton_24_clicked()
{
    //sobrinha albina
    mae.HA->setParente(3);
}

void MainWindow::on_pushButton_29_clicked()
{
    //pai albino
    mae.HA->setPPaterno(1);
}

void MainWindow::on_pushButton_33_clicked()
{
    //avo parteno albino
    mae.HA->setPPaterno(4);
}

void MainWindow::on_pushButton_35_clicked()
{
    //tia paterna albina
    mae.HA->setPPaterno(5);
}

void MainWindow::on_pushButton_36_clicked()
{
    //prima paterna albina
    mae.HA->setPPaterno(6);
}
//vai pro histórico de fibrose cistica da mae
void MainWindow::on_pushButton_37_clicked()
{
   ui->stackedWidget->setCurrentIndex(4);
}

void MainWindow::on_pushButton_78_clicked()
{
    //mae c fibrosecistica
    mae.HFC->setPMaterno(1);
}

void MainWindow::on_pushButton_79_clicked()
{
    //avo materna com fibr
     mae.HFC->setPMaterno(4);
}

void MainWindow::on_pushButton_80_clicked()
{
    //tia materna com fibr
     mae.HFC->setPMaterno(5);
}

void MainWindow::on_pushButton_81_clicked()
{
    //prima materna com fibr
     mae.HFC->setPMaterno(6);
}

void MainWindow::on_pushButton_82_clicked()
{
    //imra com fibr
    mae.HFC->setParente(2);
}

void MainWindow::on_pushButton_83_clicked()
{
    //sobrinha com fibr
    mae.HFC->setParente(3);
}

void MainWindow::on_pushButton_88_clicked()
{
    //pai com fibr
    mae.HFC->setPPaterno(1);
}

void MainWindow::on_pushButton_89_clicked()
{
    //avó paterna
    mae.HFC->setPPaterno(4);
}

void MainWindow::on_pushButton_90_clicked()
{
    //tia paterna c fibr
    mae.HFC->setPPaterno(5);
}

void MainWindow::on_pushButton_91_clicked()
{
    //prima paterna c fibr
    mae.HFC->setPPaterno(6);
}
//Histórico de batten da mae
void MainWindow::on_pushButton_92_clicked()
{
     ui->stackedWidget->setCurrentIndex(4);
}

void MainWindow::on_pushButton_93_clicked()
{
    //mae da mae com batten
    mae.HB->setPMaterno(1);
}

void MainWindow::on_pushButton_94_clicked()
{
    //avó materna com batten
    mae.HB->setPMaterno(4);
}

void MainWindow::on_pushButton_95_clicked()
{
    //tia materna com batten
    mae.HB->setPMaterno(5);
}

void MainWindow::on_pushButton_96_clicked()
{
    //prima materna com batten
    mae.HB->setPMaterno(6);
}

void MainWindow::on_pushButton_97_clicked()
{
    //irmã com batten
    mae.HB->setParente(2);
}

void MainWindow::on_pushButton_98_clicked()
{
    //sobrinha com batten
    mae.HB->setParente(3);
}

void MainWindow::on_pushButton_99_clicked()
{
    //pai da mae com batten
    mae.HB->setPPaterno(1);
}

void MainWindow::on_pushButton_100_clicked()
{
    //avó paterna com batten
    mae.HB->setPPaterno(1);
}

void MainWindow::on_pushButton_101_clicked()
{
    //tia paterna com batten
    mae.HB->setPPaterno(1);
}

void MainWindow::on_pushButton_102_clicked()
{
    //prima paterna com batten
    mae.HB->setPPaterno(1);
}
//Essa é a parte do HISTÓRICO de  anemia falc
void MainWindow::on_pushButton_103_clicked()
{
     ui->stackedWidget->setCurrentIndex(4);
}

void MainWindow::on_pushButton_104_clicked()
{
    //mãe da mae com anemia
    mae.HAF->setPMaterno(1);
}

void MainWindow::on_pushButton_105_clicked()
{
    //avó materna com anemia
    mae.HAF->setPMaterno(4);
}

void MainWindow::on_pushButton_106_clicked()
{
    //tia materna com anemia
    mae.HAF->setPMaterno(5);
}

void MainWindow::on_pushButton_107_clicked()
{
    //prima materna com anemia
    mae.HAF->setPMaterno(6);
}

void MainWindow::on_pushButton_108_clicked()
{
    //irma com anemia
    mae.HAF->setParente(2);
}

void MainWindow::on_pushButton_109_clicked()
{
    //sobrinha com anemia
    mae.HAF->setParente(3);
}

void MainWindow::on_pushButton_110_clicked()
{
    //pai da mae com anemia
    mae.HAF->setPPaterno(1);
}

void MainWindow::on_pushButton_111_clicked()
{
    //avo paterno com anemia
    mae.HAF->setPPaterno(4);
}

void MainWindow::on_pushButton_112_clicked()
{
    //tia paterna com anemia
    mae.HAF->setPPaterno(5);
}

void MainWindow::on_pushButton_113_clicked()
{
    //prima paterna com anemia
    mae.HAF->setPPaterno(6);
}
//HISTÓRICO DO PAI COMEÇA ABAIXO
void MainWindow::on_pushButton_63_clicked()
{
    ui->stackedWidget->setCurrentIndex(10);
}
//ALBINISMO
void MainWindow::on_pushButton_64_clicked()
{
    //mae do pai tem albinis
    pai.HA->setPMaterno(1);
}

void MainWindow::on_pushButton_65_clicked()
{
    //avó materna alb
    pai.HA->setPMaterno(4);
}

void MainWindow::on_pushButton_66_clicked()
{
    //tia materna alb
    pai.HA->setPMaterno(5);
}

void MainWindow::on_pushButton_67_clicked()
{
    //prima materna alb
    pai.HA->setPPaterno(6);
}

void MainWindow::on_pushButton_68_clicked()
{
    //irma alb
    pai.HA->setParente(2);
}

void MainWindow::on_pushButton_69_clicked()
{
    //sobrinha em alb
    pai.HA->setParente(3);
}

void MainWindow::on_pushButton_70_clicked()
{
    //pai alb
    pai.HA->setPPaterno(1);
}

void MainWindow::on_pushButton_71_clicked()
{
    //avo paterno alb
    pai.HA->setPPaterno(4);
}

void MainWindow::on_pushButton_72_clicked()
{
    //tia paterna alb
    pai.HA->setPPaterno(5);
}

void MainWindow::on_pushButton_73_clicked()
{
    //prima paterna alb
    pai.HA->setPPaterno(6);
}
//AQUI COMEÇA HISTORICO DE FIBROSE DO PAI
void MainWindow::on_pushButton_74_clicked()
{
    ui->stackedWidget->setCurrentIndex(10);
}


void MainWindow::on_pushButton_114_clicked()
{
    //mae do pai com fibrose
    pai.HFC->setPMaterno(1);
}

void MainWindow::on_pushButton_115_clicked()
{
    //avó mater como fibrose
     pai.HFC->setPMaterno(4);
}

void MainWindow::on_pushButton_116_clicked()
{
    //tia materna c fibrose
     pai.HFC->setPMaterno(5);
}

void MainWindow::on_pushButton_117_clicked()
{
    //prima materna c fibrose
     pai.HFC->setPMaterno(6);
}

void MainWindow::on_pushButton_118_clicked()
{
    //irmao com fibrose
    pai.HFC->setParente(2);
}

void MainWindow::on_pushButton_119_clicked()
{
    //sobrinha com fibrose
    pai.HFC->setParente(3);
}

void MainWindow::on_pushButton_120_clicked()
{
    //pai do pai com fibrose
    pai.HFC->setPPaterno(1);
}

void MainWindow::on_pushButton_121_clicked()
{
    //avó paterna com fibrose
     pai.HFC->setPPaterno(4);
}

void MainWindow::on_pushButton_122_clicked()
{
    //tia paterna com fibrose
     pai.HFC->setPPaterno(5);
}

void MainWindow::on_pushButton_123_clicked()
{
    //prima paterna com fibrose
     pai.HFC->setPPaterno(6);
}
//BATTEN DO PAI (HISTÓRICO)
void MainWindow::on_pushButton_124_clicked()
{
    ui->stackedWidget->setCurrentIndex(10);
}

void MainWindow::on_pushButton_125_clicked()
{
    //mae do pai com batten
    pai.HB->setPMaterno(1);
}

void MainWindow::on_pushButton_126_clicked()
{
    //avó materna com batten
    pai.HB->setPMaterno(4);
}

void MainWindow::on_pushButton_127_clicked()
{
    //tia materna com batten
    pai.HB->setPMaterno(5);
}

void MainWindow::on_pushButton_128_clicked()
{
    //prima materna com batten
    pai.HB->setPMaterno(6);
}

void MainWindow::on_pushButton_129_clicked()
{
    //irma com batten
    pai.HB->setParente(2);
}

void MainWindow::on_pushButton_130_clicked()
{
    //sobrinha com batten
    pai.HB->setParente(3);
}

void MainWindow::on_pushButton_131_clicked()
{
    //pai do pai c batten
    pai.HB->setPPaterno(1);
}

void MainWindow::on_pushButton_132_clicked()
{
    //avó paterna com batten
    pai.HB->setPPaterno(4);
}

void MainWindow::on_pushButton_133_clicked()
{
    //tia paterna com batten
    pai.HB->setPPaterno(5);
}

void MainWindow::on_pushButton_134_clicked()
{
    //prima paterna com batten
    pai.HB->setPPaterno(6);
}
//ANEMIA HIST PAI
void MainWindow::on_pushButton_135_clicked()
{
    ui->stackedWidget->setCurrentIndex(10);
}

void MainWindow::on_pushButton_136_clicked()
{
    //mae do pai com anemia
    pai.HAF->setPMaterno(1);
}

void MainWindow::on_pushButton_137_clicked()
{
    //avo materna do pai com anemia
    pai.HAF->setPMaterno(4);
}

void MainWindow::on_pushButton_138_clicked()
{
    //tia materna do pai com anemia
    pai.HAF->setPMaterno(5);
}

void MainWindow::on_pushButton_139_clicked()
{
    //prima materna do pai com anemia
    pai.HAF->setPMaterno(6);
}

void MainWindow::on_pushButton_140_clicked()
{
    //irma do pai com anemia
    pai.HAF->setParente(2);
}

void MainWindow::on_pushButton_141_clicked()
{
    //sobrinha do pai com anemia
    pai.HAF->setParente(3);
}

void MainWindow::on_pushButton_142_clicked()
{
    //pai do pai com anemia
    pai.HAF->setPPaterno(1);
}

void MainWindow::on_pushButton_143_clicked()
{
    //avó paterna com anemia
    pai.HAF->setPPaterno(4);
}

void MainWindow::on_pushButton_144_clicked()
{
    //tia paterna com anemia
    pai.HAF->setPPaterno(5);
}

void MainWindow::on_pushButton_145_clicked()
{
    //prima paterna com anemia
    pai.HAF->setPPaterno(6);
}
