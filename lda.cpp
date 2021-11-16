#include "master.h"
#include "global.h"
#include "tools.h"

bool lda(string temp_string)
{
	vector<string> parts;
	parts=seperator(temp_string);
	int size=parts.size();
	if(size==2)
	{
		int len=parts[1].length();
		if(len == 4 )
		{
			int data=hex2dec(parts[1]);
			if(data==-1)
					return true;
			gpr[0]=store[data];
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

