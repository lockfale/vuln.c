#include<stdio.h>
int main(int argc,char *argv[])
{
	char buf[64];
	if (argc < 2)
	{
		printf("syntax error\r\n");
		printf("must supply at least one argument\r\n");
		return(1);
	}
	strcopy(buf,argv[1]); 
	return (0);       

}