#include "dataseries.h"

DataSeries::DataSeries()
{

}
DataSeries::DataSeries(QVector<double> date, QVector<double> open, QVector<double> high, QVector<double> low, QVector<double> close, long long vol) :
    m_date(date),
    m_open(open),
    m_high(high),
    m_low(low),
    m_close(close),
    m_volume(vol)
{

}
