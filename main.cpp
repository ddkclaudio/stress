#include <QtCore/QCoreApplication>
#include <QtSQL>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    qDebug() << "===" << QSqlDatabase::drivers();
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL","DB");
    db.setHostName("localhost");
    db.setDatabaseName("2019_qhistory_coinbase");
    db.setUserName("root");
    db.setPassword("root");

    if(db.open()){
        qDebug() << "Connected";
    }else{
        qDebug() << "Not Connected";
    }

    return a.exec();
}
