#include "all.h"
#include "allheads.h"
int h2d(string a)
{
	int len=strlen(a);
	int base=1,dec=0;
		for (int i=len-1;i>=0;i--)
		{
			if(a[i]>='0' && a[i]<='9')
			{	
				dec = dec+((a[i]-48)*base);
				base=base*16;
			}
			else if((a[i]>='A' && a[i]<='F')||(a[i]>='a' && a[i]<='f'))
			{
				dec+=(a[i]-55)*base;	
				base=base*16;
			}
		}
	return dec;
}
string d2h(int a,int n)
{
	string str=" ";
	int i=0;
	if(a==0 && n==2)
		str="00";
	else if(a==0 && n==4)
		str="0000";
else
{

	while(a!=0)
	{
		int temp=0;
		temp=a%16;
		if(temp<10)
		{
			str[i]=temp+48;
			i++;
		}
		else if(temp>='10'&&temp<='15')			
		{
			str[i]=temp+55;
			i++;
		}
	a=a/16;
	}
}
		int i=str.length();
		for(int j=0;j<i/2;j++)
		{
			char temp1=str[j];
			str[j]=str[i-j-1];
			str[i-j-1]=temp1;
}
		if(size == 2)
		{
			if( i == 2 )
				return str;
			else
			{
				str="0"+str;
            }
		}
		else if( size == 4 )
		{
			if( i == 4 )
				return str;
			else if(i == 3 )
			{
				str="0"+str;
			}
			else if(i == 2 )
			{
				str="00"+str;
			}
			else if(i == 1)
			{
				str="000"+str;
			}
		}
	}
	return str;
}
