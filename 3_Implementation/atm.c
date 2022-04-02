#include "main.c"
void Menu() {

    printf("**************Hello!**************\n");
    printf("*******Welcome to indies bank*****\n\n");
    printf("****Please choose options below****\n\n");
    printf("< 1 >  Check Balance\n");
    printf("< 2 >  Deposit\n");
    printf("< 3 >  Withdraw\n");
    printf("< 4 >  Exit\n\n");

}//Main Menu

void checkBalance(float balance) {
    printf("\n\n****Your Available Balance is:   $%.2f\n\n", balance);

}//Check Balance

float Deposit(float balance) {
    float depsit;
    printf("$$$$Your Balance is: $%.2f\n\n", balance);
    printf("****Enter your amount to Deposit\n");
    scanf("%f", &depsit);


    balance += depsit;

    printf("\n****Your New Balance is:   $%.2f\n\n", balance);
    return balance;

}//money deposit

float moneyWithdraw(float balance) {
    float withdraw;
    bool back = true;

    printf("You choose to Withdraw a money\n");
    printf("$$$$Your Balance is: $%.2f\n\n", balance);

    while (back) {
    printf("Enter your amount to withdraw:\n");
    scanf("%f", &withdraw);


    if (withdraw < balance) {
        back = false;
        balance -= withdraw;
        printf("\n$$$$Your withdrawing money is:  $%.2f\n", withdraw);
        printf("****Your New Balance is:   $%.2f\n\n", balance);

    }

        else  {

        printf("+++You don't have enough money+++\n");
        printf("Please contact to your Bank Customer Services\n");
        printf("****Your Balance is:   $%.2f\n\n", balance);

    }
    }
    return balance;


}//money withdraw

void menuExit() {
    printf("--------------Take your receipt!!!------------------\n");
    printf("-----Thank you for using ATM Banking Machine!!!-----\n");
    


}//exit menu

void errorMessage() {;
    printf("+++!!!You selected invalid number!!!+++\n");
}//error message

