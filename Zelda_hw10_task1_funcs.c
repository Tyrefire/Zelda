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
#include "Zelda_hw10_task1.h" 

/* Function Defenitions */

struct house InputHouse(void)
{
	
    struct house Input;
    char c;
    char catch;
    int i = 0;
    /* cap st # */
	printf("Enter the street number: \n"); 
	scanf("%d", &Input.stNumber);
    scanf("%c", &catch); // catches enter key
    /* cap st name */
    printf("Enter the street name: \n");
    while(i < (20 - 1) && ( c = getchar() ) != '\n')
    {
        Input.stName[i] = c ;
        i++;
    }
    Input.stName[i] = '\0'; // finished your string
    // printf("You entered [%s]\n", Input.stName);
    /* cap price */
    printf("Enter the price: \n");
	scanf("%lf", &Input.Price);
    //printf("Price: [%lf]\n", Input.Price);

	return Input;
}

void PrintHouse(char *name, struct house h)
{
    printf("%s\n", name);
    printf("STREET #: [%d]\n", h.stNumber);
    printf("STREET NAME: [%s]\n", h.stName);
    printf("PRICE: [%.2lf]\n", h.Price);
   

	return;
}

// 3) FUnction to Compare Prices
//int ComparePrices(void)
//{

//	return;
//}



