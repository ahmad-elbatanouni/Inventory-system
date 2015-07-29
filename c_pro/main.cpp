#include <QtGui/QApplication>
#include "c_pro.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    C_pro w;
    w.show();

    return a.exec();
}
