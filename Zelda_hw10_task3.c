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
void FileRead(char *fileName, char num[]);
// void ReadChar(FILE *inFile, char data[][8]); // 3 headers, 8 char. string

/* Main Program */
int main(int argc, char *argv[])
{
	//char rec[3][8]; // 3 headers, 8 char string.
	//FILE *txtfile;
	char num[8];

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
	FileRead(argv[1], num);
	// read file at char level
	// //ReadChar(txtfile, &rec[0]);


	/*
	for( int i = 0; i < 3; i++)
	{
		printf("%s", rec[i]);
	}
	*/


	return 0;
}


/* Function Definitions */
void Usage(char**info)
{
	printf("\nParameters\n");
	printf("./Task3 <filename.txt>\n");
	printf("filename should be: [mp3Header.txt]\n");
	exit(1);

	return;
}

void FileRead(char *fileName, char num[])
{
	FILE *in;
	int count = 1;

	in = fopen(fileName, "r");
	if(fileName == NULL)
	{
		printf("File NOT FOUND\n");
		exit(1);
	}

	printf("File Successfully opened\n");

	while(fscanf(in, "%c", &num[count]) != EOF)
	{
		printf("Scanning %s\n" (*num[count]));
		count++;
	}

	/*  int rec = 0;
	int pos = 0;

	char ch = fgetc(in);
	while(ch != EOF)
	{
		num[rec][pos] = ch;
		if(num[rec][pos] == ',')
		{
			num[rec][pos] = '\0';
			pos = 0;
			rec++;
		}
		else
		{
			pos++;
		}
		ch = fgetc(in);
	}

	num[rec][pos] = '\0';
	*/

    return;
}

/*  void ReadChar(FILE *inFile, char data[][8])
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

*/
