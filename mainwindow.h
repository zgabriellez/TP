#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "famili.h"
#include <QApplication>
#include<QMessageBox>
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
#include "sprite.h"
#include <QWidget>
#include <QPainter>
#include <QGraphicsItem>
#include <QRectF>
#include <qdesktopwidget.h>
#include <QDebug>
#include <QGraphicsScene>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    Familia_Mae mae;
    Familia_Pai pai;
    Bebe beb;

public slots:
    //BOTÃ•ES DE 5 - 13 Sao DA TELA 2 (SANGUE E RH DA MÃƒE
    void on_pushButton_clicked();

    void on_pushButton_12_clicked();


    void on_pushButton_2_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_10_clicked();

    void on_pushButton_15_clicked(bool);

    void on_pushButton_16_clicked(bool);

    void on_pushButton_17_clicked(bool);

    void on_pushButton_18_clicked(bool);

    void on_pushButton_19_clicked(bool);

    void on_pushButton_20_clicked(bool);

    void on_pushButton_14_clicked();

    void on_pushButton_23_clicked();

    void on_pushButton_27_clicked();

    void on_pushButton_28_clicked();

public slots:

    void on_pushButton_26_clicked();

public slots:

    void on_pushButton_41_clicked();

    void on_pushButton_32_clicked();

    void on_pushButton_30_clicked();

    void on_pushButton_31_clicked();

    void on_pushButton_42_clicked();

    void on_pushButton_45_clicked();

    void on_pushButton_44_clicked();

    void on_pushButton_46_clicked();

    void on_pushButton_43_clicked();

    void on_pushButton_13_clicked();

    void on_pushButton_39_clicked();

    void on_pushButton_38_clicked();

    void on_pushButton_40_clicked();

    void on_pushButton_47_clicked();

    void on_pushButton_48_clicked();

    void on_pushButton_49_clicked();

    void on_pushButton_50_clicked(bool);

    void on_pushButton_51_clicked(bool);

    void on_pushButton_52_clicked(bool);

    void on_pushButton_53_clicked(bool);

    void on_pushButton_54_clicked(bool);

    void on_pushButton_55_clicked(bool);

    void on_pushButton_56_clicked();

    void on_pushButton_57_clicked();

    void on_pushButton_58_clicked();

    void on_pushButton_59_clicked();

    void on_pushButton_60_clicked();

    void on_pushButton_61_clicked();

    void on_pushButton_62_clicked();

    void on_pushButton_76_clicked();

    void on_pushButton_75_clicked();

    void on_pushButton_34_clicked();

    void on_pushButton_77_clicked();

    void on_pushButton_84_clicked();

    void on_pushButton_85_clicked();

    void on_pushButton_86_clicked();

    void on_pushButton_87_clicked();


private slots:


    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_11_clicked();

    void on_pushButton_21_clicked();

    void on_pushButton_22_clicked();

    void on_pushButton_25_clicked();

    void on_pushButton_24_clicked();

    void on_pushButton_29_clicked();

    void on_pushButton_33_clicked();

    void on_pushButton_35_clicked();

    void on_pushButton_36_clicked();

    void on_pushButton_37_clicked();

    void on_pushButton_78_clicked();

    void on_pushButton_79_clicked();

    void on_pushButton_80_clicked();

    void on_pushButton_81_clicked();

    void on_pushButton_82_clicked();

    void on_pushButton_83_clicked();

    void on_pushButton_88_clicked();

    void on_pushButton_89_clicked();

    void on_pushButton_90_clicked();

    void on_pushButton_91_clicked();

    void on_pushButton_92_clicked();

    void on_pushButton_93_clicked();

    void on_pushButton_94_clicked();

    void on_pushButton_95_clicked();

    void on_pushButton_96_clicked();

    void on_pushButton_97_clicked();

    void on_pushButton_98_clicked();

    void on_pushButton_99_clicked();

    void on_pushButton_100_clicked();

    void on_pushButton_101_clicked();

    void on_pushButton_102_clicked();

    void on_pushButton_103_clicked();

    void on_pushButton_104_clicked();

    void on_pushButton_105_clicked();

    void on_pushButton_106_clicked();

    void on_pushButton_107_clicked();

    void on_pushButton_108_clicked();

    void on_pushButton_109_clicked();

    void on_pushButton_110_clicked();

    void on_pushButton_111_clicked();

    void on_pushButton_112_clicked();

    void on_pushButton_113_clicked();

    void on_pushButton_63_clicked();

    void on_pushButton_64_clicked();

    void on_pushButton_65_clicked();

    void on_pushButton_66_clicked();

    void on_pushButton_67_clicked();

    void on_pushButton_68_clicked();

    void on_pushButton_69_clicked();

    void on_pushButton_70_clicked();

    void on_pushButton_71_clicked();

    void on_pushButton_72_clicked();

    void on_pushButton_73_clicked();

    void on_pushButton_74_clicked();

    void on_pushButton_114_clicked();

    void on_pushButton_115_clicked();

    void on_pushButton_116_clicked();

    void on_pushButton_117_clicked();

    void on_pushButton_118_clicked();

    void on_pushButton_119_clicked();

    void on_pushButton_120_clicked();

    void on_pushButton_121_clicked();

    void on_pushButton_122_clicked();

    void on_pushButton_123_clicked();

    void on_pushButton_124_clicked();

    void on_pushButton_125_clicked();

    void on_pushButton_126_clicked();

    void on_pushButton_127_clicked();

    void on_pushButton_128_clicked();

    void on_pushButton_129_clicked();

    void on_pushButton_130_clicked();

    void on_pushButton_131_clicked();

    void on_pushButton_132_clicked();

    void on_pushButton_133_clicked();

    void on_pushButton_134_clicked();

    void on_pushButton_135_clicked();

    void on_pushButton_136_clicked();

    void on_pushButton_137_clicked();

    void on_pushButton_138_clicked();

    void on_pushButton_139_clicked();

    void on_pushButton_140_clicked();

    void on_pushButton_141_clicked();

    void on_pushButton_142_clicked();

    void on_pushButton_143_clicked();

    void on_pushButton_144_clicked();

    void on_pushButton_145_clicked();

private:
    Ui::MainWindow *ui;
};


#endif // MAINWINDOW_H
