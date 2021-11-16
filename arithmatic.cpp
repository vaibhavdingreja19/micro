#include "allheads.h"
#include "all.h"

bool add(string temp)		//Add register or memory to the accumulator
{
	vector <string> parts;
	parts=seperator(temp);
	int a=regis(parts[1]);
	if(a==7)
	{
		a=validate_store(regispair(5));
		general_register[0]=general_register[0]+a;
	}
	else
	{
	general_register[0]=general_register[0]+general_register[a];
	}
	flags(general_register[0]);
return false;
}

bool adi(string temp)
{
	vector<string> parts;
	parts=seperator(temp);
	int a=regis(parts[1]);
	int data=h2d(parts[1]);
	general_register[0]=general_register[0]+data;
	flags(general_register[0]);
	return false;
}

bool sub(string temp)
{
	vector<string> parts;
	parts=seperator(temp);
	int a=regis(parts[1]);
	if(a==7)
	{
		a=validate_store(regispair(5));
		general_register[0]=general_register[0]-a;
	}
	else
	{
	general_register[0]=general_register[0]-general_register[a];
	}
	flags(general_register[0]);
return false;
}
bool sui(string temp)
{
	vector<string> parts;
	parts=seperator(temp);
	int a=regis(parts[1]);
	int data=h2d(parts[1]);
	general_register[0]=general_register[0]-data;
	flags(general_register[0]);
	return false;
	
}

