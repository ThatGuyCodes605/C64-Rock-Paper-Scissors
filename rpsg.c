#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
int getpcchoice();
int getusrchoice();
void checkwinner(int usrchoice, int pcchoice);
int main(void) {
    int usrchoice;
    int pcchoice;
    
    srand(time(NULL));
    clrscr();
    printf("*** ROCK PAPER SCISSORS ***\n");
 

    do{
        usrchoice = getusrchoice();
        pcchoice = getpcchoice();
        switch (usrchoice) {
            case 1:
                printf("You chose ROCK\n");
                break;
            case 2:
                printf("You chose PAPER\n");
                break;
            case 3:
                printf("you chose SCISSORS\n");
                break;
        }
        switch (pcchoice) {
            case 1:
                printf("CPU chose ROCK\n");
                break;
            case 2:
                printf("CPU chose PAPER\n");
                break;
            case 3:
                printf("CPU chose SCISSORS\n");
                break;
            case 4:
                break;
        
    }
    checkwinner(usrchoice, pcchoice);
    }while (usrchoice != 4);
    
    return 0;
}
int getpcchoice() {
    return (rand() % 3) + 1;
}
int getusrchoice(void) {
    int choice = 0;
    char c;
    do {
        printf("choose an option\n");
        printf("1.rock\n2.paper\n3.scissors\n4. exit\n");
        printf("enter your choice: ");
        c = cgetc();      // Use cgetc() instead of scanf
        printf("%c\n", c);
        choice = c - '0'; // Convert char to int
    } while (choice < 1 || choice > 4);
    return choice;
}
void checkwinner(int usrchoice, int pcchoice) {
    if (usrchoice == pcchoice) {
        printf("ITS A TIE!\n");
    }
    else if (usrchoice == 1 && pcchoice == 3) {
        printf("YOU WIN!\n");
    }
    else if (usrchoice == 2 && pcchoice == 1) {
        printf("YOU WIN!\n");
    }
    else if (usrchoice == 3 && pcchoice == 2) {
        printf("YOU WIN!\n");
    }
    else {
        printf("YOU LOSE!");
    }


}
