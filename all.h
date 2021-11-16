#ifndef _all_h
#define _all_h

extern map<int,string> memory;											
extern bitset<5> flag;											
extern map<string, int> opcode;		
void program_counter(int);
string d2h(int,int);
int h2d(string);
string upper(string);
bool set(string);
int validate_opcode(string);
int validate_store(int);
int regis(string);
extern int general_register[7];
int regispair(int);
void flags(int);
void flags2(int);
vector<string> seperator(string);
void opcode_assign();		
extern int counter[500];
extern int index;
extern int lastindex;
int validate_memory(int);
bool validate_instruction(string);
void process();
bool starting();
extern map<int, int> storage;


#endif
