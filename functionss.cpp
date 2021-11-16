#include "allheads.h"
#include "all.h"

int regis(string temp)				//this is for general purpose registers ...it will return 0 for A and so on..
{							 
	 if(temp=="A")
		return 0;
	else if(temp=="B")
		return 1;
	else if(temp=="C")
		return 2;
	else if(temp=="D")
		return 3;
	else if(temp=="E")
		return 4;
	else if(temp=="H")
		return 5;
	else if(temp=="L")
		return 6;
	else if(temp=='M')
		return 7;
	else
		return -1;
}

int counter[500];
int index=0;
int lastindex=0;

int program_counter(int temp_memory)				//this is to increase counter and set the lastindex to the last line of our code
{

	counter[index++]=temp_memory;							
	if(index>lastindex)
		lastindex=index;
return lastindex;

}

vector<string> seperator(string temp)				//this function basically seperates the whole input so we can deal with opcode registers and memory
{
	vector<string> part; 
	string var;
	string res(temp);
	char *str = (char *)res.c_str();
	char *com;
	com = strtok(str, " ,");
	while(com!=NULL)
	{
		var=com;
		part.push_back(var);
		com= strtok(NULL," ,");
	}
	return v;
}

	string upper(string temp)				//to convert lower case opcode to upper case opcode
	{
		int len=temp.length();
		string a="";
		char c;
		int i;
		for(i=0;i<len;i++)
		{
			c=toupper(temp[i]);
			a=a+c;
		}
		return a;
	}

	bitset<5> flag;			//this is to set the flags for 8 bit data;

void flags(int res)
{
		int i=0,c=0,r=0;				//to set carry flag
		if(res>255)
		{
			flag[0]=1;
		}
		else
		{
			flag[0]=0;
		}
		bitset<8>result(res);
		c=0;
		for(i=0;i<8;i++)
		{
			if(result[i]==1)
			{
			c++;
			}
		}
		if(c%2==0)
		{
			flag[1]=1;
		}
		else
		{
			flag[1]=0;
		}
		if(res>0)
		{
			flag[4]=1;
		}
		else
		{
			flag[4]=0;
		}	
		for(i=0;i<8;i++)
		{
			if(result[i]==0)
			{
			r++;
			}
		}
		if(r==8)
		{
			flag[3]=1;
		}
		else
		{
			flag[3]=0;
		}
		if(result[3]%10+result[4]%10>15)
		{
			flag[2]=1
		}
		else
		{
			flag[2]=0;
		}
}


