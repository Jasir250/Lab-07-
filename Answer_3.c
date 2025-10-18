/*Take an array from user that stores the ages of 8 participants. Write a program to find the youngest
participant’s age.*/

#include <stdio.h>

int main() {
    int ages[8];
    int max_age;

    for (int a = 0; a < 8; a++){
        printf("Enter the age of participant %d out of %d\n", a +1, 8 );
        scanf("%d", &ages[a]);
    }

    max_age = ages[0];

    for (int a = 1; a < 8; a++)
    {
        if(max_age < ages[a]){
            max_age = ages[a];
        }
    }

    printf("\nThe age of the oldest participant is: %d", max_age);
    


    return 0;
}
