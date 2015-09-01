#include <stdio.h>
#include <string.h>
void main(void)
{
	char str[20];
	int length;
	while(1)
	{
		printf("please enter data type:");
		scanf("%s",str);
		switch(str[0])
		{
			case 'i':if(str[1]!='n'||str[2]!='t')
				 {
					printf("entered a wrong type,please enter again.\n");
					continue;
				 }
				length=sizeof(int);
				break;
			case 'c':if(str[1]!='h'||str[2]!='a'||str[3]!='r')
				 {
					printf("entered a wrong type,please enter again.\n");
					continue;
				 }
				length=sizeof(char);
				 break;
			case 'f': length=sizeof(float);
			 	break;
			case 'd':length=sizeof(double);
				 break;
			case 's':length=sizeof(short int);
				 break;
			case 'l':length=sizeof(long int);
				 break;
			default:break; 
		}
		
		printf("the size of %s is %d\n",str,length);
		if(str[0]=='0')
			break;
	}
}
