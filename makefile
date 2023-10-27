CC=gcc
CFLAGS=-I.

all: program 

employeeTable.o: employeeTable.c 
	$(CC) -c employeeTable.c -o employeeTable.o 

employeeTwo.o: employeeTwo.c 
	$(CC) -c employeeTwo.c -o employeeTwo.o 

employeeOne.o: employeeOne.c
	$(CC) -c employeeOne.c -o employeeOne.o

program: employeeMain.c employeetable.c employeeTwo.c employeeOne.c
	$(CC) -o program employeeMain.c employeetable.c employeeOne.c 
clean:  
	del program.exe employeeTable.o employeeOne.o
