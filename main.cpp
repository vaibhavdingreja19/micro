#include "all.h"
#include "allheads.h"
#include "arithmetic.h"
#include "jumping.h"
#include "comparing.h"
#include "move.h"
int main()
{
	int r=0;
	opcode_assign();											
	
		bool flag1=false;
		flag1=starting();
		if(flag1!=false)
		{
			process();
		}
		else
		{
			cout<<"ERROR"<<endl;								
		}
}
