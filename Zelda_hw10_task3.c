/*
 * =====================================================================================
 *
 *       Filename:  Zelda_hw10_taskk.c
 *       	Usage:  ./Zelda_hw10_taskk.c
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/23/2017 11:43:00 AM
 *       Compiler:  gcc -Wall -Werror
 *         Author:  Andrew Little (), andrewlittle@mail.weber.edu
 * =====================================================================================
 */
#include <stdio.h>		/* For Standard I/O */
#include <stdlib.h>
#include <string.h>

/* Function Prototypes */
void Usage(char**info);
void FileRead(char *fileName);
void ReadChar(FILE *inFile, char data[][8]); // 3 headers, 8 char. string.
/* Main Program */
int main(int argc, char *argv[])
{


	if(argc != 2)
	{
		Usage(argv);
	}
	if(strcmp(argv[1],  "--help") == 0)
	{
		printf("Calling Help Information\n");
		Usage(argv);
	}
	return 0;
}


/* Function Defenitions */
void Usage(char**info)
{
	printf("\nParameters\n");
	printf("./Task3 <filename.txt>\n");
	printf("filename should be: [mp3Header.txt]\n");
	exit(1);

	return;
}

void FileRead(char *fileName)
{
    FILE *txtfile = fopen(fileName, "r");
    if(txtfile == NULL)
    {
        printf("%s", "File NOT FOUND\n");
        exit(1);
    }
    return;
}
void ReadChar(FILE *inFile, char data[][8])
{

    return;
}
