#include <stdio.h>

/*
 *  Full names of data types
 *  ---------------------------------------------
 *  Full name		commonly used keyword
 *  ---------------------------------------------
 *  char		signed char
 *  short		signed short int
 *  int			signed int
 *  long		signed long int
 *  long long		signed long long int
 *  unsigned char	unsigned char
 *  unsigned short	unsigned short int
 *  unsigned int	unsigned int
 *  unsigned long	unsigned long int
 *  unsigned long long	unsigned long long int
 *
 *
 *  Variable Declarations
 *  --------------------------------------------
 *  typename varname;
 *
 *
 *  Constants
 *  --------------------------------------------
 *  Like a variable, a constant is a data storage location used by your program.
 *  Unlike a variable, the value stored in a constant can't be changed during program execution.
 *  C has two types of constants, each with its own specific uses:
 *  - Literal Constants
 *  - Symbolic Constants
 *
 *  Literal Constants
 *  --------------------------------------------
 *  A literal constant is a value that is typed directly into the source code wherever it is needed.
 *  *** Examples below ***
 *
 */


int main()
{
	/* variable Declarations */
	int count, number, star;	/* three integer vartiables */
	float percent, total;		/* two float variables */

	/* Initializing Variables */
	count = 0; /* Store 0 in count */

	/* You can also initalize a variable when it's declared */
	int newcount = 1; /* Store 1 in newcount */

	/* Literal Constants */
	const int sample = 20;
	const float tax_rate = 0.28;

		
}
