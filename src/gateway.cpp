#include "gateway.h"
#include <QtSql>
#include "ticker.h"
#include "dataseries.h"

Gateway::Gateway()
{
    Initialize();
}

void Gateway::Initialize()
{
    qInfo() << "Initialising database";

    if (!QSqlDatabase::drivers().contains("QSQLITE"))
    {
        //QMessageBox::critical(this, "Unable to load database", "SQLITE driver required.");
        qDebug() << "Missing SQLITE driver";
    }

    this->db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName(DB_PATH);

    if (!db.open())
    {
        QSqlDatabase::removeDatabase("QSQLITE");
        qInfo() << "Failed to open database!";
    }
    else
    {
        qInfo() << "Database opened successfully.";
    }

}

DataSeries Gateway::getTickerData(QString& _ticker)
{
    QVector<double> date;
    QVector<double> open;
    QVector<double> high;
    QVector<double> low;
    QVector<double> close;
    QVector<long long> volume;
    QSqlQuery query;

    query.setForwardOnly(true); //speeds up result navigation by removing result caching
    query.exec("SELECT * "
               "FROM stocks "
               "WHERE ticker='"+_ticker+"';");

    while (query.next())
    {
        date.push_back(query.value(1).toDateTime().toTime_t());
        open.push_back(query.value(2).toDouble());
        high.push_back(query.value(3).toDouble());
        low.push_back(query.value(4).toDouble());
        close.push_back(query.value(5).toDouble());
        volume.push_back(query.value(6).toLongLong());
    }

    DataSeries data(date, open, high, low, close, volume);
    return data;
}


QVector<Ticker> Gateway::getTickers()
{
    QVector<Ticker> data;

    QSqlQuery query;
    query.setForwardOnly(true); //speeds up result navigation by removing result caching
    query.exec("SELECT * FROM tickers");

    while (query.next())
    {
        QString symbol = query->value(0).toString();
        QString desc = query->value(1).toString();
        QString exchange = query->value(2).toString();
        QString sector = query->value(3).toString();
        QString currency = query->value(4).toString();

        Ticker t(symbol, desc, exchange, sector, currency);
        data.push_back(t);
    }

    return data;
}
