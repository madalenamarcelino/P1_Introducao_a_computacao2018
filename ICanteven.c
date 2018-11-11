#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int bal = 100;	 // initial balance variable
	int bet; 		 // initial bet variable
	int curbal; 	 // ballence after the player has placed a bet
	int defeat = 0;  // variable so you can exit the game
	int num;		 // number the player bets on
	int numcasino;	 // number the house rolls
	char opc; 		 // variable for chosen option
	char*s;			 // ??????????????????
	

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
					printf("You have selected %d to use on this round\n", bet);
					curbal = bal - bet;
					printf("Your current balance is %d \n To continue select another option\n", curbal);

				}

				opc = getchar(); // changing cases
				
				break; 
			case 'n':
				printf("Alright, Feelin lucky i see, which number do you wish to bet? Pick between 1-35\n");
				scanf("%d", &num);

				int numcasino = rand()%36;   //random number generator for all numbers between 0 and 35


				if(bet <= 0) { // in case the player starts witth n before b
					printf("You can't play the game like this, use some money next time, use b to try again.\n"); //error message
				} 
				else if(num == numcasino) { //if you get the number right, i'm not even sure if this is possible at the moment
					curbal = curbal + bet * 35;
					printf("%d\n", numcasino);
					printf("Congratulations, you won! lucky you, you got 35 times the money you bet.\n");
					printf("to check your ballance press s\n");

				}
				else if (num != numcasino) { //if you do not get the number
					printf("Sucks to be you, ye' didn't get it mate, and yer' %d buck poorer\n", bet);
					bal = curbal;
				}

				

				break;
			case 'e':
				if(bet <= 0) {
					printf("You can't play the game like this, use some money next time, use b to try again.\n"); //error message

				}

				break;
			case 'o':
				if(bet <= 0) {
					printf("You can't play the game like this, use some money next time, use b to try again.\n"); //error message

				}

				break;
			case 'r':
				if(bet <= 0) {
					printf("You can't play the game like this, use some money next time, use b to try again.\n"); //error message

				}
				
				break;
			case 'h':
			//basically what was already said
			//i was thinking of making this like more complex, like people can pick what they need help with

				printf("b - Start betting\n");
				printf("n <number> - the number you wish to bet on, from 1 to 35.\n");
				printf("e - Bet on an even number.\n");
				printf("o - Bet on an odd number.\n");
				printf("r - Roll the roullete.\n");
				printf("h - Help.\n");
				printf("s - Show your current balance.\n");
				printf("c - Cashout and finish the game.\n");

				break;
			case 's':
				printf("your current balance is %d\n", curbal); //to see you current balance
				break;
			case 'c':
				break;
		
		}
	} 

return 0;
}
