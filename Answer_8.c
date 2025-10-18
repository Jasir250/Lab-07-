/*
An array stores 10 numbers. Write a program to check whether the array is sorted in ascending order.
*/

#include <stdio.h>

int main() {

    int numbers = 10;
    int num_arr[10];
    int sorted = 1;
    
    
    for (int i = 0; i < numbers; i++)
    {
        printf("Enter number \x1b[1m%d\x1b[0m out of \x1b[1m%d\x1b[0m: ", i + 1, numbers);
        scanf("%d", &num_arr[i]);
        system("cls");
    }

    for (int i = 0; i < numbers - 1; i++)
    {
        if (num_arr[i] > num_arr[i + 1])
        {
            sorted = 0;
        }
        
    }
    
    if (sorted == 1)
    {
        printf("The array is sorted in ascending order");
    }else
    {
        printf("The array is not sorted in ascenging order");
    }
    
    

    

    return 0;
}