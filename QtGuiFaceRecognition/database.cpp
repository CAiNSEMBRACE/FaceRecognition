#include"database.h"

#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QString>
#include <QtDebug>

void DataBase_s::createConnection() {
	QSqlDatabase database = QSqlDatabase::addDatabase("QSQLITE");
	database.setDatabaseName("student.db");
	database.setUserName("tianxu8822");
	database.setPassword("123456");
	if (database.open()) {
		qDebug() << "database opened!";
	}
}

void DataBase_s::createTable() {
	QString create_sql = "create table student4 (id int primary key, name varchar(10), class_num int, start int)";
	QSqlDatabase database = QSqlDatabase::database("qt_sql_default_connection");
	QSqlQuery query(database);

	if (!query.exec(create_sql)) {
		qDebug() << QObject::tr("create table failed!");
		qDebug() << query.lastError();
	}
	else {
		qDebug() << "table created!";
	}
}

void DataBase_s::insert(int a, QString b, int c,int d) {
	QString insert_sql = "insert into student4 values(?,?,?,?)";
	QSqlDatabase database = QSqlDatabase::database("qt_sql_default_connection");
	QSqlQuery query(database);

	query.prepare(insert_sql);
	query.addBindValue(a);
	query.addBindValue(b);
	query.addBindValue(c);
	query.addBindValue(d);
	if (query.exec()) {
		//qDebug() << "insert success";
	}
	else {
		qDebug() << query.lastError();
	}

}
void DataBase_s::show() {
	QString select_sql = "select id, name,class_num,start from student4";
	QSqlDatabase database = QSqlDatabase::database("qt_sql_default_connection");
	QSqlQuery query(database);

	if (!query.exec(select_sql))
	{
		qDebug() << query.lastError();
	}
	else
	{
		qDebug() << "Table display:";
		while (query.next())
		{
			int id = query.value(0).toInt();
			QString name = query.value(1).toString();
			int class_num = query.value(2).toInt();
			int start = query.value(3).toInt();
			int flag = query.value(4).toInt();
			qDebug() << QString("id:%1    name:%2   class_num:%3   start_time:%4").arg(id).arg(name).arg(class_num).arg(start);
		}
	}
}

string DataBase_s::select(int a) {
	QString select_sql = "select id, name,class_num,start from student4";
	QSqlDatabase database = QSqlDatabase::database("qt_sql_default_connection");
	QSqlQuery query(database);
	string s1, s2, s3;

	if (!query.exec(select_sql))
	{
		qDebug() << query.lastError();
	}
	else
	{
		qDebug() << "student message:";
		while (query.next())
		{
			int id = query.value(0).toInt();
			QString name = query.value(1).toString();
			int class_num = query.value(2).toInt();
			int start = query.value(3).toInt();
			if (id == a) {
				 s1 = to_string(id);
				 s2 = name.toStdString();
				 s3 = to_string(class_num);
			}
		}
	}
	return s1 + " " + s2 + " " + s3;
}

void DataBase_s::update(int a,int b) {
	QString update_sql = "update student4 set start = :start where id = :id";
	QSqlDatabase database = QSqlDatabase::database("qt_sql_default_connection");
	QSqlQuery query(database);

	query.prepare(update_sql);
	query.bindValue(":start",b);
	query.bindValue(":id",a);
	if (query.exec()) {
		//success
	}
	else {
		qDebug() << query.lastError();
	}
}

int DataBase_s::select_time(int a) {
	int tmp;
	QString select_sql = "select id,start from student4";
	QSqlDatabase database = QSqlDatabase::database("qt_sql_default_connection");
	QSqlQuery query(database);

	if (!query.exec(select_sql))
	{
		qDebug() << query.lastError(); 
	}
	else {
		while (query.next()) {
			int id = query.value(0).toInt();
			int start = query.value(1).toInt();
			if (a == id)
				tmp = start;
		}
	}
	return tmp;
}

void DataBase_s::signin() {
	//

}