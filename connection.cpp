
#include "connection.h"
connection::connection()
{

}

bool connection::createconnect()
{
    bool test=false;
  QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
  db.setDatabaseName("projet");
  db.setUserName("mohamed");
  db.setPassword("123");

  if (db.open())
      test=true;

  return test ;

}
