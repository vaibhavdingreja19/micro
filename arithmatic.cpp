#include "master.h"
#include "global.h"
#include "tools.h"

bool sub(string temp_string)
{
	vector<string> parts;
	parts=seperator(temp_string);
	int size=parts.size();
	if(size==2)
	{
		int from=resister_is(parts[1]);
		if(from==-1)
			return true;
		else if(from==7)
		{
			from=validate_store(rpair(5));
			if(from==-1)
                return true;
            else
                gpr[0]=gpr[0]-from;
		}
		else
		{
			gpr[0]=gpr[0]-gpr[from];
		}
		set_flag_register(gpr[0]);
		gpr[0]=fabs(gpr[0]);
		return false;
	}
	else
		return true;
}

bool add(string temp_string)
{
	vector<string> parts;
	parts=seperator(temp_string);
	int size=parts.size();
	if(size==2)
	{
		int from=resister_is(parts[1]);
		if(from==-1)
			return true;
		else if(from==7)
		{
			from=validate_store(rpair(5));
			if(from==-1)
                return true;
            else
                gpr[0]=gpr[0]+from;
		}
		else
		{
			gpr[0]=gpr[0]+gpr[from];
		}
		set_flag_register(gpr[0]);
		return false;
	}
	else
		return true;
}

bool adi(string temp_string)
{
	vector<string> parts;
	parts=seperator(temp_string);
	int size=parts.size();
	if(size==2)
	{
		int from=resister_is(parts[1]);
		if(from==-1)
		{
			if((parts[1].length())==2)
			{
				int data=hex2dec(parts[1]);
				if(data==-1)
					return true;
				gpr[0]=gpr[0]+data;
				set_flag_register(gpr[0]);
				return false;
			}
			else
				return true;
		}
		else
			return true;
	}
	else
		return true;
}

bool sui(string temp_string)
{
	vector<string> parts;
	parts=seperator(temp_string);
	int size=parts.size();
	if(size==2)
	{
		int from=resister_is(parts[1]);
		if(from==-1)
		{
			if((parts[1].length())==2)
			{
				from=hex2dec(parts[1]);
				if(from==-1)
					return true;
				gpr[0]=gpr[0]-from;
				set_flag_register(gpr[0]);
				gpr[0]=fabs(gpr[0]);
				return false;
			}
			else
				return true;
		}
		else
			return true;
	}
	else
		return true;
}

bool dad(string temp_string)
{
		vector<string> parts;
		parts=seperator(temp_string);
		int size=parts.size();
		if(size==2)
		{
			int temp=resister_is(parts[1]);
			if(temp==7)
				return true;
			else if(temp==1 || temp==3 || temp==5)
			{
				int from=rpair(temp);
				int with=rpair(5);
				int result=from+with;
				if(result>65535)
				{
					flag[0]=1;
				}
				string data=dec2hex(result,4);
				string X1="",X2="";
				X1=X1+data[0]+data[1];
				X2=X2+data[2]+data[3];
				gpr[5]=hex2dec(X1);
				gpr[6]=hex2dec(X2);
				return false;
			}
			else
				return true;
		}
		else
			return true;
}
