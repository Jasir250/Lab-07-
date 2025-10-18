/*
A user enters a text containing letters, digits, spaces, and special characters. You want to create a
program that extracts only the digits from the input and stores them in an array. Then, calculate the sum
of all extracted digits and display it.
*/

#include <stdio.h>
// I assume the length of the array and that the user will enter at least one number

int main() {

    int i = 0;
    int numbers = 0;
    int arr_len = 20;  
    char user_text[4000];
    int sum = 0;

    printf("Enter a string: ");
    scanf(" %s", &user_text);
  


    while (user_text[i] != '\0')
    {
        if (user_text[i] >= '0' &&  user_text[i] <= '9')
        {
            numbers++;
        }
        
        i++;
    }
    
    int num_arr[numbers];
    i=0;
    numbers = 0;
    while (user_text[i] != '\0')
    {
        if (user_text[i] >= '0' &&  user_text[i] <= '9')
        {
            num_arr[numbers] = user_text[i] - 48; // Subtracted 48 to get the digit instead of the ascii code 
            numbers++;
        }
        i++;
    }

    for (int n = 0; n < numbers; n++ )
    {
        sum += num_arr[n];
        
    }

    
    printf("The sum of the numbers entered is: %d", sum);


    return 0;
}
