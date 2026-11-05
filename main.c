//PERSONAL EXPENSES TRACKER//
#include<stdio.h>
#include<string.h>

#define Max 100

int main()
{
    char names[Max][100];
    int count=0;
    float amounts[Max];
    int i,choice,num;
    float total;

while(1)
{
    printf("\n==========Personal Expenses Tracker=========\n");
    printf("1. Enter the expense\n");
    printf("2. View expenses\n");
    printf("3. Delete Expenses \n");
    printf("4. Total Expenses\n");
    printf("5. Exit\n");
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
         for(i=0;i<count;i++)
         {
            printf("%d. %s - Rs. %.2f\n", i+1, names[i], amounts[i]);
         }
         break;

         case 3:
         if(count == 0)
         {
            printf("No expenses to delete\n");
            break;
         }
         for(i=0;i<count;i++)
         {
            printf("%d. %s - Rs. %.2f\n",i+1, names[i],amounts[i]);
         }
         printf("enter the number to delete\n");
         if(scanf("%d",&num) !=1)
         {
            printf("invalid input\n");
            break;
         }
         if(num<1 || num>count)
         {
            printf("Invalid expenses number\n");
            break;
         }
         for(i=num-1;i<count-1;i++)
         {
            strcpy(names[i], names[i+1]);
            amounts[i]=amounts[i+1];
         }
         count--;
         printf("Expenses deleted!\n");
         break;

         case 4: 
         total = 0;
         for(i=0;i<count;i++)
         {
            total+=amounts[i];
         }
         printf("Total Expenses: Rs. %.2f\n",total);
         break;
         
          case 5:
          printf("Thank you for using the tracker!\n");
         return 0;

         default:
         printf("Choose a number from 1 to 5.\n");
    }
}
return 0;
}
