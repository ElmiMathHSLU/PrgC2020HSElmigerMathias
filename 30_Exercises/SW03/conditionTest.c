#include <stdio.h>

int main(int argc, char* argv[])
{
	int x = 0, y = 0;
	
	printf("before: x %d, y %d\n", x, y);
	
	// case 1: y==
	x = y ? 1 : 100;
	printf("y=0: x %d, y %d\n", x, y);
	
	y = 200;
	x = y ? 1 : 100;
	printf("y = 200: x %d, y %d\n", x, y);
	
	y = -1;
	x = y ? 1 : 100;
	printf("y = -1: x %d, y %d\n", x, y);



return 0;
}
