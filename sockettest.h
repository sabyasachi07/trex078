#ifndef SOCKETTEST_H
#define SOCKETTEST_H

#include <QObject>

class SocketTest : public QObject
{
    Q_OBJECT
public:
    explicit SocketTest(QObject *parent = nullptr);

signals:

public slots:
};

#endif // SOCKETTEST_H