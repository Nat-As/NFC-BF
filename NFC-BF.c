/*
 * NFC Key Brute Forcer
 * By: James Andrews aka th3gingerbreadman
 * jandrews7348@floridapoly.edu
 * 
 * NFC BF prints to stdout currently
*/

#include <stdio.h>

int main(int argc, char **argv)
{
	printf("NFC Brute Forcer\n");
	
	for(;;){
		for(int i=1;i<281474976710655;i++){//from 0 to ffffffffffff
			printf("0x%014x\n",i);//hex
			i++;
		}
	}
	return 0;
}
