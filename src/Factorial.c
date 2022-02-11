#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[]){
	unsigned long long result = 1;
	
	for(int i=1; i <= atoi(argv[argc-1]); ++i){
		result *= i;
	}

	printf("%d", result);
    return 0;
}
