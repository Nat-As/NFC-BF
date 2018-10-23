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
			
			printf("%012x\n",i);//hex len 12

			i++;
			fflush(stdout); //pin progress
			printf("\bKeys remaining: %ld", 281474976710655/i); //progress
			printf("\e[?25l"); //hide cursor
			fputs("\033[A\033[1K",stdout);//go up a line and clear
		}
	}
	return 0;
}
