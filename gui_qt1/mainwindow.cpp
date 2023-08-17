#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->comboBox_port->addItem("none");
    ui->comboBox_port->addItem("/dev/ttyUSB0");
    ui->comboBox_port->addItem("/dev/ttyUSB1");

    ui->comboBox_speed->addItem("none");
    ui->comboBox_speed->addItem("9600");
    ui->comboBox_speed->addItem("11200");

    id_timer_update = startTimer(200);
    id_timer_2 = startTimer(500);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::timerEvent(QTimerEvent *event)
{
    if (event->timerId() == id_timer_update)
    {
        //ToDo something
    }

    if (event->timerId() == id_timer_2)
    {
        //ToDo something another
    }
}

void MainWindow::on_comboBox_port_activated(const QString &arg1)
{
    qDebug() << arg1;
    m_port = arg1;
}

void MainWindow::on_comboBox_speed_activated(const QString &arg1)
{
     qDebug() << arg1;
     m_port_speed = arg1;
}

void MainWindow::on_checkBox_relay_1_clicked()
{
    if (ui->checkBox_relay_1->isChecked())
    {
        qDebug() << "Relay_1: checked";
        m_isChecked_relay_1 = !m_isChecked_relay_1;
    }

    if (!ui->checkBox_relay_1->isChecked())
    {
        qDebug() << "Relay_1: unchecked";
        m_isChecked_relay_1 = !m_isChecked_relay_1;
    }
}

void MainWindow::on_btn_close_clicked()
{
    exit(0);
//    Qt.quit();
}

void MainWindow::on_btn_stop_clicked()
{
    qDebug() << "Run script: write 0";
//    system("./py_led_off.py");
}

void MainWindow::on_btn_start_clicked()
{
    if (m_isChecked_relay_1)
    {
        qDebug() << "relay_1 is activated";
    }

    qDebug() << "port: " << m_port << "\n" << "port speed:" << m_port_speed << "\n";
}
