#ifndef GATEWAY_H
#define GATEWAY_H
#include <QMessageBox>
#include <QtSql>

class Gateway
{
private:
    QSqlDatabase db;
    QString const DB_PATH = "../database/stocks.db";
public:
    Gateway();

    void Initialize();

    //Getters
    QSqlRecord getTickerData(QString& _ticker);
    QSqlRecord getTickers();
};

#endif // GATEWAY_H
