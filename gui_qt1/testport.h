#ifndef TESTPORT_H
#define TESTPORT_H

#include <QObject>
#include <QDebug>

class TestPort : public QObject
{
    Q_OBJECT
public:
    explicit TestPort(QObject *parent = nullptr);
    int count{0};

signals:

public slots:

private:
    void port_init();
    void port_open();
    void port_data_update();
    void port_close();
};

#endif // TESTPORT_H
