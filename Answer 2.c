/*
A teacher has marks of 10 students stored in an array. Write a program to calculate the average marks. (Take input from the user)
*/

#include <stdio.h>

int main() {
	int total_students = 10;
	int marks[10];
	int student;
	int total_marks = 0;
	float average; 
	
	for(student=0; student < total_students; student++){
		printf("Enter the marks of student %d out of %d: ", student + 1, total_students);
		scanf(" %d", &marks[student]);
	}
	
	for(student=0; student < total_students; student++){
		total_marks += marks[student];
	}
	
	
	average = (float) total_marks / total_students;
	printf("The average marks are: %.2f", average);
	
	
	return 0;
}

