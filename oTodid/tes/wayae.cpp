#include <chrono>
#include <mainwindow.h>
#include <ui_mainwindow.h>
#include <QTimer>
#include <QString>
#include <ctime>

void wait(int seconds){
    clock_t endwait;
    endwait=clock()+seconds*CLOCKS_PER_SEC;
    while (clock()<endwait);
}

void MainWindow::fungsi(){

    int s = 0,
        m = 0,
        h = 0;
    QString ss = QString::number(s),
            mm = QString::number(m),
            hh = QString::number(h);


    while(s<5){

        s++;
        if(s>59){
            m++; s=0;
        }
        if(m>59){
            h++; m=0;
        }
        ss = QString::number(s),
        mm = QString::number(m),
        hh = QString::number(h);
        ui->label->setText(hh+" : "+mm+" : "+ss);
        wait(1);
    }


}
