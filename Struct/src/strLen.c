/*
 * strLen.c
 *
 *  Created on: 13-Aug-2018
 *      Author: CPSG-WB-4
 */


#include <stdio.h>
#include<string.h>
void print(char temp[]);

char name[100];
int main(void)
{
	int i;
	for(i=0;i<6;i++) {
		name[i]= 48+i;
	}
	name[i] = '\0';

	print(name);
	printf("%s\n",name);
	printf("Length=%d\n",strlen(name));
	return 0;
}

void print(char temp[])
{
	int i;
	printf("Inside print :\t");
	for(i=0;i<strlen(temp);i++) {
		printf("%c",name[i]);
	}
	printf("\n");
}
