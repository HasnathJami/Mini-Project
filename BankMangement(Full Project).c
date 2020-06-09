#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define n 100

//Declaring function prototype for BankMangement Main()
void BankMangeMentMain();
//Variable Declaration Process For Bank Mangement Process
int key;
float credit,debit,transfer;
float creditBalance=0.00,debitBalance=0.00,transferBalance=0.00;
float totalBalance=0.00;


//Variable Declaration For User Registration
char  firstName[n],lastName[n],username[n],password[n];
char accountId[n];


//Variable Declaration For User Login
char  uName[n],pass[n];



//Function for User Registration And Login With Choice And Menu
void loginRegisterProcess()
{

    int choice;
    printf("Please Enter Your Choice:");
    scanf("%d",&choice);


    if(choice==1)
    {
        printf("Enter Your First Name: ");
        scanf("%s",&firstName);

        printf("Enter Your Last Name: ");
        scanf("%s",&lastName);

        printf("Enter Your username: ");
        scanf("%s",&username);

        printf("Enter Your Account ID: ");
        scanf("%s",&accountId);

        printf("Enter Your password <At Least 6 Digit> : ");
        scanf("%s",&password);

        printf("\n");
        printf("Register SuccessFully !!!\n");


    }



    if(choice==2)
    {
        printf("Username: ");
        scanf("%s",&uName);

        printf("Password: ");
        scanf("%s",&pass);


        if(strcmp(uName,username)==0 && strcmp(pass,password)==0)
        {
            printf("Login Successfully !!!\n");

            //After login,Bank management menu is appeared.(user must be login to use the bank management menu)
            BankMangeMentMain();

        }
        else
        {
            printf("Invalid User Name Or Password\n");
        }

    }


    if(choice==3)
    {
        //Finding string length for all variables to check if any user is found or not
        int len1=strlen(uName);
        int len2=strlen(pass);

        int len3=strlen(firstName);
        int len4=strlen(lastName);
        int len5=strlen(password);
        int len6=strlen(username);
        int len7=strlen(accountId);


        if(len3==0 && len4==0 && len5==0 && len6==0 && len7==0 )
        {

            printf("No User Found !!!\n");

        }

        else
        {

            //Deleting User By Initializing Variables Empty
            for(int i=0; i<n; i++)
            {
                uName[i]=0;
                pass[i]=0;
                firstName[i]=0;
                lastName[i]=0;
                password[i]=0;
                username[i]=0;
                accountId[i]=0;

            }

            printf("User Deleted Successfully!!!\n");
        }


    }


    if(choice==4)
    {

        exit(0);  //For Exiting The Execution Of Program
    }

}


void loginRegisterMain()
{
    //Creation of Menu For LoginRegister
    printf("\n*******************************MENU***********************************\n");
    printf("||<<1.REGISTER>>||    ||<<2.LOGIN>>||   ||<<3.DELETE>>||   ||<<4.EXIT>>||   \n\n");


    //The Process Is Running While It Is True.
    while(1)
    {
        loginRegisterProcess();
    }
}


//For all Bank management works.
void BankManageMent()
{

    printf("Please Enter Your Choice:");
    scanf("%d",&key);


    if(key==1)
    {
        //For Credit Menu
        printf("Please Enter The Credit Amount:");
        scanf("%f",&credit);
        totalBalance=totalBalance+credit;
        creditBalance=creditBalance+credit;

    }

    if(key==2)
    {
        //For Debit Menu
        printf("Please Enter The Debit Amount:");
        scanf("%f",&debit);

        if(debit<=totalBalance)
        {
            totalBalance=totalBalance-debit;
            debitBalance=debitBalance+debit;

        }
        else
        {
            printf("Not much money to debit\n");
        }

    }

    if(key==3)
    {
        //For Transfer Menu
        printf("Please Enter The Tranfer Amount:");
        scanf("%f",&transfer);

        if(transfer<=totalBalance)
        {
            totalBalance=totalBalance-transfer;
            transferBalance=transferBalance+transfer;
        }
        else
        {
            printf("Not much money to transfer");
        }

    }

    if(key==4)
    {
        //For BalanceDetails
        printf("\n-----------------------------------------");
        printf("-----------------------------------------\n");
        printf("Your Balance Details:\n");
        printf("-----------------------------------------");
        printf("-----------------------------------------\n");
        printf("User's Full Name: %s %s\n",firstName,lastName);
        printf("Account ID: %s\n",accountId);
        printf("Total Balance: %0.2f\n",totalBalance);
        printf("Credit Balance: %0.2f\n",creditBalance);
        printf("Debit Balance: %0.2f\n",debitBalance);
        printf("Transfer Balance: %0.2f\n",transferBalance);
        printf("-----------------------------------------");
        printf("-----------------------------------------\n\n");

    }

    if(key==5)
    {
        //Back To LoginRegister Menu When Back Option Is Chosen
        loginRegisterMain();
    }

}

void BankMangeMentMain()
{
    //Menu With Choice Key For Bank Management
    printf("\n*******************************MENU***********************************\n");
    printf("||<<1.CREDIT>>||    ||<<2.DEBIT>>||   ||<<3.TRANSFER>>||   ||<<4.BALANCEDETAILS>>||   ||<<5.BACK>>||   \n\n");
    BankManageMent();

    //The Process Is Running While It Is True.
    while(1)
    {
        BankManageMent();
    }

}



//Main Function
int main()
{

    loginRegisterMain();



}

