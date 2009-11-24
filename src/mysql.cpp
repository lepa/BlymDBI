#include "blymdbi_mysql.hpp"

cantInit CantInit;
cantConn CantConnect;


BlymDBI_Mysql::BlymDBI_Mysql (const char* host, const char* user, const char* pass, const char* db)
{
	if (! (mysql_init (conn)))
	{
		throw CantInit;
	}

	if (! (mysql_real_connect (conn, host, user, pass, db)))
	{
		throw CantConnect;
	}

}



