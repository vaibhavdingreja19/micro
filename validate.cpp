#include "master.h"
#include "global.h"
#include "tools.h"
#include "arithmetic.h"
#include "branching.h"
#include "logical.h"
#include "load.h"

map<int,string> memory;	

int validate_memory(int key)
{
	if (memory.find(key) == memory.end())
		return -1;
	else
		return key;
}


bool validate_function(string instruction)
{
    vector<string> parts;
    parts=seperator(instruction);
    if(parts[0]=="MOV")
    {
        return mov(instruction);
    }
    else if(parts[0]=="MVI")
    {
		return mvi(instruction);
    }
    else if(parts[0]=="LXI")
    {
        return lxi(instruction);
    }
    else if(parts[0]=="LDA")
    {
        return lda(instruction);
    }
    else if(parts[0]=="STA")
    {
        return sta(instruction);
    }
    else if(parts[0]=="SHLD")
    {
        return shld(instruction);
    }
    else if(parts[0]=="LHLD")
    {
        return lhld(instruction);
    }
    else if(parts[0]=="STAX")
    {
        return stax(instruction);
    }
    else if(parts[0]=="XCHG")
    {
        return xchg(instruction);
    }
    else if(parts[0]=="ADD")
    {
        return add(instruction);
    }
    else if(parts[0]=="ADI")
    {
        return adi(instruction);
    }
    else if(parts[0]=="SUB")
    {
        return sub(instruction);
    }
    else if(parts[0]=="INR")
    {
        return inr(instruction);
    }
    else if(parts[0]=="DCR")
    {
        return dcr(instruction);
    }
    else if(parts[0]=="INX")
    {
        return inx(instruction);
    }
    else if(parts[0]=="DCX")
    {
        return dcx(instruction);
    }
    else if(parts[0]=="DAD")
    {
        return dad(instruction);
    }
    else if(parts[0]=="SUI")
    {
        return sui(instruction);
    }
    else if(parts[0]=="CMA")
    {
        return cma(instruction);
    }
    else if(parts[0]=="CMP")
    {
        return cmp(instruction);
    }
    else if(parts[0]=="JMP")
    {
        return jmp(instruction);
    }
    else if(parts[0]=="JC")
    {
        return jc(instruction);
    }
    else if(parts[0]=="JNZ")
    {
        return jnz(instruction);
    }
    else if(parts[0]=="JZ")
    {
        return jz(instruction);
    }
    else if(parts[0]=="JNC")
    {
        return jnc(instruction);
    }
    else if(parts[0]=="HLT")
    {
		return false;
	}
	else if(parts[0]=="SET")
		return set1(instruction);
	else 
		return true;
}


int validate_opcode(string key)
{
	if (opcode.find(key) == opcode.end())
		return -1;
	else
		return opcode[key];
}


map<int,int> store;

int validate_store(int key)			//		30.7.17
{
	if (store.find(key) == store.end())
		return -1;
	else
		return store[key];
}
