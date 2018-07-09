#ifndef DATASERIES_H
#define DATASERIES_H
#include <QVector>
#include "imodeldata.h"

class DataSeries : public IModelData
{
private:
    QVector<double> m_date;
    QVector<double> m_open;
    QVector<double> m_high;
    QVector<double> m_low;
    QVector<double> m_close;
    long long m_volume; //consider changing to qt's datatypes

public:
    DataSeries();
    DataSeries(QVector<double> date, QVector<double> open, QVector<double> high, QVector<double> low, QVector<double> close, long long vol);

    //Getters
    QVector<double> getDates() { return this->m_date; }
    QVector<double> getOpen() { return this->m_open; }
    QVector<double> getHigh() { return this->m_high; }
    QVector<double> getLow() { return this->m_low; }
    QVector<double> getClose() { return this->m_close; }
    long long getVol() { return this-> m_volume; }

    //Setters
    void setDateSeries(QVector<double> _dates) { this->m_date = _dates; }
    void setOpenSeries(QVector<double> _open) { this->m_open = _open; }
    void setHighSeries(QVector<double> _high) { this->m_high = _high; }
    void setLowSeries(QVector<double> _low) { this->m_low = _low; }
    void setCloseSeries(QVector<double> _close) { this->m_close = _close; }
    void setVol(long long _vol) { this->m_volume = _vol; }


};

#endif // DATASERIES_H
