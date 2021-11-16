#include "allheads.h"
#include "all.h"
#include "functions.h"
#include "arithmetic.h"
#include "jumping.h"
#include "comparing.h"
#include "mov.h"
void process()
{
	 index=0;
     while(index<lastindex)
     {
           string fill;
	   fill=memory[counter[index]];	
           bool check;
	   check=validate_instruction(function1);
	   if(check)
           {
                   cout<<"ERROR ";
                   break;
           }
           if(index>r)
	   {
		    cout<<"Invalid memory location"<<endl;
	   }
           index=index+1;
      }
      
			cout<<"A"<<d2h(general_register[0],2)<<endl;
			cout<<"B"<<d2h(general_register[0],2)<<endl;
			cout<<"C"<<d2h(general_register[0],2)<<endl;
			cout<<"D"<<d2h(general_register[0],2)<<endl;
			cout<<"E"<<d2h(general_register[0],2)<<endl;
			cout<<"H"<<d2h(general_register[0],2)<<endl;
			cout<<"L"<<d2h(general_register[0],2)<<endl;
	   
}

