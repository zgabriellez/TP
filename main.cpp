#include "mainwindow.h"
#include <QApplication>
#include <conio.h>
#include "famili.h"
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
#include <locale.h>
QT_CHARTS_USE_NAMESPACE

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    setlocale(LC_ALL, "");
   // w.mae.m->setABO("A");

  return a.exec();
}
