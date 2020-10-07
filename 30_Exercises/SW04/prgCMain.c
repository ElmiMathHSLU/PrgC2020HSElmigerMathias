#include <stdio.h>
#include <stdlib.h>

typedef enum {
	MAINMENU= 1,
	NUMSTAT,
	CUBIC,
	FACTORIAL,
	NCHOOSEK,
	PRINTBINARY,
	EXIT = 99
} MenuItem;

MenuItem PrintMainMenu( void );
long NchooseK( long inputn, long inputk);
long Factorial ( long n );
void PrintBinary( void );

int main(int argc, char* argv[])
{

	MenuItem menuSelected = MAINMENU;
	int run = 1;
	long inputn = 0;
	long inputk = 0;
	
	while(run) {

		switch (menuSelected)
		{
			case MAINMENU:
				menuSelected = PrintMainMenu();
				break;
		
			case NUMSTAT:
				printf("execution NumStat\n");
				menuSelected = MAINMENU;
		
				break;
		
			case CUBIC:
				printf("execution Cubic\n");
				menuSelected = MAINMENU;
				break;
		
			case FACTORIAL:
				printf("execution Factorial\n");
				menuSelected = MAINMENU;
				break;

			case EXIT:
				run = 0;
				break;
		
			case NCHOOSEK:
				printf("Input n:");
				scanf("%ld", &inputn);
				printf("Input k:");
				scanf("%ld", &inputk);
				printf("the binomial coefficient of n=%ld and k=%ld is %ld\n\n", inputn, inputk, NchooseK(inputn, inputk));
				menuSelected = MAINMENU;
				break;
			case PRINTBINARY:
				PrintBinary();
				menuSelected = MAINMENU;
				break;
			default:
				printf("invalid menu selection\n");
				menuSelected = PrintMainMenu();
				break;
		}
	}

return 0;
}



MenuItem PrintMainMenu ( void )
{
	MenuItem selection = MAINMENU;
	printf("\n***********************************\n");
	printf("Main Menu\n");
	printf("***********************************\n\n");
	printf("Select from the following options:\n");
	printf("%d - NumStat\n", NUMSTAT);
	printf("%d - Cubic\n", CUBIC);
	printf("%d - Factorial\n", FACTORIAL);
	printf("%d - Nchoosek\n", NCHOOSEK);
	printf("%d - PrintBinary\n", PRINTBINARY);
	printf("%d - Exit\n", EXIT);
	printf("--> ");
	scanf("%d", (int*)&selection);
	return selection;
}



long NchooseK ( long n, long k)
{
	long result = 0;
	result = Factorial(n)/(Factorial(k)*Factorial(n-k));
	return result;	
}


long Factorial ( long n ) 
{
	long result = 0;
	
	if( n >= 1)
	{
	result = n*Factorial(n-1);
	}
	else
	{
		result = 1;
	}
	return result;
}

void PrintBinary( void )
{
	int decNum;
	int binaryNum[32];
	int i = 0;
	
	printf("Enter the number to convert: ");
	scanf("%d", &decNum);
	
	for ( i=0; decNum > 0; i++ )
	{
	binaryNum[i] = decNum % 2;
	decNum = decNum / 2;
	}
	printf("\nBinary of given Number is=");
	
	for(i=i-1; i>=0; i--)
	{
	printf("%d", binaryNum[i]);
	}
}
	


