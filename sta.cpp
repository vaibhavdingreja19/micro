#include "master.h"
#include "global.h"
#include "tools.h"

bool sta(string temp_string)
{
	vector<string> parts;
	parts=seperator(temp_string);
	int size=parts.size();
	if(size==2)
	{
		int len=parts[1].length();
		if(len == 4 )
		{
			int address=hex2dec(parts[1]);
			if(address==-1)
					return true;
			store[address]=gpr[0];
			return false;
		}
		else
		{
			return true;
		}
	}
	else
		return true;
}
