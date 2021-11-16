#include "master.h"
#include "global.h"
#include "tools.h"

bool set1(string temp_string)							
{
	vector<string> parts;
	parts=seperator(temp_string);
	int size=parts.size();
	if(size==3)
	{
		int len=parts[1].length();
		int len2=parts[2].length();
		if (len == 4 && len2 == 2)
		{
			len=hex2dec(parts[1]);
			len2=hex2dec(parts[2]);
			if(len==-1 || len2==-1)
				return true;
			store[len]=len2;
			return false;
		}
		else
			return true;
	}
	else
		return true;
}
