#include<stdio.h>
int main()
{
    float x,y;
    int ch,p,cp,i,length=0;
    printf("*********welcome to SBI*************\n");
    printf("Enter the initial amount;\n");
    scanf("%f",&x);
    printf("Please set your 4-digit pin;\n");
    scanf("%d",&p);




    printf("Enter the required option;\n");
    printf(" \n1.debit\n2.Withdrawal\n3.check balance\n");
    scanf("%d",&ch);
    switch(ch)
    {
    case 1:
        printf("Enter the amount to be debited;\n");
        scanf("%f",&y);
        x=x+y;
        printf("The balance is %f",x);
        break;

    case 2:
        printf("Enter the amount to be credited;\n");
        scanf("%f",&y);
        printf("please enter the 4 digit pin;\n");

        scanf("%d",&cp);
        if(p==cp){
        if(x>y){
        x=x-y;
        printf("The balance is %f",x);
        }
        else{
        printf("Insufficient balance");
            }
        }
        break;

    case 3:
        printf("The balance amount is %f",x);
        scanf("%f",&x);
        break;
    default:
        printf("Enter the required option;");
    }
printf("\n**********THANLK YOU************");


}
