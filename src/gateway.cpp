#include "gateway.h"

Gateway::Gateway()
{
    Initialize();
}

Gateway::Initialize()
{
    if (!QSqlDatabase::drivers().contains("QSQLITE"))
    {
        QMessageBox::critical(this, "Unable to load database", "This demo needs the SQLITE driver");
    }

    this->db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName(DB_PATH);
}
