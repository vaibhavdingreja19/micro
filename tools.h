#ifndef _tools_h
#define _tools_h

void program_counter_increment(int);
string dec2hex(int,int);
int hex2dec(string);
string upper(string);
void set_flag_register(int);
vector<string> seperator(string);
void initilize_map_opcode();
int validate_opcode(string);
int validate_memory(int);
int resister_is(string);
int validate_store(int);
int rpair(int);
bool set1(string);
bool validate_function(string);
bool does_file_exist(const char*);
void execution();
bool input_file(char*);
bool input();

#endif
