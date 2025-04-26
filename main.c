#include<stdio.h>
#include<stdlib.h>	
#include<ctype.h>
#include<string.h>
#include<math.h>

int main()
{
	char grade = 'F';

	switch (grade) {
	case 'A': printf("Sweet! \n");
		break;
	case 'B': printf("Could have tried harder \n");
		break;
	case 'C': printf("I C you didnt study \n");
		break;
	case 'D': printf("That's embarrasing you ok? \n");
		break;
	case 'F':
		printf("Ouch, You ok? \n");
	default: printf("That doesnt een make sense! \n");

	}

	return 0;

}