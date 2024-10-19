#include <stdio.h>
#include <string.h>

struct Employee {
    int empno;
    char empname[50];
    float salary;
};

union Data {
    int intValue;
    float floatValue;
    char strValue[50];
};
main() {
   
    struct Employee emp;
    
    emp.empno = 101;
    strcpy(emp.empname, "Alice");
    emp.salary = 50000.50;

    printf("Structure Example:\n");
    printf("Employee Number: %d\n", emp.empno);
    printf("Employee Name: %s\n", emp.empname);
    printf("Employee Salary: %.2f\n", emp.salary);
    printf("Size of Structure: %lu bytes\n\n", sizeof(emp));
    union Data data;
    
    data.intValue = 10;
    printf("Union Example:\n");
    printf("Integer Value: %d\n", data.intValue);
    
    data.floatValue = 3.14; 
    printf("Float Value: %.2f\n", data.floatValue); 
    printf("Integer Value after float assignment: %d\n", data.intValue); 
    strcpy(data.strValue, "Hello, Union!"); 
    printf("String Value: %s\n", data.strValue); 
    printf("Float Value after string assignment: %.2f\n", data.floatValue); 
    printf("Size of Union: %lu bytes\n", sizeof(data)); 
}

