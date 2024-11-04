#include <stdio.h>
#include "perror_lab.h"

int main(int argc, char *argv[]){
	FILE *f;

	if(argc < 2){
		printf("Usage: errno_show file_name\n");
		exit(1);
	}

	if( (f=fopen(argv[1], "r")) == NULL){
		perror_lab(NULL);
		exit(1);
	}

	printf("Open a file \"%s\". \n", argv[1]);

	return 0;
}