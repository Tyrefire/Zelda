/*
 * =====================================================================================
 *
 *       Filename:  Zelda_hw10_task1.h
 *
 *    Description:  header file for task1.c
 *
 *        Version:  1.0
 *        Created:  04/18/2017 02:54:45 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Orlando Salas (), orlandosalas@mail.weber.edu
 *   Organization:  
 *
 * =====================================================================================
 */

/* Definitions */
struct house
{
	double stNumber;
	char stName[30];
	double Price;

};

/* Function Prototypes */
// 1) Function for InputHouse
<<<<<<< HEAD
struct house InputHouse(void);
=======
struct house InputHouse(......);
	struct house Input
{
	printf("Enter the street number\n");
	scanf("%lf", &Input.stNumber);
	printf("Enter the street name\n");
	scanf("%s", &Input.stName);
	printf("Enter the price");
	scanf("%lf", &Input.Price);

	return Input;
}
>>>>>>> 3d89ffaf095474560e19f6099442b701bb9075b5
// 2) Function to PrintHouse info
void PrintHouse(char *name, struct house h);
// 3) FUnction to Compare Prices
int ComparePrices(..........);


