/*
You have an array of 10 integers representing daily profit/loss. Write a program to sum only the positive
values.
*/

#include <stdio.h>

int main() {

    int financial_performance[10];
    int total_profit = 0;

    for(int day = 0; day < 10; day++){
        printf("Enter profit/loss for day %d: ", day + 1);
        scanf("%d", &financial_performance[day]);
        system("cls");
    }

    for(int day = 0; day < 10; day++){
        if(financial_performance[day] > 0)
            {
                total_profit += financial_performance[day];
            }
    }
    
    printf("The total profit is: %d\n", total_profit);



    return 0;
}