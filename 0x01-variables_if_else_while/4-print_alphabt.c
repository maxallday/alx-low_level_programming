#include<stdio.h>
/*a-z skip q & e
 */
int main(void) 
{ 
	char c ='a';
	while(c < 'z')
	{
		if(c!='q' && c != 'e')
		{
			putchar(c);
		}
		c++;
	}
	putchar('\n');
	return(0);
}


