#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int bal = 100; // initial balance variable
	int bet; // initial bet variable
	char opc; // variable for chosen option

	srand((unsigned int) time(NULL));

	printf("Welcome to out roullete game!\n"); //introduction
	printf("Balance:%d €\n", bal); //information on your current balance
	printf("Current bet:%d €\n", bet); //information on how much money you habe put on the line

	/*list of options of possible moves in this game*/
	printf("\nChoose one of the following options:\n"); 
	printf("b - Start betting\n");
	printf("n <number> - the number you wish to bet on, from 1 to 35.\n");
	printf("e - Bet on an even number.\n");
	printf("o - Bet on an odd number.\n");
	printf("r - Roll the roullete.\n");
	printf("h - Help.\n");
	printf("s - Show your current balance.\n");
	printf("c - Cashout and finish the game.\n");
	printf("!Start by betting your desired amount!\n");

	printf("\n Select an option:\n");
	scanf("%c", &opc); //read the option inserted

	while(1) {
/**/
		switch(opc) {

			case 'b':
				printf("How much money do you want to throw away? "); /
				scanf("%d", &bet); //to save the amount of money the player wants to bet

				break;
			case 'n':
				break;
			case 'e':
				break;
			case 'o':
				break;
			case 'r':
				break;
			case 'h':
				break;
			case 's':
				break;
			case 'c':
				break;
			default:
				printf("Something went wrong there, that is not an option.\n"); // error message for any input other than the listed options
				break;
		}
	}

return 0;
}