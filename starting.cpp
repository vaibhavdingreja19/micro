#include "all.h"
#include "allheads.h"
#include "functions.h"

bool starting()
{
	bool flag;
	string inpmem,temp;
	int first_memory,next_memory;
	cout<<"Enter First Memory Address Where You Want to Start The 8085 Code ";
	cin>>inpmem;
	first_memory=h2d(inpmem);
	if(first_memory==-1)
	{
		cout<<"Invalid Memory"<<endl;
		flag=true;
	}								
	else
	{
		first_memory=h2d(inpmem);
		next_memory=first_memory;
		cout<<"Enter 8085 code"<<endl;
		cin.ignore();
	}
	while(!flag)
	{
		cout<<d2h(memory_address,4)<<" -- ";
		getline(cin,temp);
		temp=upper(temp);
		r=program_counter(next_memory);
		memory[next_memory]=temp;
		vector<string> parts;
		string temporary(temp);
		parts = seperator(temporary);										
		int size=validate_opcode(parts[0]); 								
		if(size==-1)
		{
			cout<<"INVALID OPCODE"<<endl;						
			flag=true;
			break;
		}
		else if(size==-2) 											
		{
			break;
		}
		else
		{
			next_memory += size;
		}
		temp="";
	}
	return flag;
}
