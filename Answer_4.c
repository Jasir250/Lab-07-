/*You have an array of 6 numbers. Write a program to shift all elements one position to the right, moving
the last element to the first position.*/

#include <stdio.h>

int main() {

    int numArray[6];
    int temp;
    int last_position = 5;


    // Taking input
    for(int pos=0; pos < 6; pos++){
        printf("Enter number %d out of 6\n", pos + 1);
        scanf("%d", &numArray[pos]);
        system("cls");
    }

    // printing array before shifting
    printf("Before shifting:{");
    for(int pos=0; pos < 6; pos++)
    {
        printf("%d,", numArray[pos]);
    }   
    printf("\b}\n");
    


    //shifting the elements
    temp = numArray[last_position];
    for (int pos = last_position; pos > 0;)
    {
        numArray[pos] = numArray[pos - 1];
        pos -=1;
    }
    numArray[0] = temp;
    

    //printing the result
    printf("After shifting: {");
    for(int pos=0; pos < 6; pos++)
    {
        printf("%d,", numArray[pos]);
    }   
    printf("\b}");

    return 0;
}