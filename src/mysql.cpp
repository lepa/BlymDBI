#include "blymdbi_mysql.hpp"

cantInit CantInit;
cantConn CantConnect;


BlymDBI_Mysql::BlymDBI_Mysql (const char* host, const char* user, const char* pass)
{
	if (! (mysql_init (db)) )
	{
		throw CantInit;
	}

	if (! (mysql_real_connect (db, host, user, pass)) )
	{
		throw CantConnect;
	}

}


