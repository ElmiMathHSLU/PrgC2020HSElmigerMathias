#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char* argv[])
{
 float value1 = 0, value2 = 0, absValue = 0;
 
 	if(argc != 3)
 	{
 		printf("usage: numstat val1 val2\n");
	}
	else 
	{
		value1 = atof(argv[1]);
 		value2 = atof(argv[2]);
 	
 		printf("Value1 %lf, Value2 %lf\n", value1, value2);
 		
 		if( value1 > value2)
 		{
 			printf("a. ascending order: %.3lf,  %.3lf\n", value2, value1);
 		}
 		else
 			printf("a. ascending order: %.3lf,  %.3lf\n", value1, value2);
 		
 		printf("b. sum: %.3lf\n", value1 + value2);
 		
 		absValue = fabs(value1-value2);
 		
 		printf("c. absolute Difference: %.3lf\n", absValue);
 		
 		printf("d. product: %.3lf\n", value1*value2);
 		
 		printf("e. ratio: %.3lf\n", value2/value1);
 		

	}



return 0;
}
