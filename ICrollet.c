#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int bal = 100; // initial balance variable
	int bet; // initial bet variable
	int curbal; // ballence after the player has placed a bet
	int defeat = 0; // variable so you can exit the game
	int num;
	int numcasino;
	char opc; // variable for chosen option
	char*s;
	

	srand((unsigned int) time(NULL));

	printf("Welcome to out roullete game!\n"); //introduction
	printf("Balance:%d \n", bal); //information on your current balance
	printf("Current bet:%d \n", bet); //information on how much money you habe put on the line
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
	

	while(defeat == 0) {
	opc = getchar(); //read the option inserted

		switch(opc) {

			case 'b':
				printf("How much money do you want to throw away? "); 
				scanf("%d", &bet); //to save the amount of money the player wants to bet
				sscanf("%s",s);
				if(bet <= 0) { // if the player tries to play without using money
					printf("You can't play the game like this, use some money next time, use b to try again.\n");
				} 
				else if(bet > bal) { // if the player bets more than what he has
					printf("Woah there buckaroo, stop playing around and bet some actual money, try again with b\n");

				} 
				else if(bet <= bal) { //
					printf("you have selected %d to use on this round\n", bet);
					curbal = bal - bet;
					printf(", your current balance is %d\n To continue select another option\n", curbal);

				}

				/*n = getchar();
				switch(n) {
					case 'n':    ///////wudduheck
						function();
						break;
				}*/
				
				break; //help
			case 'n':
				int numcasino = rand()%36; //random number generator for all numbers between 0 and 35

				printf("Alright, Feelin lucky i see, which number do you wish to bet? Choises between 1/35...\n");
				scanf("%d", &num);


				if(bet <= 0) { // in case the player starts witth n before b
					printf("You can't play the game like this, use some money next time, use b to try again.\n"); //error message
				} 
				else if(num == numcasino) {
					curbal = bet * 35;
					printf("%d\n", numcasino);
					printf("Congratulations, you won! lucky you, you got 35 times the money you bet.\n");
					printf("to check your ballance press s\n");

				}


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
