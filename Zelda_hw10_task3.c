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
FILE *FileRead(char *fileName);
void ReadChar(FILE *inFile, char data[][8]); // 3 headers, 8 char. string.
/* Main Program */
int main(int argc, char *argv[])
{
    char rec[3][8]; // 3 headers, 8 char string.
    FILE *txtfile;

	if(argc != 2)
	{
		Usage(argv);
	}
	if(strcmp(argv[1],  "--help") == 0)
	{
		printf("Calling Help Information\n");
		Usage(argv);
	}
    // open file
    txtfile = FileRead("mp3Header.txt");
    // read file at char level
    ReadChar(txtfile, &rec[0]);
    
    for( int i = 0; i < 3; i++)
    {
        printf("%s", rec[i]);
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

FILE *FileRead(char *fileName)
{
    FILE *txtfile = fopen(fileName, "r");
    if(txtfile == NULL)
    {
        printf("%s", "File NOT FOUND\n");
        exit(1);
    }
    return txtfile;
}
void ReadChar(FILE *inFile, char data[][8])
{
    char ch = fgetc(inFile);
    int rec = 0;
    int rec_pos = 0;

    while(ch != EOF)
    {
    // datascan
    data[rec][rec_pos] = ch;

        if(data[rec][rec_pos] == ',')
        {
            data[rec][rec_pos] = '\0';
            rec_pos = 0;

            rec++;
        }
        else
        {
            rec_pos++;
        }
        ch=fgetc(inFile);
    }
    data[rec][rec_pos] = '\0';


    return;
}
