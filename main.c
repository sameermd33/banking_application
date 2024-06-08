#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>
typedef struct account{
    long int aadhar_number;
    long int mobile_number;
    char user_name[20];
    float current_balance;
}account;
int main(){
     long int randnum,read_aadhar;// random number for generating account number. read_aadhar - for reading aadhar number from user.
    srand(time(0));
     randnum = rand()%1000000000000+1;
     int pin;
     pin = rand()%10000+1;
    account icic[10];
    account *ptr;
    int number,choice,cmp,pin1;// number - number of accounts. choice - selecting bank. cmp - comparing string variable.
    char select[4];// to select user choice to display account details.
    float deposit,withdraw;// to read depositing amount and withdraw amount from the user.
    char decision[4];// decision string is used for depositing operation.
    long int aadhar; // used for despositing operation.
    printf("\nðŸ”°   Welcome to Sameer's Online Banking system   ðŸ”°");
    printf("\n\n");
    printf("_______________________________________________________________________________________________\n");
menu:
    choose_bank:
    printf("CHOOSE YOUR BANK:\n");
    printf("\n\n");
    printf("1.ICIC BANK\n");
    printf("2.STATE BANK OF INDIA\n");
    printf("3.HDFC BANK\n");
    printf("4.BANK OF BARODA\n");
    printf("\n");
    printf("5.EXIT\n");
    printf("\n");
    printf("Please enter your choice: ");
    scanf("%d",&choice);
    printf("\n\n");
    switch(choice){ 
        case 1   : printf("            WELCOME TO ICIC BANK: â�—â�—                      \n");
                   printf("_____________________________________________________________________________________\n");
                   printf("-------------------------------------------------------------------------------------\n");
                   break;
                   
        case 2   : printf("            WELCOME TO STATE BANK OF INDIA: â�—â�—                  \n");
                   printf("_____________________________________________________________________________________\n");
                   printf("-------------------------------------------------------------------------------------\n");
                    break;
                    
        case 3   : printf("            WELCOME TO HDFC BANK: â�—â�—                       \n");
                   printf("_____________________________________________________________________________________\n");
                   printf("-------------------------------------------------------------------------------------\n");
                    break;
                    
        case 4   : printf("            WELCOME TO BANK OF BARODA: â�—â�—                 \n");
                   printf("_____________________________________________________________________________________\n");
                   printf("-------------------------------------------------------------------------------------\n");
                   break;
                   
        case 5  : goto end;
    }
    printf("\n\n");
    int choice1;
    select:
    printf("SELECT CATEGORY: \n");
    printf("\n\n");
    printf("-----------------------------------------------------------------------------------------------\n");
    printf("1.Create a new account\n");
    printf("2.Deposit\n");
    printf("3.Withdrawal\n");
    printf("4.Know your account details\n");
    printf("5.Go back to main menu\n");
    printf("\n\n");
    printf("Enter your choice: ");
    scanf("%d",&choice1);
    printf("\n\n");
    printf("____________________________________________________________________________________________\n");
    switch(choice1){
        
case 1: printf("Enter your name: ");// need to use gets instead scanf 
        scanf("%s",icic[0].user_name);
        printf("Enter your mobile number: ");
        scanf("%ld",&icic[0].mobile_number);
        printf("Enter your Aadhar number: ");
        scanf("%ld",&icic[0].aadhar_number);
        printf("Enter amount that you want to deposit: ");
        scanf("%f",&icic[0].current_balance);
    printf("\n\n");
    printf("_______________________________________________________________________________________________\n");
    printf("PLEASE WAIT................................................................\n");
    printf("Processing....\n");
    printf("\n");
    printf(">>>>>>>>>>>>>>>>>>CONGRATULATIONS SUCCESSFULLY CREATED AN ACCOUNT<<<<<<<<<<<<<<<<<<<<<\n");
    printf("-----------------------------A/C NUMBER - %ld-----------------------------------\n",randnum);
    printf("------------------------------ PIN : %d----------------------------------------\n",pin);
    printf("\n\n");
    printf("DO YOU WANT TO KNOW YOUR ACCOUNT DETAILS? IF YES ENTER 'YES': ");
    scanf("%s",select);
    cmp = strcmp(select,"YES");
    int cmp1 = strcmp(select,"yes");
    if(cmp==0||cmp1==0){
        printf("\n\n");
        printf("PLease Enter your Account number: ");
       read:
       scanf("%ld",&read_aadhar);
        printf("Enter pin: ");
        scanf("%d",&pin1);
        if(read_aadhar == randnum && pin1==pin){
       printf("\n\n");
    printf("__________________________________________________________________________________________________\n");
    ptr = icic;
    
        printf("A/C number    : %ld\b\n\a",randnum);
        printf( "user name     : %s \b \n\a",ptr->user_name);
        printf( "mobile number : %ld \b \n\a",ptr->mobile_number);
        printf( "Current Balace: %f \b \n\a",ptr->current_balance);
        
}
else{
    printf("PLease Enter a valid Account number: \n");// need to implement goto statement over here!
    goto read;
}
}
printf("\n\n");
goto select;
break;

case 2:  deposit:
         printf("DEPOSIT: \n");
         printf("\n\n");
         printf("_______________________________________________________________________\n");
         printf("..................LODING\n");
         printf("Enter Account number: ");
         scanf("%ld",&aadhar);
         printf("Enter pin: ");
        scanf("%d",&pin1);
         printf("Enter depositing amount: ");
        scanf("%f",&deposit);
        if(pin1==pin && aadhar==randnum){
                   icic[0].current_balance = icic[0].current_balance + deposit;
         printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>TRANSCATION SUCCESSFUL<<<<<<<<<<<<<<<<<<<\n");
        }
        else{
            printf(" INCORRECT A/C NUMBER --- OR--- INCORRECT PINâ�Œ \n");
            goto deposit;
}
        printf("Do you want to check current balance? If yes type 'YES':  ");
        scanf("%s",decision);
        int cmp = strcmp(decision,"YES");
        cmp1 = strcmp(decision,"yes");
        if(cmp==0||cmp1==0){
            printf("\n\n");
            printf("Enter your Account number: ");
            scanf("%ld",&aadhar);
            if(aadhar==randnum){
                printf("CURRENT BALANCE : %f/-\n",icic[0].current_balance);
            }
        }
         printf("\n\n");
         goto select;
         break;

case 3:
        withdraw:
        printf("CASH WITHDRAWAL: \n");
        printf("\n\n");
        printf("__________________________________________________________________________________\n");
        printf("............................LODING\n");
        printf("Enter Account number: ");
        scanf("%ld",&aadhar);
        printf("Enter pin: ");
        scanf("%d",&pin1);
        printf("Enter withdrawal amoount: ");
        scanf("%f",&withdraw);
        if(pin1==pin && aadhar==randnum ){
         icic[0].current_balance = icic[0].current_balance - withdraw;
         printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>TRANSCATION SUCCESSFUL<<<<<<<<<<<<<<<<<<<\n");
        }
        else{
            printf("INCORRECT A/C NUMBER ----OR---- INCORRECT PINâ�Œ\n");
            goto withdraw;
        }
        printf("Do you want to check current balance? If yes type 'YES':  ");
        scanf("%s",decision);
         cmp = strcmp(decision,"YES");
         cmp1 = strcmp(decision,"yes");
        if(cmp==0||cmp1==0){
            printf("\n\n");
            printf("Enter your Account number: ");
            scanf("%ld",&aadhar);
            if(aadhar==randnum){
                printf("CURRENT BALANCE : %f/-\n",icic[0].current_balance);
            }
        }
        printf("\n\n");
         goto select;
         break;

case 4: detail:         printf("\n\n");
                 printf("________________________________________________________________________________\n");
                 printf("Enter your Account number: ");
                 scanf("%ld",&aadhar);
                 printf("Enter pin: ");
                 scanf("%d",&pin1);
        if(pin1==pin && aadhar==randnum ){
        
        printf("---------------------------------ACCOUNT DETAILS---------------------------------------\n");
        printf("ACCOUNT NUMBER  : %ld\n",randnum);
        printf("USER NAME       : %s\n",icic[0].user_name);
        printf("AADHAR NUMBER   : %ld\n",icic[0].aadhar_number);
        printf("MOBILE NUMBER   : %ld\n",icic[0].mobile_number);
        printf("CURRENT BALANCE : %f\n", icic[0].current_balance);
         printf("\n\n");
        }
        else{
            printf("Please enter valid details!\n");
            goto detail;
        }
         goto select;
         break;
         
case 5: printf("\n\n");
        printf("Please wait. LODING...................................................\n");
        goto menu;

    }
    printf("\n\n");
    end: printf(">>>>>>>>>>>>>>>>>>>>>>>>>>THANKS FOR VISITING OUR SITE!<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n");
    printf("__________________________________________________________________________________________________________\n");
return 0;
}
 
