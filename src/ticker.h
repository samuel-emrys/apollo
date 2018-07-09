#ifndef TICKER_H
#define TICKER_H
#include <QString>
#include "dataseries.h"
#include "imodeldata.h"

class Ticker : public IModelData
{
private:
    QString m_symbol;
    QString m_description;
    QString m_exchange;
    QString m_sector;
    QString m_currency;
    DataSeries m_data;

public:
    Ticker();
    Ticker(QString _symbol, QString _description, QString _exchange, QString _sector, QString _currency);

    //Getters
    QString getSymbol() { return this->m_symbol; }
    QString getDescription() { return this->m_description; }
    QString getExchange() { return this->m_exchange; }
    QString getSector() { return this->m_sector; }
    QString getCurrency() { return this->m_currency; }
    DataSeries getData() { return this->m_data; }

    //Setters
    void addSymbol(QString _symbol) { this->m_symbol = _symbol; }
    void addDescription(QString _desc) { this->m_description = _desc; }
    void addExchange(QString _exchange) { this->m_exchange = _exchange; }
    void addSector(QString _sector) { this->m_sector = _sector; }
    void addCurrency(QString _currency) { this->m_currency = _currency; }
    void addData(DataSeries _data) { this->m_data = _data; }

};

#endif // TICKER_H
