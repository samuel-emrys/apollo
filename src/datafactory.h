#ifndef DATAFACTORY_H
#define DATAFACTORY_H
#include <QtSql>
#include "imodeldata.h"

class DataFactory
{
public:
    DataFactory();
    IModelData Create(QSqlRecord* q);
};

#endif // DATAFACTORY_H
