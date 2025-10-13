/*
Take an array of 12 employee IDs. Write a program that checks if a given employee ID exists in the array or not
*/

#include <stdio.h>

int main(){
	
	int total_employees = 12;
	int EmployeeID[total_employees];
	int employee;
	int check_ID;
	int present = 0;
	
	for (employee = 0; employee < total_employees; employee++){
		
		printf("Enter employee ID for employee number %d\n", employee + 1);
		scanf("%d", &EmployeeID[employee]);
	}
	
//	for (employee = 0; employee < total_employees; employee++){
//		
//		printf("%d", EmployeeID[employee]);
//	}
//	


	printf("\n==========================\n");
	printf("Enter a employeeID to check:\n");
	scanf(" %d", &check_ID);
	
	for (employee = 0; employee < total_employees; employee++){
		
		if (EmployeeID[employee] == check_ID){
			present = 1;
		}
	}
	
	if (present == 0) {
		printf("The given ID does not exist");
	}else{
		printf("The given ID exists");
	}
	
	
	return 0;
}

