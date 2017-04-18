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
	char stName;
	double Price;

};

/* Function Prototypes */
// 1) Function for InputHouse
struct house InputHouse(......);
// 2) Function to PrintHouse info
void PrintHouse(char *name, struct house h);
// 3) FUnction to Compare Prices
int ComparePrices(..........);

