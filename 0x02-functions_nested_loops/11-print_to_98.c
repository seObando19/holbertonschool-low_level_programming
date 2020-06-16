#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98 - prints the numbers from n to 98  
 * @n: integer
 * Return: 0 succes
 */ 
void print_to_98(int n) 
{ 	
	while (n < 98) 	
	{ 		
		printf("%d, ", n);
		n++; 	
	} 	
	while (n > 98) 	
	{ 		
		printf("%d, ", n);
		n--; 	
	}	
	if (n == 98)
		printf("%d\n", n); 
}
