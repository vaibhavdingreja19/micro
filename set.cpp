#include"all.h"
#include"allheads.h"
bool set(string temp)
{
	vector<string> parts;
	parts=seperator(temp);
	if(parts.size()==3)
	{
		int q=parts[1].length();
		int r=parts[2].length();
		if(q==4 && r==2)
		{
			q=h2d(parts[1]);
			r=h2d(parts[2]);
			store[q]=r;
			return false;
		}
		else 
		{
			return true;
		}
	}
	else
	{
		return true;
	}	
}
