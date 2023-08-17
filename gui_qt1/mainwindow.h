#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QString>
#include <QTimerEvent>
#include "testport.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    void timerEvent(QTimerEvent *event);

private slots:
    void on_comboBox_port_activated(const QString &arg1);

    void on_comboBox_speed_activated(const QString &arg1);

    void on_checkBox_relay_1_clicked();

    void on_btn_close_clicked();

    void on_btn_stop_clicked();

    void on_btn_start_clicked();

private:
    Ui::MainWindow *ui;
    bool m_isChecked_relay_1{false};
    QString m_port{""};
    QString m_port_speed{""};


    int id_timer_update{-1};
    int id_timer_2{-1};
};

#endif // MAINWINDOW_H
