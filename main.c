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
        
    }
}
