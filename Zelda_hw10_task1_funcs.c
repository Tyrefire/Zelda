/*
 * =====================================================================================
 *
 *       Filename:  Zelda_hw10_task1_funcs.c
 *       	Usage:  ./Zelda_hw10_task1_funcs.c
 *    Description:  function defs for task1
 *
 *        Version:  1.0
 *        Created:  04/18/2017 03:09:54 PM
 *       Compiler:  gcc -Wall -Werror
 *         Author:  Orlando Salas (), orlandosalas@mail.weber.edu
 * =====================================================================================
 */
#include <stdio.h>		/* For Standard I/O */
#include <stdlib.h>

/* Function Defenitions */
// 1) Function for InputHouse
struct house InputHouse(void)
{
	
	struct house Input[NUM];

	for( i = 0; i < NUM; i++)
	{
	printf("Enter the street number\n");
	scanf("%lf", &Input[NUM].stNumber);
	printf("Enter the street name\n");
	scanf("%s", &Input[NUM].stName);
	printf("Enter the price");
	scanf("%lf", &Input[NUM].Price);
	}

	return Input;
}
// 2) Function to PrintHouse info
void PrintHouse(char *name, struct house h)
{


	return;
}

// 3) FUnction to Compare Prices
int ComparePrices(void)
{

	return;
}



