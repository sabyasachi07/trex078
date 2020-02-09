#include <QCoreApplication>
#include <sockettest.h>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    sockettest pot;
    pot.connect();

  return a.exec();
}
