#ifndef GATEWAY_H
#define GATEWAY_H
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
    QVector<double> getTickerData(QString _ticker, QString _col);
    QVector<QString> getTickers();
};

#endif // GATEWAY_H
