/*
An array contains 12 numbers. Write a program to remove all occurrences of a given number and shift
remaining elements left.
For example user enters 1 , 2 , 4 , 5 , 7 ,7 , 7 ,8,9,10,10,11 as an array want to remove 7 than the output will
be 1, 2, 4, 5, 8, 9 , 10, 10, 11
*/

#include <stdio.h>

int main() {
    int num_array[12];
    int remove_num;
    int len_array = 12;

    // Taking elements of array as an input
    for(int index = 0; index < len_array; ){
            printf("Enter number %d out of %d\n", index + 1, len_array);
            scanf("%d", &num_array[index]);
            index++;
            system("cls");
    }


    // Showing the array before removing number
    printf("{");
    for(int index = 0; index < len_array; ){
        printf("%d, ", num_array[index]);
        index++;     
    }
        printf("\b\b}\n");

    // Removal process
    printf("Which number do you want to remove from the array?");
    scanf("%d", &remove_num);



    // printing array after removing and shifting 
    printf("{");
    for(int index = 0; index < len_array; ){
        if (num_array[index] != remove_num)
            printf("%d, ", num_array[index]);
        index++;     
    }
    printf("\b\b}");
    
    return 0;
}