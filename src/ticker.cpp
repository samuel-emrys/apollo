#include "ticker.h"

Ticker::Ticker()
{

}

Ticker::Ticker(QString _symbol, QString _description, QString _exchange, QString _sector, QString _currency) :
    m_symbol(_symbol),
    m_description(_description),
    m_exchange(_exchange),
    m_sector(_sector),
    m_currency(_currency)
{

}
