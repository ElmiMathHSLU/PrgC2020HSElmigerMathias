#include <stdio.h>

int main(int argc, char* argv[])
{
	int limitValue = 200;
	int maxLoopExecutions = 100;
	int counter = 0;
	while( counter < limitValue ){
		counter++;
		printf("# of while loops: %d\n", counter);
	if( counter > maxLoopExecutions )
	 {
	 	break;
	 }
}

return 0;
}
