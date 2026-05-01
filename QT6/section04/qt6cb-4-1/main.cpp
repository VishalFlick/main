#include <QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    //Variables are something that will change
    bool LightSwitch = false;

    qInfo() << "Is on:" << LightSwitch;

    LightSwitch = true;
    qInfo() << "Is on:" << LightSwitch;

    return QCoreApplication::exec();
}
