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
	int ec;			 // chance of getting an even number
	int oc;			 // chance of getting an odd number
	

	srand((unsigned int) time(NULL));

	printf("Welcome to our roullete game!\n"); //introduction
	printf("Balance: %d euros\n", bal); //information on your current balance
	printf("Current bet: %d euros \n", bet); //information on how much money you have put on the line
	/*list of possible moves in this game*/
	printf("\nChoose one of the following options:\n"); 
	printf("b - Start betting.\n");
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

	opc = getchar(); //read the inserted option

		switch(opc) {

			case 'b':
				printf("How much money do you want to throw away? "); 
				scanf("%d", &bet); //to save the amount of money the player wants to bet
				sscanf("%s",s);
				if(bet <= 0) { // if the player tries to play without using money
					printf("You can't play the game like this, use some money next time, use b to try again.\n");
				} 
				else if(bet > bal) { // if the player bets more than what he has
					printf("Woah there buckaroo, stop playing around and bet something within your reach, try again with b.\n");

				} 
				else if(bet <= bal) { // If the payer puts a vaid bet
					printf("You have selected to bet %d euros on this round.\n", bet);
					curbal = bal - bet;
					printf("Your current balance is %d euros.\n To continue select another option.\n", curbal);

				}

				opc = getchar(); // changing cases
				
				break; 
			case 'n':

				printf("\n");
				int numcasino = rand()%36; //random number generator for all numbers between 0 and 35
				printf("Alright, Feelin lucky i see, which number do you wish to bet? Pick between 1-35.\n");
				scanf("%d", &num);


				if(bet <= 0) { // in case the player starts witth n before b
					printf("You thought we were going to let you play without betting? Go back with 'b' and bet something before security decides that enough is enough, if you get what im saying.\n"); //error message
				} 
				else if(num == numcasino) { //if you get the number right, i'm not even sure if this is possible at the moment
					curbal = curbal + bet * 35;
					printf("It landed on %d.\n", numcasino);
					printf("Congratulations, you won! lucky you, you got 35 times the money you bet.\n");
					printf("To check your balance press 's'.\n");
					bet = 0;

				}
				else if (num != numcasino) { //if you do not get the number
					printf("It landed on %d.\n", numcasino);
					printf("Sucks to be you, ye' didn't get it mate, and yer' %d euros poorer\n", bet);
					bal = curbal;
					bet = 0;
				}

				break;
			case 'e':
				printf("\n");
        		int ec = rand()%2;
				printf("So you went for the 50/50 chance ey? Well good luck mate...\n");

				if (bet <= 0) {
					printf(" or so i would like to say, I suggest you bet something, you did not think we would allow you to play without betting did you? Press 'b' to go back to betting.\n");
				}
				else if(ec == 0){
					curbal = curbal + bet * 2;
					printf ("\nIt appears you were right, the ball landed on an even number, you just doubled the money you had bet!\n");
					printf("To check your balance press 's'.\n");
					bet = 0;
				}
				else if (ec == 1) {
					printf("\n\nOuch, it would seem your idea backfired, it landed on an odd number.\n");
					printf("\nTough luck buddy, you just lost %d euros on that one.\n", bet);
         			bal = curbal;
         			bet = 0;
				}
				break;
			case 'o':
				printf("\n");
        		int oc = rand()%2;
				printf("So you went for the 50/50 chance ey? Hope you win...");

				if (bet <= 0) {
					printf(" or so i would like to say, in order to win you must bet, you did not think we would allow you to play without betting did you? Press 'b' to go back to betting.\n");
				}
				else if(oc == 0){
					curbal = curbal + bet * 2;
					printf ("\nLady Luck is smiling, the ball landed on an odd number, you just doubled the bet!\n");
					printf("To check your balance press 's'.\n");
					bet = 0;
				}
				else if (oc == 1) {
					printf("\n\nOuch, it would seem your idea backfired, it landed on an even number.");
					printf("\nTough luck buddy, you just lost %d euros on that one.\n", bet);
          			bal = curbal;
          			bet = 0;
				}
				break;
			case 'r':
				break;
			case 'h':
			//basically what was already said
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
				printf("Your current balance is %d euros.\n", curbal); //to see you current balance

				break;
			case 'c':
				printf("It was a pleasure having you here, do come again!\n");
        		printf("You leave with %d euros.", curbal);
        		return 0;

				break;
		
		}
	} 

return 0;
}
