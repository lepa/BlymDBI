#include "blymdbi.h"
#include <mysql/mysql.h>

class BlymDBI_Mysql
{
	MYSQL* db;

public:
	BlymDBI_Mysql (const char*, const char*, const char*); 


