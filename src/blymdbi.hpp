#include <vector>
#include <exception>

typedef std::string String;

class BlymDBI
{
	BlymDBI { throw UsedBase; };

	virtual bool open_db (const char*);
	virtual bool open_db (const String&);

	virtual bool use_table (const char*);
	virtual bool use_table (const String&);
	
	virtual bool insert (const char**);
	virtual bool insert (const String*);
	virtual bool insert (const std::vector<String>&);

	virtual std::map<String,String>& fetch_row ();
	
	virtual bool remove (const char*);
	virtual bool remove (const String&);

	virtual bool replace (const char*, const char*);
	virtual bool replace (const String&, const String&);
};





class usedBase : public std::exception
{
	const char* what () const throw ()
	{
		return "You can't use BlymDBI base class";
	}
} UsedBase;

class noTable : public std::excpetion
{
	const char* what () const throw ()
	{
		return "You must select a table before work with that";
	}
} NoTable;


