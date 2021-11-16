#include "all.h"
#include "allheads.h"
bool mov(string temp)
{
	vector<string> parts;
	parts=seperator(temp);
	int a=regis(parts[1]);
	int b=regis(parts[2]);
	general_register[a]=general_register[b];
	return false;
}


