//PERSONAL EXPENSES TRACKER//
#include<stdio.h>
#include<string.h>

#define Max 100

int main()
{
    char names[50];
    int count=0;
    float amounts[Max];
    int i,choice,num;
    float total;

while(1)
{
    printf("\n==========Personal Expenses Tracker=========\n");
    printf("1. Enter the expense\n");
    printf("2. View expenses\n");
    printf("3. Total expenses\n");
    printf("3. Delete expenses\n");
    printf("4. Exit\n");
    printf("Enter choice\n");
    
    if(scanf("%d", &choice) != 1)
    {
        printf("Invalid input!\n");
        break;
    }
    switch(choice)
    {
        case 1:
        if(count>=Max)  
        {
            printf("Expenses list is full\n");
            break;
        } 

        printf("Enter name :\n");
        scanf(" %99[^\n]", names[count]);

         printf("Enter amount : Rs.\n");
         if(scanf("%f",&amounts[count]) != 1 || amounts[count] < 0)
         {
            printf("Invalid amount\n");
            break;
         }
         count++;
         printf("Expenses asdded successfully\n");
         break;
         case 2:
         if(count==0)
         {
            printf("No expenses recorded\n");
            break;
         }
    }
}
}
