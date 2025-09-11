#include <unistd.h>
#include <stdio.h>

typedef char *string;/*is the way to add string to that library*/

int main(void){

string s = "Hello my friend";
printf("%p",s);

return 0;
	}
