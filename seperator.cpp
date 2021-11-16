#include "master.h"
#include "global.h"

vector<string> seperator(string temp)									
{
	vector<string> parts;
	string temp2;
	string temp1(temp);
	const char *comma = " ,";
	char *str = (char *)temp1.c_str();;
	char *token;
	token = strtok(str,comma);
	while(token!=NULL){
		temp2 = token;
		parts.push_back(temp2);
		token = strtok(NULL,comma);
	}
	return parts;
}
