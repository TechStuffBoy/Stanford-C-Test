

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *strPtr;
char *portion;
char string[] = "Hello,world";
int main(void)
{

	printf("address of strPtr=%p,%p\n", strPtr, &strPtr);
	strPtr = strdup(string);
	printf("Address of StrPtr=%p, string=%p\n",strPtr, string);
	printf("%p,strPtr=%s: %p,string=%s\n",strPtr,strPtr,string,string);
//	portion = strndup(strPtr,4);
//	printf("portion=%s\n",portion);
	return 0;
}


