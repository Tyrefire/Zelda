/*
 * =====================================================================================
 *
 *       Filename:  housePrice.c
 *       	Usage:  ./housePrice.c
 *    Description:  Ask user to specify the address and price
 *    				of two house that are on sale
 *    				It prints out which of the two houses is cheaper
 *
 *        Version:  1.0
 *        Created:  03/06/2014 04:03:12 PM
 *       Compiler:  gcc
 *         Author:  Dr. Hugo Valle (), -Team Zelda
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include "Zelda_hw10_task1.h" 
/* Main Program */
int main(int argc, char* argv[])
{
	printf("Enter info for first house\n");
	struct house firstHouse = InputHouse();
	printf("\nEnter info for second house\n");
	struct house secondHouse = InputHouse();

	PrintHouse("first house:", firstHouse);  
	printf("\n\n");
	PrintHouse("second house", secondHouse);
	printf("\n\n");

	int comparison = ComparePrices(firstHouse, secondHouse);
	switch(comparison)
	{
		case -1:
			printf("the first house is cheaper\n");
			break;

		case 0:
			printf("the two houses are equally expensive\n");
			break;

		case 1:
            printf("the second house is cheaper\n");
			break;

		default:
			printf("invalid comparison value %d, there must be a bug\n", comparison);
			break;
	}

	return 0;
}



