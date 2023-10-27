//Compile using the following command: gcc employeeMain.c employeeTable.c employeeOne.c 

 

//gcc employeeMain.c employeeTable.c employeeTwo.c 

 

#include <string.h> 

#include <stdlib.h> 

#include "employee.h" 

int main(void){ 

    //defined in employeeSearchOne.c 

    PtrToEmployee searchEmployeeByNumber(const Employee table[], int sizeTable, long numberToFind); 

    PtrToEmployee searchEmployeeByName(const Employee table[], int sizeTable, char * nameToFind); 

    PtrToEmployee searchEmployeeBySalary(const Employee table[], int sizeTable, double salaryToFind); 

    PtrToEmployee searchEmployeeByPhone(const Employee table[], int sizeTable, char * numberToFind); 

 

    //defined in employeeTable.c 

    extern Employee EmployeeTable[];     

    extern const int EmployeeTableEntries;      

 

    PtrToEmployee matchPtr;  //Declaration 

    matchPtr = searchEmployeeByNumber(EmployeeTable, EmployeeTableEntries, 1045); 

    //Example not found 

    if (matchPtr != NULL) 

        printf("Employee ID 1045 is in record %d\n", matchPtr - EmployeeTable); 

    else 

        printf("Employee ID is NOT found in the record\n"); 

 

    //Example found 

    matchPtr = searchEmployeeByName(EmployeeTable, EmployeeTableEntries, "Tony Bobcat"); 

    if (matchPtr != NULL) 

        printf("Employee Tony Bobcat is in record %d\n", matchPtr - EmployeeTable); 

    else 

        printf("Employee Tony Bobcat is NOT found in the record\n"); 

    //example found

    matchPtr = searchEmployeeBySalary(EmployeeTable, EmployeeTableEntries, 7.80); 

    if (matchPtr != NULL) 

        printf("Employee with salary 7.80 is in record %d\n", matchPtr - EmployeeTable); 

    else 

        printf("Employee with salary 7.80 is NOT found in the record\n");
   

    //example not Found

    matchPtr = searchEmployeeBySalary(EmployeeTable, EmployeeTableEntries, 2.12); 

    if (matchPtr != NULL) 

        printf("Employee with salary 2.12 is in record %d\n", matchPtr - EmployeeTable); 

    else 

        printf("Employee with salary 2.12 is NOT found in the record\n");


    //example found

    matchPtr = searchEmployeeByPhone(EmployeeTable, EmployeeTableEntries, "909-555-2134"); 

    if (matchPtr != NULL) 

        printf("Employee with phone number 909-555-2134 is in record %d\n", matchPtr - EmployeeTable); 

    else 

        printf("Employee with phone number 909-555-2134 is NOT found in the record\n");
   

    //example not Found

    matchPtr = searchEmployeeByPhone(EmployeeTable, EmployeeTableEntries, "626-327-7080"); 

    if (matchPtr != NULL) 

        printf("Employee with phone number 626-327-7080 is in record %d\n", matchPtr - EmployeeTable); 

    else 

        printf("Employee with phone number 626-327-7080 is NOT found in the record\n");
   
    return EXIT_SUCCESS;

    

} 