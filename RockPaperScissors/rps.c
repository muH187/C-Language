#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void errorHandling(int compChoice, int userChoice);
void printChoice(int compChoice);
void printWinner(int userChoice, int compChoice);

int main() {

    srand(time(NULL));
    int compChoice = (rand() % 3) + 1;
    
    int userChoice;
    printf("1. Rock \n2. Paper \n3. Scissors\n");
    printf("Enter your choice: ");
    scanf("%d", &userChoice);

    printChoice(compChoice);

    errorHandling(userChoice, compChoice);
    printWinner(userChoice, compChoice);

    return 0;
}

void errorHandling(int compChoice, int userChoice) {
    if(userChoice < 1 || userChoice > 3) {
        printf("Invalid Choice!\n");
    } 
}

void printChoice(int compChoice) {
    if(compChoice == 1) {
        printf("You chose: Rock\n");
        printf("Computer chose: Rock\n");
    } else if(compChoice == 2) {
        printf("You chose: Paper\n");
        printf("Computer chose: Paper\n");
    } else if(compChoice == 3) {
        printf("You chose: Scissors\n");
        printf("Computer chose: Scissors\n");
    }
}

void printWinner(int userChoice, int compChoice) {
    if(userChoice == 1 && compChoice == 2) {
        printf("You lose!\n");
    } else if(userChoice == 2 && compChoice == 3) {
        printf("You lose!\n");
    } else if(userChoice == 3 && compChoice == 1) {
        printf("You lose!\n");
    } else if(userChoice == 1 && compChoice == 3){
        printf("You Win!\n");
    } else if(userChoice == 2 && compChoice == 1) {
        printf("You Win\n");
    } else if(userChoice == 3 && compChoice == 2) {
        printf("You Win\n");
    } else {
        printf("It's a tie!\n");
    }
}