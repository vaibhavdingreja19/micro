#include "allheads.h"
#include "all.h"
bool lda(string temp)
{
	vector<string> parts;
	parts=seperator(temp);
	int length=parts[1].length();
	if(length==4)
	{
		int data=h2d(parts[1]);
		general_register[0]=store[data];
		return false
	}
	else
	{
	return true;
	}
}

bool sta(string temp)
{
	vector<string> parts;
	parts=seperator(temp);
	int length=parts[1].length();
	if(length==4)
	{
		int mem3=h2d(parts[1]);
		store[mem3]=general_register[0];
		return false;
	}
	else
	{
		return true;
	}
}

bool lhld(string temp)
{
	vector<string> parts;
	parts=seperator(temp);
	int length=parts[1].length();
	if(length==4)
	{
		int mem3=h2d(parts[1]);
		string data=d2h(store[mem3],2);
		string temp1=" ",temp2=" ";
		temp1=temp1+data[0]+data[1];
		data=d2h(store[mem3+1],2)
		temp2=temp2+data[0]+data[1];
		general_register[6]=h2d(temp1);
		general_register[5]=h2d(temp2);
		return false
	}
	else
	{
		return true;
	}
}

bool shld(string temp)
{
	vector<string> parts;
	parts=seperator(temp);
	int length=parts[1].length();
	if(length==4)
	{
		int mem3=h2d(parts[1]);
		store[mem3]=general_register[6];
		store[mem3+1]=general_register[5];
		return false;
	}
	else
	{
		return true;
	}
}

bool stax(string temp)
{
	vector<string> parts;
	parts=seperator(temp);
	int a=regis(parts[1]);
	if(a==7)
	{
		return false;
	}
	if(a==1||a==3||a==5)
	{
		string temp;
		int mem3;
		temp=temp+d2h(general_register[a],2);
		temp=temp+d2h(general_register[a+1],2);
		mem3=h2d(temp);
		store[mem3]=general_register[0];
		return false;
	}
	else
	{
		return false;
	}
}
