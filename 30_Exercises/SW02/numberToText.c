#include <stdio.h>

int main(void)

{
	int inputValue = 0;
	
	while(inputValue !=10){
	printf("Enter a number between(including) 0 and 9 to Display the number as text. Enter 10 to 	stop the programm:");
	scanf("%d", &inputValue);
		if( inputValue < 0 || inputValue >10 ){
		printf("invalid -> try again\n");
		}
		else if( inputValue ==10 ){
		printf("Thank you. Good bye\n");
		}
		else{
			switch(inputValue){
				case 0:
					printf("%d as text is 'zero'\n", inputValue);
					break;
				
				case 1:
					printf("%d as text is 'one'\n", inputValue);
					break;
				
				case 2:
					printf("%d as text is 'two'\n", inputValue);
					break;
	
				case 3:
					printf("%d as text is 'three'\n", inputValue);
					break;
	
				case 4:
					printf("%d as text is 'four'\n", inputValue);
					break;
	
				case 5:
					printf("%d as text is 'five'\n", inputValue);
					break;

				case 6:
					printf("%d as text is 'six'\n", inputValue);
					break;
					
				case 7:
					printf("%d as text is 'seven'\n", inputValue);
					break;
					
				case 8:
					printf("%d as text is 'eight'\n", inputValue);
					break;
					
				case 9:
					printf("%d as text is 'nine'\n", inputValue);
					break;
					}
			}
				}
return 0;
}
