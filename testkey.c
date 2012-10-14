//Works!
#include <stdio.h>
#include "aes.h"

int main(int argc, char *argv[])
{
	byte input[16] = {00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00};

	byte output[176];

	keyExpansion(input, output);

	int i;
	for(i=0;i<176;i++){
		printf(" %02x ", output[i]);

		if((i + 1) % 16 == 0 && i != 0){
			printf("\n");
		}
	}

	return 0;
}
