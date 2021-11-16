#include "master.h"
#include "global.h"
#include "tools.h"


int main(int argc, char *argv[])
{
	initilize_map_opcode();												// MAP OPCODE INITILIZITATION
	if(argc==1) 														// IF NO ARGUMENT IS PASSED
	{
		bool termination_flag=false;
		termination_flag=input();
		if(!termination_flag)
		{
			index_pc=0;
			execution();
		}
		else
		{
			cout<<"*** ERROR: Invalid Input ***"<<endl;								// BREAK THE CODE as INVALID ENTRIY
		}
	}
	
	cout<<"\t*** THE END ***"<<endl;
	return 0;
}
