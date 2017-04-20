/*
 * =====================================================================================
 *
 *       Filename:  Zelda_hw10_task2.c
 *       	Usage:  ./Zelda_hw10_task2.c
 *    Description:  Tsunami Analysis
 *
 *        Version:  1.0
 *        Created:  04/18/2017 02:39:16 PM
 *       Compiler:  gcc -Wall -Werror
 *         Author:  Tyler Madsen (), tylermadsen@mail.weber.edu
 * =====================================================================================
 */
#include <stdio.h>		/* For Standard I/O */
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <string.h>

#define MAX 15

struct Tsunami
{
	int m, d, y, fat;
	double max_height;
	char location[20];
};

/* Local Libraries */


/* Function Prototypes */
void Usage(char**info);

/* Main Program */
int main(int argc, char *argv[])
{
	FILE *inFile;
	int i = 0;
	float max = 0.0;
	double avg = 0.0;
	struct Tsunami Tsu[MAX];

	if(argc != 2)
	{
		Usage(argv);
	}
	if(strcmp(argv[1], "--help") == 0)
	{
		printf("Calling Help information\n");
		Usage(argv);
	}

	inFile = fopen(argv[1], "r");
	if(inFile == NULL)
	{
		printf("Generic Error Message\nNo file to read!\n");
		Usage(argv);
		exit(2);
	}
	printf("File Successfully Opened\n");
	printf("M   D   Y     Fat   Height\tLocation\n");
	while(fscanf(inFile, "%d %d %d %d %lf %s", &Tsu[i].m, &Tsu[i].d, &Tsu[i].y, &Tsu[i].fat, &Tsu[i].max_height, Tsu[i].location) != EOF)
	{
		if(Tsu[i].max_height > max)
		{
			max = Tsu[i].max_height;
		}
		avg += Tsu[i].max_height;
		printf("%-3d %-3d %-5d %-5d %-4.2lf\t%s\n", Tsu[i].m, Tsu[i].d, Tsu[i].y, Tsu[i].fat, Tsu[i].max_height, Tsu[i].location);
		i++;
	};

	max *= 3.28;
	avg *= 3.28;
	avg /= 10;

	printf("Summary of Tsunami Information\n");
	printf("Maximum Wave Height (ft.): %.2f\n", max);

	printf("\nAverage Wave Height (ft.): %.2f\n\n", avg);
	printf("Tsunamis with greater than average heights:\n");

	for(int i = 0; i < 10; i++)
	{
		if((3.28 * Tsu[i].max_height) > avg)
		{
			printf("%s\n", Tsu[i].location);
		}
	}

	return 0;
}


/* Function Definitions */
void Usage(char**info)
{
	printf("Parameters\n");
	printf("./Task2 <input file>\n");
	exit(1);

	return;
}


