#include "blymdbi.hpp"
#include <mysql/mysql.h>

class BlymDBI_Mysql: public BlymDBI;
{
	MYSQL* conn;

public:
	BlymDBI_Mysql (const char*, const char*, const char*, const char*); 
};


class cantInit : public std::exception
{
	const char* what () const throw ()
	{
		return "Can't initialize the database";
	}
};

class cantConn : public std::exception
{
	const char* what () const throw ()
	{
		return "Can't connect in this database with this username and password";
	}
};


