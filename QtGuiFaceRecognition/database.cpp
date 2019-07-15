#include"database.h"


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
	QString create_sql = "create table student (id int primary key, name varchar(10), class_num int, start int)";
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
	QString insert_sql = "insert into student values(?,?,?,?)";
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
QString DataBase_s::show() {
	QString select_sql = "select id, name,class_num,start from student";
	QSqlDatabase database = QSqlDatabase::database("qt_sql_default_connection");
	QSqlQuery query(database);
	  query.exec(select_sql);
		QString tmp;
		string b;
		while (query.next())
		{
			int id = query.value(0).toInt();
			QString name = query.value(1).toString();
			int class_num = query.value(2).toInt();
			int start = query.value(3).toInt();
			transform(start, b);
			if(id ==1 || id == 2)
			tmp += QString::number(id) + " " + name + " " + QString::number(class_num) + " " + QString::number(start) + "\n";
			else
			tmp += QString::number(id) + " " + name + " " + QString::number(class_num) + " " + QString::fromStdString(b)+ "\n";
		}
		return tmp;
}

string DataBase_s::select(int a) {
	QString select_sql = "select id, name,class_num,start from student";
	QSqlDatabase database = QSqlDatabase::database("qt_sql_default_connection");
	QSqlQuery query(database);
	string tmp;
	query.exec(select_sql);
		while (query.next())
		{
			int id = query.value(0).toInt();
			QString name = query.value(1).toString();
			int class_num = query.value(2).toInt();
			int start = query.value(3).toInt();
			if (id == a) {
				tmp += to_string(id) + " " + name.toStdString() + " " + to_string(class_num);
				return tmp;
			}
		}
		tmp = "NULL NULL NULL";
		return tmp;
}

void DataBase_s::update(int a,int b) {
	QString update_sql = "update student set start = :start where id = :id";
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

QString DataBase_s::select_person(int a) {
	QString select_sql = "select id,name,class_num,start from student";
	QSqlDatabase database = QSqlDatabase::database("qt_sql_default_connection");
	QSqlQuery query(database);
	QString tmp;
	string s;
	if (!query.exec(select_sql))
	{
		qDebug() << query.lastError();
	}
	else {
		while (query.next()) {
			int id = query.value(0).toInt();
			QString name = query.value(1).toString();
			int class_num = query.value(2).toInt();
			int start = query.value(3).toInt();
			transform(start, s);
			if (a == id)
				tmp = QString::number(id) + " " + name + " " + QString::number(class_num) + " " + QString::fromStdString(s);
			else
				tmp = "Not found";
		}
	}
	return tmp;
}

int DataBase_s::GetNum() {
	int num;
	QString select_sql = "select id from student";
	QSqlDatabase database = QSqlDatabase::database("qt_sql_default_connection");
	QSqlQuery query(database);
	query.exec(select_sql);
	num = 0;
	while (query.next())
	{
		num++;
	}
	return num;
}

int DataBase_s::select_time(int a) {
	QString select_sql = "select id,start from student";
	QSqlDatabase database = QSqlDatabase::database("qt_sql_default_connection");
	QSqlQuery query(database);
	query.exec(select_sql);
	while (query.next()) {
		int id = query.value(0).toInt();
		int start = query.value(1).toInt();
		if (a == id)
			return start;
	}
	return -1;
}

time_t  DataBase_s::GetTimeBySec() {
	time_t timer = time(NULL);
	return timer;
}
//²»ÓÃ
void DataBase_s::transform(int a, string& b) {
	struct tm* date;
	time_t  time = a;
	date = localtime(&time);
	b = asctime(date);
	//cout << asctime(date);
}