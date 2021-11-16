#include "all.h"
#include "allheads.h"
#include "functions.h"
#include "arithmetic.h"
#include "jumping.h"
#include "comparing.h"
#include "move.h"

int validate_opcode(string key)
{
	if (opcode.find(key) == opcode.end())
		return -1;
	else
		return opcode[key];
}

bool validate_instruction(string code)
{
    vector<string> parts;
    parts=splitter(code);
    if(parts[0]=="SET")
     {
	return set(code);
     }
    else if(parts[0]=="MOV")
    {
        return mov(code);
    }
    else if(parts[0]=="MVI")
    {
	return mvi(code);
    }
    else if(parts[0]=="LXI")
    {
        return lxi(code);
    }
    else if(parts[0]=="LDA")
    {
        return lda(code);
    }
    else if(parts[0]=="STA")
    {
        return sta(code);
    }
    else if(parts[0]=="SHLD")
    {
        return shld(code);
    }
    else if(parts[0]=="LHLD")
    {
        return lhld(code);
    }
    else if(parts[0]=="STAX")
    {
        return stax(code);
    }
    else if(parts[0]=="XCHG")
    {
        return xchg(code);
    }
    else if(parts[0]=="ADD")
    {
        return add(code);
    }
    else if(parts[0]=="ADI")
    {
        return adi(code);
    }
    else if(parts[0]=="SUB")
    {
        return sub(code);
    }
    else if(parts[0]=="INR")
    {
        return inr(code);
    }
    else if(parts[0]=="DCR")
    {
        return dcr(code);
    }
    else if(parts[0]=="INX")
    {
        return inx(code);
    }
    else if(parts[0]=="DCX")
    {
        return dcx(code);
    }
    else if(parts[0]=="DAD")
    {
        return dad(code);
    }
    else if(parts[0]=="SUI")
    {
        return sui(code);
    }
    else if(parts[0]=="CMA")
    {
        return cma(code);
    }
    else if(parts[0]=="CMP")
    {
        return cmp(code);
    }
    else if(parts[0]=="JMP")
    {
        return jmp(code);
    }
    else if(parts[0]=="JC")
    {
        return jc(code);
    }
    else if(parts[0]=="JNZ")
    {
        return jnz(code);
    }
    else if(parts[0]=="JZ")
    {
        return jz(code);
    }
    else if(parts[0]=="JNC")
    {
        return jnc(code);
    }
    else if(parts[0]=="HLT")
    {
		return false;
	}
	else 
		return true;
}

map<int,string> memory;		

int validate_memory(int key)
{
	if (memory.find(key) == memory.end())
		return -1;
	else
		return key;
}

map<int,int> storage;
int validate_store(int key)
{
	if(storage.find(key)==storage.end(key))
	return -1;
	else
	return store[key];
}
