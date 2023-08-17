#include "testport.h"

TestPort::TestPort(QObject *parent) : QObject(parent)
{

}

void TestPort::port_init()
{
    qDebug() << "void TestPort::port_init()";
}

void TestPort::port_open()
{
    qDebug() << "void TestPort::port_open()";
}

void TestPort::port_data_update()
{
    qDebug() << "void TestPort::port_data_update()";
    count++;
    qDebug() << "count: " << count << "\n";
}

void TestPort::port_close()
{
    qDebug() << "void TestPort::port_close()";
}

