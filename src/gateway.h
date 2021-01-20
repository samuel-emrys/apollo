#ifndef GATEWAY_H
#define GATEWAY_H
#include <QMessageBox>
#include <QtSql>
#include "dataseries.h"
#include "ticker.h"

class Gateway
{
private:
    QSqlDatabase db;
    QString const DB_PATH = "../database/stocks.db";
public:
    Gateway();

    void Initialize();

    //Getters
    DataSeries getTickerData(QString& _ticker);
    QVector<Ticker> getTickers();
};

#endif // GATEWAY_H
